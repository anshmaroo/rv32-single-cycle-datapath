import chisel3._
import chisel3.simulator.EphemeralSimulator._
import org.scalatest.flatspec.AnyFlatSpec
import rv32._

class ALUAddTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "add" in {
    simulate(new ALU) { c =>
      c.io.in0.poke(0.U)
      c.io.in1.poke(0x1.U)
      c.io.aluSel.poke(0.U)
      c.io.out.expect(0x1.U)
      println("Last output value : " + c.io.out.peek().litValue)

      c.io.in0.poke(0.U)
      c.io.in1.poke(Int.MaxValue.asUInt)
      c.io.aluSel.poke(0.U)
      c.io.out.expect(Int.MaxValue.asUInt)
      println("Last output value : " + c.io.out.peek().litValue)

      c.io.in0.poke(Int.MaxValue.asUInt)
      c.io.in1.poke(Int.MaxValue.asUInt)
      c.io.aluSel.poke(0.U)
      c.io.out.expect(4294967294L.asUInt)
      println("Last output value : " + c.io.out.peek().litValue)
    }

  }
}

class ALUSubTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "sub" in {
    simulate(new ALU) { c =>
      c.io.in0.poke(0.U)
      c.io.in1.poke(0x1.U)
      c.io.aluSel.poke(1.U)
      c.io.out.expect(0xFFFFFFFFL.asUInt)
      println("Last output value : " + c.io.out.peek().litValue)

      c.io.in0.poke(Int.MaxValue.asUInt)
      c.io.in1.poke(Int.MaxValue.asUInt)
      c.io.aluSel.poke(1.U)
      c.io.out.expect(0.U)
      println("Last output value : " + c.io.out.peek().litValue)

    }

  }
}

class ALUSLLTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "sll" in {
    simulate(new ALU) { c =>
      c.io.in0.poke(0.U)
      c.io.in1.poke(0x1.U)
      c.io.aluSel.poke(2.U)
      c.io.out.expect(0.asUInt)
      println("Last output value : " + c.io.out.peek().litValue)

      c.io.in0.poke(1.asUInt)
      c.io.in1.poke(5.asUInt)
      c.io.aluSel.poke(2.U)
      c.io.out.expect(32.U)
      println("Last output value : " + c.io.out.peek().litValue)

      c.io.in0.poke(1.asUInt)
      c.io.in1.poke(31.asUInt)
      c.io.aluSel.poke(2.U)
      c.io.out.expect(2147483648L.U)
      println("Last output value : " + c.io.out.peek().litValue)
    }

  }
}

class ALUSRLTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "srl" in {
    simulate(new ALU) { c =>
      for (i <- 0 until 31) {
        for (j <- 0 until 0xFFFFFFFF) {
          c.io.in0.poke(j.toLong.U)
          c.io.in1.poke(i.U)
          c.io.aluSel(3.U)
          c.io.out.expect(j >> i)
        }
      }
    }

  }
}

class ALUSRATest extends AnyFlatSpec {
  behavior of "ALU"
  it should "sra" in {
    simulate(new ALU) { c =>
      for (i <- 0 until 31) {
        for (j <- 0 until 0xFFFFFFFF) {
          c.io.in0.poke(j.toLong.U)
          c.io.in1.poke(i.U)
          c.io.aluSel(4.U)
          c.io.out.expect(j >> i)
        }
      }
    }

  }
}

class ALUSLTTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "SLT" in {
    simulate(new ALU) { c =>
      for (i <- 0 until 0xFFFFFFFF) {
        for (j <- 0 until 0xFFFFFFFF) {
          c.io.in0.poke(j.toLong.U)
          c.io.in1.poke(i.U)
          c.io.aluSel(5.U)
          c.io.out.expect(i.toLong.S < j.toLong.S)
        }
      }
    }
  }
}

class ALUSLTUTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "SLTU" in {
    simulate(new ALU) { c =>
      for (i <- 0 until 0xFFFFFFFF) {
        for (j <- 0 until 0xFFFFFFFF) {
          c.io.in0.poke(j.toLong.U)
          c.io.in1.poke(i.U)
          c.io.aluSel(6.U)
          c.io.out.expect(i.toLong.U < j.toLong.U)
        }
      }
    }
  }
}

class ALUOrTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "Or" in {
    simulate(new ALU) { c =>
      for (i <- 0 until 0xFFFFFFFF) {
        for (j <- 0 until 0xFFFFFFFF) {
          c.io.in0.poke(j.toLong.U)
          c.io.in1.poke(i.U)
          c.io.aluSel(7.U)
          c.io.out.expect(i.toLong.U | j.toLong.U)
        }
      }
    }
  }
}

class ALUAndTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "and" in {
    simulate(new ALU) { c =>
      for (i <- 0 until 0xFFFFFFFF) {
        for (j <- 0 until 0xFFFFFFFF) {
          c.io.in0.poke(j.toLong.U)
          c.io.in1.poke(i.U)
          c.io.aluSel(8.U)
          c.io.out.expect(i.toLong.U & j.toLong.U)
        }
      }
    }
  }
}

class ALUXORTest extends AnyFlatSpec {
  behavior of "ALU"
  it should "xor" in {
    simulate(new ALU) { c =>
      for (i <- 0 until 0xFFFFFFFF) {
        for (j <- 0 until 0xFFFFFFFF) {
          c.io.in0.poke(j.toLong.U)
          c.io.in1.poke(i.U)
          c.io.aluSel(9.U)
          c.io.out.expect(i.toLong.U ^ j.toLong.U)
        }
      }
    }
  }
}

