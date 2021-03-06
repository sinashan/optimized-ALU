#ifndef IMSUB_H
#define IMSUB_H
#include "systemc.h"
#include "../../Utils/Misc./BCDadder/BCDadder.h"
#include "../../Utils/Misc./4-bit adder/fourAdder.h"
#include "../not.h"
#include "../xor.h"
#include "../ninecomp.h"
#include "alaki.h"

SC_MODULE(ImSub)
{
	sc_in< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3;
	sc_out< sc_logic > s0, s1, s2, s3, sign;
//------------Local Variables Here---------------------
	BCDadder bcd_adder;
	ninecomp ninecomp1;
	not_gate not1;
	xor_gate xor1, xor2, xor3, xor4;
	fourAdder four_adder;
	alaki alaki1;
	sc_signal< sc_logic > nineout0, nineout1, nineout2, nineout3;
	sc_signal< sc_logic > bcd0, bcd1, bcd2, bcd3, bcd_carry;
	sc_signal< sc_logic > xor1out, xor2out, xor3out, xor4out;
	sc_signal< sc_logic > not_out;
	sc_signal <sc_logic> useless_carry1, useless_carry2, zero;

	void do_sub()
	{
		zero = SC_LOGIC_0;
	}

	SC_CTOR(ImSub) : ninecomp1("NINE"), bcd_adder("BCD"), not1("NOT1"), xor1("XOR1"), xor2("XOR2"), xor3("XOR3"), xor4("XOR4"), four_adder("FOUR"), alaki1("ALAKI")
	{

		ninecomp1 << b0 << b1 << b2 << b3 << nineout0 << nineout1 << nineout2 << nineout3;
		bcd_adder << a0 << a1 << a2 << a3 << nineout0 << nineout1 << nineout2 << nineout3 << zero << bcd0 << bcd1 << bcd2 << bcd3 << useless_carry1 << bcd_carry;
		not1 << bcd_carry << not_out;
		xor1 << bcd0 << not_out << xor1out;
		xor2 << bcd1 << not_out << xor2out;
		xor3 << bcd2 << not_out << xor3out;
		xor4 << bcd3 << not_out << xor4out;
		four_adder << zero << not_out << zero << not_out << xor1out << xor2out << xor3out << xor4out << bcd_carry << s0 << s1 << s2 << s3 << useless_carry2;
		alaki1 << not_out << sign;
		SC_METHOD(do_sub);
		sensitive << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3;
		
	}
};
#endif
