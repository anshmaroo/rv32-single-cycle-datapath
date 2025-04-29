package rv32

import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

class DatapathTester extends AnyFlatSpec {
  behavior of "Datapath"
  it should "increment pc" in {
    simulate(new Datapath) { c =>
      c.reset.poke(true)
      c.clock.step(1)
      c.io.pcOut.expect(0);

      c.reset.poke(false)
      for (i <- 1 until 10000) {
        c.clock.step(1)
        c.io.pcOut.expect(i * 4)
      }
    }

  }
}