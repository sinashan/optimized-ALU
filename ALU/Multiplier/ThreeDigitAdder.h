#ifndef ThreeDigitAdder_H
#define ThreeDigitAdder_H
#include "systemc.h"
#include "../Utils/Misc./BCDadder/BCDadder.h"
#include "or2.h"

SC_MODULE(ThreeDigitAdder)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12;
//------------Local Variables Here---------------------
	BCDadder BCD1, BCD2, BCD3;
	or2_gate or1;
	sc_signal< sc_logic > zero, one, carry1, carry2, carry3, BCD1_MSB, BCD2_MSB, BCD3_MSB, s5signal, s6signal, s7signal, s8signal, s9signal1, s9signal2;

	void real_add()
	{
		zero = SC_LOGIC_0;
		one = SC_LOGIC_1;
	}

	SC_CTOR(ThreeDigitAdder) : BCD1("BCD1"), BCD2("BCD2"), BCD3("BCD3"), or1("OR1")
	{


		BCD1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << zero << s0 << s1 << s2 << s3 << carry1 << BCD1_MSB;
		BCD2 << a4 << a5 << a6 << a7 << b4 << b5 << b6 << b7 << carry1 << s4 << s5 << s6 << s7 << carry2 << BCD2_MSB;
		BCD3 << a8 << a9 << a10 << a11 << b8 << b9 << b10 << b11 << carry2 << s8 << s9 << s10 << s11 << carry3 << BCD3_MSB;

		or1 << carry3 << BCD3_MSB << s12;

		SC_METHOD(real_add);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7;
	}
};
#endif
