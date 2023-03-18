import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer, ClockCycles


outputs = [ 3, 1, 0, 5 , 10, 15, 16, 17, 18, 19]

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
    for i in range(10):
        dut._log.info("check output {}".format(i))
        while 1 :
            await ClockCycles(dut.clk, 1)
            if int(dut.data_write.value) == 0:
                assert (int(dut.data_out.value)) == outputs[i]
                tmp = 1000
                break

