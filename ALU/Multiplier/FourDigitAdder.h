#ifndef FourDigitAdder_H
#define FourDigitAdder_H
#include "systemc.h"
#include "../Utils/Misc./BCDadder/BCDadder.h"
#include "or2.h"

SC_MODULE(FourDigitAdder)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;
//------------Local Variables Here---------------------
	BCDadder BCD1, BCD2, BCD3, BCD4;
	or2_gate or1;
	sc_signal< sc_logic > zero, one, carry1, carry2, carry3, carry4, BCD1_MSB, BCD2_MSB, BCD3_MSB, BCD4_MSB, s5signal, s6signal, s7signal, s8signal, s9signal1, s9signal2;

	void real_add()
	{
		zero = SC_LOGIC_0;
		one = SC_LOGIC_1;
	}

	SC_CTOR(FourDigitAdder) : BCD1("BCD1"), BCD2("BCD2"), BCD3("BCD3"), BCD4("BCD4"), or1("OR1")
	{


		BCD1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << zero << s0 << s1 << s2 << s3 << carry1 << BCD1_MSB;
		BCD2 << a4 << a5 << a6 << a7 << b4 << b5 << b6 << b7 << BCD1_MSB << s4 << s5 << s6 << s7 << carry2 << BCD2_MSB;
		BCD3 << a8 << a9 << a10 << a11 << b8 << b9 << b10 << b11 << BCD2_MSB << s8 << s9 << s10 << s11 << carry3 << BCD3_MSB;
		BCD4 << a12 << a13 << a14 << a15 << b12 << b13 << b14 << b15 << BCD3_MSB << s12 << s13 << s14 << s15 << carry4 << BCD4_MSB;

		or1 << carry4 << BCD4_MSB << s16;

		SC_METHOD(real_add);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7;
	}
};
#endif
