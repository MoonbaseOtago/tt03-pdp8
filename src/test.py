import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles


outputs = [ 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0x22, 0xee, 0x88, 0x66, 0xaa, 0xaf, 0xf1, 0x05, 0x6, 0x7, 0x8 ]

@cocotb.test()
async def test_cpu_pdp8(dut):
    dut._log.info("start")
    clock = Clock(dut.clk, 10, units="us")
    cocotb.fork(clock.start())
    
    dut._log.info("reset")
    dut.rst.value = 1
    await ClockCycles(dut.clk, 10)
    dut.rst.value = 0

    tmp = 1000
    dut._log.info("check all data outputs")
    for i in range(26):
        dut._log.info("check output {}".format(i))
        while 1 :
            await ClockCycles(dut.clk, 1)
            if int(dut.data_write.value) == 0:
                if int(dut.data_choose.value) == 0:
                    tmp = int(dut.data_out.value)<<4
                else :
                    assert (int(dut.data_out.value)+tmp) == outputs[i]
                    tmp = 1000
                    break

