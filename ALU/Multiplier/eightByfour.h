#ifndef EIGHT_BY_FOUR_H
#define EIGHT_BY_FOUR_H
#include "systemc.h"
#include "fourByfour.h"
#include "../Adder/ReAdder/ReAdder.h"

SC_MODULE(eightByfour)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11;
//-------------------Local Variables---------------
	fourByfour f1, f2;
	ReAdder midAdder;

	sc_signal< sc_logic > f1out0, f1out1, f1out2, f1out3, f1out4, f1out5, f1out6, f1out7;
	sc_signal< sc_logic > f2out0, f2out1, f2out2, f2out3, f2out4, f2out5, f2out6, f2out7;
	sc_signal< sc_logic > conv1out0, conv1out1, conv1out2, conv1out3, conv1out4, conv1out5, conv1out6, conv1out7;
	sc_signal< sc_logic > conv2out0, conv2out1, conv2out2, conv2out3, conv2out4, conv2out5, conv2out6, conv2out7;
	sc_signal< sc_logic > zero;
	sc_signal< sc_logic > mid0, mid1, mid2, mid3, mid4, mid5, mid6, mid7, mid8, mid9;

	void do_eight()
	{
		zero = SC_LOGIC_0;
	}

	SC_CTOR(eightByfour) : f1("FOUR1"), f2("FOUR2"), midAdder("MIDADDER")
	{
		f1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << s0 << s1 << s2 << s3 << f1out4 << f1out5 << f1out6 << f1out7;

		f2 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << f2out0 << f2out1 << f2out2 << f2out3 << f2out4 << f2out5 << f2out6 << f2out7;

		midAdder << f1out4 << f1out5 << f1out6 << f1out7 << zero << zero << zero << zero <<f2out0 << f2out1 << f2out2 << f2out3 << f2out4 << f2out5 << f2out6 << f2out7 << s4 << s5 << s6 << s7 << mid4 << s8 << s9 << s10 << s11 << mid9;

		
		SC_METHOD(do_eight);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3;
	}
};
#endif
