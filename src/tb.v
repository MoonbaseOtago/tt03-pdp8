`default_nettype none
`timescale 1ns/1ps

/*
this testbench just instantiates the module and makes some convenient wires
that can be driven / tested by the cocotb test.py
*/

module tb (
    // testbench is controlled by test.py
    input clk,
    input rst,
    output data_write,
    output [11:0] data_out
   );

    

    // this part dumps the trace to a vcd file that can be viewed with GTKWave
    initial begin
`include "testcode.v"

`ifdef LOCAL_TEST
        $dumpfile ("tb.vcd");
        $dumpvars (0, tb);
`endif
        #1;
    end

    // wire up the inputs and outputs
    reg  [1:0]data_in;
    wire [11:0]sram_out;
    wire [11:0]io_out=0;
    wire interrupt = 0;
    wire ready = 1;
    wire skip = 0;

    reg [3:0]din;
    wire [7:0] inputs = {din, 2'b0, rst, clk};	
    reg io;
    reg [4:0]io_sel;
    always @(*)
    case ({outputs[7], io, outputs[6:5]})
    4'b1_?_??: din = {3'bx, interrupt};
    4'b0_0_00: din = sram_out[11:8];
    4'b0_0_01: din = sram_out[7:4];
    4'b0_0_10: din = sram_out[3:0];
    4'b0_0_11: din = {2'b00,ready, skip};
    4'b0_1_00: din = io_out[11:8];
    4'b0_1_01: din = io_out[7:4];
    4'b0_1_10: din = io_out[3:0];
    endcase

    always @(posedge clk) begin
	if (rst || outputs[7]) begin
		io <= 0;
	end else
	if (outputs[7:5] == 3'b011) begin
		io <= 1;
		io_sel <= outputs[4:0];
	end
    end
	
    wire [7:0] outputs;
    assign data_out = {outputs[3:0], tmp};
    assign data_write = !(outputs[7:5] == 3'b010 && io && latch[5:0]==2);

    // instantiate the DUT
    moonbase_pdp8 #(.MAX_COUNT(100)) cpu(
`ifdef GL_TEST
        .vccd1( 1'b1),
        .vssd1( 1'b0),
`endif

        .io_in  (inputs),
        .io_out (outputs)
        );

    reg [11:0]latch;
    always @(*)
    if (outputs[7] && !clk)
    if (outputs[6]) begin
	latch[11:6] = outputs[5:0];
    end else begin
	latch[5:0] = outputs[5:0];
    end

    reg [11:0]sram[0:4095];
    reg [7:0]tmp;
    assign sram_out = sram[latch];
    always @(posedge clk) 
    if (outputs[4] && !outputs[7]) begin
	case (outputs[6:5]) 
	2'b00: tmp[3:0] <= outputs[3:0];
	2'b01: tmp[7:4] <= outputs[3:0];
	2'b10: if (io) begin
	       end else begin
	            sram[latch] <= {outputs[3:0], tmp};
	       end
	endcase
    end


endmodule
