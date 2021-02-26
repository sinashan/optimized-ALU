#ifndef ReAdder_H
#define ReAdder_H
#include "systemc.h"
#include "../../Utils/Misc./BCDadder/BCDadder.h"
#include "or2.h"

SC_MODULE(ReAdder)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, b4, b5, b6, b7;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9;
//------------Local Variables Here---------------------
	BCDadder BCD1, BCD2, BCD3;
	or2_gate or1;
	sc_signal< sc_logic > zero, carry1, carry2, carry3, s5signal, s6signal, s7signal, s8signal, s9signal1, s9signal2;

	void real_add()
	{
		zero = SC_LOGIC_0;
	}

	SC_CTOR(ReAdder) : BCD1("BCD1"), BCD2("BCD2"), BCD3("BCD3"), or1("OR1")
	{

		BCD1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << zero << s0 << s1 << s2 << s3 << carry1 << s4;
		BCD2 << a4 << a5 << a6 << a7 << b4 << b5 << b6 << b7 << zero << s5signal << s6signal << s7signal << s8signal << carry2 << s9signal1;
		BCD3 << s4 << zero << zero << zero << s5signal << s6signal << s7signal << s8signal << zero << s5 << s6 << s7 << s8 << carry3 << s9signal2;
		or1 << s9signal1 << s9signal2 << s9;
		SC_METHOD(real_add);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7;
	}
};
#endif
