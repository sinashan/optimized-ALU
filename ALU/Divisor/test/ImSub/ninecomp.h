#ifndef NINE_COMPLEMENT_H
#define NINE_COMPLEMENT_H
#include "systemc.h"
#include "../../../Utils/Misc./4-bit adder/fourAdder.h"
#include "xor.h"

SC_MODULE(ninecomp)
{
	sc_in< sc_logic > a0, a1, a2, a3;
	sc_out< sc_logic > s0, s1, s2, s3;
//------------Local Variables Here---------------------
	fourAdder four1;
	xor_gate xor1, xor2, xor3, xor4;
	sc_signal< sc_logic > carry_in, carry_out, one, zero, xor1out, xor2out, xor3out, xor4out;
	
	void do_nine()
	{
		one = SC_LOGIC_1;
		zero = SC_LOGIC_0;
		carry_in = SC_LOGIC_0;
	}

	SC_CTOR(ninecomp) : four1("FOUR"), xor1("XOR1"), xor2("XOR2"), xor3("XOR3"), xor4("XOR4")
	{
		xor1 << a0 << one << xor1out;
		xor2 << a1 << one << xor2out;
		xor3 << a2 << one << xor3out;
		xor4 << a3 << one << xor4out;
		four1 << xor1out << xor2out << xor3out << xor4out << zero << one << zero << one << carry_in << s0 << s1 << s2 << s3 << carry_out;

		SC_METHOD(do_nine);
		sensitive << a0 << a1 << a2 << a3;
	}
};
#endif
