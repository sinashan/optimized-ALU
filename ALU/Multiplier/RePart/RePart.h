#ifndef REPART_H
#define REPART_H
#include "systemc.h"
#include "../FourDigitAdder.h"
#include "../../Subtractor/ninecomp.h"
#include "../../Subtractor/ImSub/ImSub.h"
#include "mux/mux16.h"

SC_MODULE(RePart)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15, sign;
//----------Local Variables-------------
	FourDigitAdder fourAdder1, fourAdder2;
	ninecomp nine1, nine2, nine3, nine4;
	ImSub sub1, sub2, sub3, sub4;
	mux16 mux1;
	
	sc_signal< sc_logic > nine10, nine11, nine12, nine13, nine20, nine21, nine22, nine23, nine30, nine31, nine32, nine33, nine40, nine41, nine42, nine43; 
	sc_signal< sc_logic > four0, four1, four2, four3, four4, four5, four6, four7, four8, four9, four10, four11, four12, four13, four14, four15, four16;
	sc_signal< sc_logic > mux10, mux11, mux12, mux13, mux14, mux15, mux106, mux17, mux18, mux19, mux110, mux111, mux112, mux113, mux114, mux115, mux116;
	sc_signal< sc_logic > zero, one, nine90, nine91, nine92, nine93;
	sc_signal< sc_logic > sub10, sub11, sub12, sub13, sub1_sign;
	sc_signal< sc_logic > sub20, sub21, sub22, sub23, sub2_sign;
	sc_signal< sc_logic > sub30, sub31, sub32, sub33, sub3_sign;
	sc_signal< sc_logic > sub40, sub41, sub42, sub43, sub4_sign;


	void do_RePart()
	{
		zero = SC_LOGIC_0;
		one = SC_LOGIC_1;

		nine90 = SC_LOGIC_1;
		nine91 = SC_LOGIC_0;
		nine92 = SC_LOGIC_0;
		nine93 = SC_LOGIC_1;
	}

	SC_CTOR(RePart) : nine1("NINE1"), nine2("NINE2"), nine3("NINE3"), nine4("NINE4"), fourAdder1("FOUR1"), fourAdder2("FOUR2"), sub1("SUB1"), sub2("SUB2"), sub3("SUB3"), sub4("SUB4"), mux1("MUX")
	{
		nine1 << b0 << b1 << b2 << b3 << nine10 << nine11 << nine12 << nine13;
		nine2 << b4 << b5 << b6 << b7 << nine20 << nine21 << nine22 << nine23;
		nine3 << b8 << b9 << b10 << b11 << nine30 << nine31 << nine32 << nine33;
		nine4 << b12 << b13 << b14 << b15 << nine40 << nine41 << nine42 << nine43;
		
		fourAdder1 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << a12 << a13 << a14 << a15 << nine10 << nine11 << nine12 << nine13 << nine20 << nine21 << nine22 << nine23 << nine30 << nine31 << nine32 << nine33 << nine40 << nine41 << nine42 << nine43 << four0 << four1 << four2 << four3 << four4 << four5 << four6 << four7 << four8 << four9 << four10 << four11 << four12 << four13 << four14 << four15 << four16;

		sub1 << nine90 << nine91 << nine92 << nine93 << four0 << four1 << four2 << four3 << sub10 << sub11 << sub12 << sub13 << sub1_sign;
		sub2 << nine90 << nine91 << nine92 << nine93 << four4 << four5 << four6 << four7 << sub20 << sub21 << sub22 << sub23 << sub2_sign;
		sub3 << nine90 << nine91 << nine92 << nine93 << four8 << four9 << four10 << four11 << sub30 << sub31 << sub32 << sub33 << sub3_sign;
		sub4 << nine90 << nine91 << nine92 << nine93 << four12 << four13 << four14 << four15 << sub40 << sub41 << sub42 << sub43 << sub4_sign;

		fourAdder2 << four16 << zero << zero << zero << zero << zero << zero << zero << zero << zero << zero << zero << zero << zero << zero << zero << four0 << four1 << four2 << four3 << four4 << four5 << four6 << four7 << four8 << four9 << four10 << four11 << four12 << four13 << four14 << four15 << mux10 << mux11 << mux12 << mux13 << mux14 << mux15 << mux106 << mux17 << mux18 << mux19 << mux110 << mux111 << mux112 << mux113 << mux114 << mux115 << mux116;

		mux1 << mux10 << mux11 << mux12 << mux13 << mux14 << mux15 << mux106 << mux17 << mux18 << mux19 << mux110 << mux111 << mux112 << mux113 << mux114 << mux115 << zero << sub10 << sub11 << sub12 << sub13 << sub20 << sub21 << sub22 << sub23 << sub30 << sub31 << sub32 << sub33 << sub40 << sub41 << sub42 << sub43 << one << four16 << s0 << s1 << s2 << s3 << s4 << s5 << s6 << s7 << s8 << s9 << s10 << s11 << s12 << s13 << s14 << s15 << sign;


		SC_METHOD(do_RePart);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << a12 << a13 << a14 << a15 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << b12 << b13 << b14 << b15;
	}
};
#endif
