#ifndef EIGHT_BY_EIGHT_H
#define EIGHT_BY_EIGHT_H
#include "systemc.h"
#include "eightByfour.h"
#include "ThreeDigitAdder.h"

SC_MODULE(eightByeight)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, b4, b5, b6, b7;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15;
//-----------Local Variables----------------
	eightByfour EightFour1, EightFour2;
	ThreeDigitAdder three1;	

	sc_signal< sc_logic > e1out4, e1out5, e1out6, e1out7, e1out8, e1out9, e1out10, e1out11;
	sc_signal< sc_logic > e2out0, e2out1, e2out2, e2out3, e2out4, e2out5, e2out6, e2out7, e2out8, e2out9, e2out10, e2out11;
	sc_signal< sc_logic > zero;
	sc_signal< sc_logic > FuckedUp;
	
	void do_eight()
	{
		zero = SC_LOGIC_0;
	}

	SC_CTOR(eightByeight) : EightFour1("EIGHT1"), EightFour2("EIGHT2"), three1("THREE1")
	{
		EightFour1 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << s0 << s1 << s2 << s3 << e1out4 << e1out5 << e1out6 << e1out7 << e1out8 << e1out9 << e1out10 << e1out11;
		EightFour2 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b4 << b5 << b6 << b7 << e2out0 << e2out1 << e2out2 << e2out3 << e2out4 << e2out5 << e2out6 << e2out7 << e2out8 << e2out9 << e2out10 << e2out11;
		three1 << e1out4 << e1out5 << e1out6 << e1out7 << e1out8 << e1out9 << e1out10 << e1out11 << zero << zero << zero << zero << e2out0 << e2out1 << e2out2 << e2out3 << e2out4 << e2out5 << e2out6 << e2out7 << e2out8 << e2out9 << e2out10 << e2out11 << s4 << s5 << s6 << s7 << s8 << s9 << s10 << s11 << s12 << s13 << s14 << s15 << FuckedUp;

		SC_METHOD(do_eight);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7;
	}
};
#endif
