#ifndef MUL_H
#define MUL_H
#include "systemc.h"
#include "fourByfour.h"
#include "eightByfour.h"
#include "eightByeight.h"
#include "ImPart/ImSum.h"
#include "RePart/RePart.h"

SC_MODULE(multiplier)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, c0, c1, c2, c3, c4, c5, c6, c7, d0, d1, d2, d3;
	sc_out< sc_logic > re0, re1, re2, re3, re4, re5, re6, re7, re8, re9, re10, re11, re12, re13, re14, re15, im0, im1, im2, im3, im4, im5, im6, im7, im8, im9, im10, im11, im12, reSign; 
//-------------Local Variables--------------
	fourByfour fourByfour1;
	eightByfour eightByfour1, eightByfour2;
	eightByeight eightByeight1;
	ImSum Im_Part;
	RePart Re_Part;

	sc_signal< sc_logic > zero;
	sc_signal< sc_logic > fbf0, fbf1, fbf2, fbf3, fbf4, fbf5, fbf6, fbf7;
	sc_signal< sc_logic > ebe0, ebe1, ebe2, ebe3, ebe4, ebe5, ebe6, ebe7, ebe8, ebe9, ebe10, ebe11, ebe12, ebe13, ebe14, ebe15;
	sc_signal< sc_logic > ebf10, ebf11, ebf12, ebf13, ebf14, ebf15, ebf16, ebf17, ebf18, ebf19, ebf110, ebf111;
	sc_signal< sc_logic > ebf20, ebf21, ebf22, ebf23, ebf24, ebf25, ebf26, ebf27, ebf28, ebf29, ebf210, ebf211;

	void do_multiplier()
	{
		zero = SC_LOGIC_0;
	}

	SC_CTOR(multiplier) : fourByfour1("FOURBYFOUR"), eightByfour1("EIGHTBYFOUR1"), eightByfour2("EIGHTBYFOUR2"), eightByeight1("EIGHTBYEIGHT"), Im_Part("IM"), Re_Part("RE")
	{
		fourByfour1 << b0 << b1 << b2 << b3 << d0 << d1 << d2 << d3 << fbf0 << fbf1 << fbf2 << fbf3 << fbf4 << fbf5 << fbf6 << fbf7;
		eightByeight1 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << ebe0 << ebe1 << ebe2 << ebe3 << ebe4 << ebe5 << ebe6 << ebe7 << ebe8 << ebe9 << ebe10 << ebe11 << ebe12 << ebe13 << ebe14 << ebe15;
		Re_Part << ebe0 << ebe1 << ebe2 << ebe3 << ebe4 << ebe5 << ebe6 << ebe7 << ebe8 << ebe9 << ebe10 << ebe11 << ebe12 << ebe13 << ebe14 << ebe15 << fbf0 << fbf1 << fbf2 << fbf3 << fbf4 << fbf5 << fbf6 << fbf7 << zero << zero << zero << zero << zero << zero << zero << zero << re0 << re1 << re2 << re3 << re4 << re5 << re6 << re7 << re8 << re9 << re10 << re11 << re12 << re13 << re14 << re15 << reSign;

		eightByfour1 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << d0 << d1 << d2 << d3 << ebf10 << ebf11 << ebf12 << ebf13 << ebf14 << ebf15 << ebf16 << ebf17 << ebf18 << ebf19 << ebf110 << ebf111;
		eightByfour2 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << b0 << b1 << b2 << b3 << ebf20 << ebf21 << ebf22 << ebf23 << ebf24 << ebf25 << ebf26 << ebf27 << ebf28 << ebf29 << ebf210 << ebf211;
		Im_Part << ebf10 << ebf11 << ebf12 << ebf13 << ebf14 << ebf15 << ebf16 << ebf17 << ebf18 << ebf19 << ebf110 << ebf111 << ebf20 << ebf21 << ebf22 << ebf23 << ebf24 << ebf25 << ebf26 << ebf27 << ebf28 << ebf29 << ebf210 << ebf211 << im0 << im1 << im2 << im3 << im4 << im5 << im6 << im7 << im8 << im9 << im10 << im11 << im12; 

		SC_METHOD(do_multiplier);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << c0 << c1 << c2 << c3 << c4 << c5 << c6 << c7 << d0 << d1 << d2 << d3;
	}
};
#endif
