#ifndef ReAdder_H
#define ReAdder_H
#include "systemc.h"
#include "../../../Utils/Misc./BCDadder/BCDadder.h"
#include "or2.h"

SC_MODULE(ReAdder)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, s16;
//------------Local Variables Here---------------------
	BCDadder BCD1, BCD2, BCD3, BCD4;
	or2_gate or1;

	sc_signal< sc_logic > zero, carry1, carry2, carry3, carry4;
	sc_signal< sc_logic > bcd1_sign, bcd2_sign, bcd3_sign, bcd4_sign;

	void real_add()
	{
		zero = SC_LOGIC_0;
	}

	SC_CTOR(ReAdder) : BCD1("BCD1"), BCD2("BCD2"), BCD3("BCD3"), BCD4("BCD4"), or1("OR1")
	{

		BCD1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << zero << s0 << s1 << s2 << s3 << carry1 << bcd1_sign;
		BCD2 << a4 << a5 << a6 << a7 << b4 << b5 << b6 << b7 << bcd1_sign << s4 << s5 << s6 << s7 << carry2 << bcd2_sign;
		BCD3 << a8 << a9 << a10 << a11 << b8 << b9 << b10 << b11 << bcd2_sign << s8 << s9 << s10 << s11 << carry3 << bcd3_sign;
		BCD4 << a12 << a13 << a14 << a15 << b12 << b13 << b14 << b15 << bcd3_sign << s12 << s13 << s14 << s15 << carry4 << bcd4_sign;

		or1 << bcd3_sign << bcd4_sign << s16;

		SC_METHOD(real_add);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << a12 << a13 << a14 << a15 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << b12 << b13 << b14 << b15;
	}
};
#endif
