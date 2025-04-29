package rv32

import chisel3.simulator.EphemeralSimulator._
import chisel3.util._
import org.scalatest.flatspec.AnyFlatSpec

class ControlJumpTester extends AnyFlatSpec {
  behavior of "ControlLogic"
  it should "identify flags" in {
    simulate(new ControlLogic) { c =>
      c.io.instruction.poke(0x006082e7)
      c.io.aSel.expect(0)
      c.io.bSel.expect(1)
    }

  }
}
