#ifndef RESUB_H
#define RESUB_H
#include "systemc.h"
#include "ninecomp.h"
#include "ReAdder.h"
#include "../../../Utils/Misc./BCDadder/BCDadder.h"
#include "../../../Utils/Misc./4-bit adder/fourAdder.h"
#include "ImSub/ImSub.h"
#include "not.h"


SC_MODULE(ReSub)
{
	sc_in< sc_lv<16> > a, b;
	sc_out< sc_lv<16> > s;	
	sc_out< sc_logic > sign;
	sc_out< sc_bv<1> > enable;
//------------Local Variables Here---------------------
	ninecomp ninecomp1, ninecomp2, ninecomp3, ninecomp4;
	ReAdder ReAdder1;
	ImSub sub1, sub2, sub3, sub4;
	fourAdder four1, four2, four3, four4;
	not_gate not1;

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15;
	sc_signal< sc_logic > comp1out0, comp1out1, comp1out2, comp1out3, comp2out0, comp2out1, comp2out2, comp2out3, comp3out0, comp3out1, comp3out2, comp3out3, comp4out0, comp4out1, comp4out2, comp4out3;
	sc_signal< sc_logic > carry_in, zero, useless_carry, useless_s4, useless_s5, nine0, nine1, nine2, nine3;
	sc_signal< sc_logic > ReOut0, ReOut1, ReOut2, ReOut3, ReOut4, ReOut5, ReOut6, ReOut7, ReOut8, ReOut9, ReOut10, ReOut11, ReOut12, ReOut13, ReOut14, ReOut15, ReOut16;
	sc_signal< sc_logic > s0signal, s1signal, s2signal, s3signal, s4signal, s5signal, s6signal, s7signal, s8signal; 
	sc_signal< sc_logic > bcd1out0, bcd1out1, bcd1out2, bcd1out3, bcd1out4, bcd1out5, bcd1out6, bcd1out7;
	sc_signal< sc_logic > f1out0, f1out1, f1out2, f1out3, f1carry;
	sc_signal< sc_logic > f2out0, f2out1, f2out2, f2out3, f2carry;
	sc_signal< sc_logic > f3out0, f3out1, f3out2, f3out3, f3carry;
	sc_signal< sc_logic > f4out0, f4out1, f4out2, f4out3, f4carry;
	sc_signal< sc_logic > sub1out0, sub1out1, sub1out2, sub1out3, sub1sign;
	sc_signal< sc_logic > sub2out0, sub2out1, sub2out2, sub2out3, sub2sign;
	sc_signal< sc_logic > sub3out0, sub3out1, sub3out2, sub3out3, sub3sign;
	sc_signal< sc_logic > sub4out0, sub4out1, sub4out2, sub4out3, sub4sign;
	sc_signal< sc_logic > s8alaki;


	void initiate()
	{
		carry_in = SC_LOGIC_0;
		zero = SC_LOGIC_0;
		
		a0 = a.read()[0];
		a1 = a.read()[1];
		a2 = a.read()[2];
		a3 = a.read()[3];
		a4 = a.read()[4];
		a5 = a.read()[5];
		a6 = a.read()[6];
		a7 = a.read()[7];
		a8 = a.read()[8];
		a9 = a.read()[9];
		a10 = a.read()[10];
		a11 = a.read()[11];
		a12 = a.read()[12];
		a13 = a.read()[13];
		a14 = a.read()[14];
		a15 = a.read()[15];

		b0 = b.read()[0];
		b1 = b.read()[1];
		b2 = b.read()[2];
		b3 = b.read()[3];
		b4 = b.read()[4];
		b5 = b.read()[5];
		b6 = b.read()[6];
		b7 = b.read()[7];
		b8 = b.read()[8];
		b9 = b.read()[9];
		b10 = b.read()[10];
		b11 = b.read()[11];
		b12 = b.read()[12];
		b13 = b.read()[13];
		b14 = b.read()[14];
		b15 = b.read()[15];

		nine0 = SC_LOGIC_1;
		nine1 = SC_LOGIC_0;
		nine2 = SC_LOGIC_0;
		nine3 = SC_LOGIC_1;
	}

	void out_write()
	{
		sc_logic temp = ReOut16.read();
		sc_lv<16> tmp;
		if(temp == SC_LOGIC_0)
		{
			tmp[0] = sub1out0;
			tmp[1] = sub1out1;
			tmp[2] = sub1out2;
			tmp[3] = sub1out3;
			tmp[4] = sub2out0;
			tmp[5] = sub2out1;
			tmp[6] = sub2out2;
			tmp[7] = sub2out3;
			tmp[8] = sub3out0;
			tmp[9] = sub3out1;
			tmp[10] = sub3out2;
			tmp[11] = sub3out3;
			tmp[12] = sub4out0;
			tmp[13] = sub4out1;
			tmp[14] = sub4out2;
			tmp[15] = sub4out3;

		}
		else if(temp == SC_LOGIC_1)
		{
			tmp[0] = f1out0;
			tmp[1] = f1out1;
			tmp[2] = f1out2;
			tmp[3] = f1out3;
			tmp[4] = f2out0;
			tmp[5] = f2out1;
			tmp[6] = f2out2;
			tmp[7] = f2out3;
			tmp[8] = f3out0;
			tmp[9] = f3out1;
			tmp[10] = f3out2;
			tmp[11] = f3out3;
			tmp[12] = f4out0;
			tmp[13] = f4out1;
			tmp[14] = f4out2;
			tmp[15] = f4out3;
			
		}
		s.write(tmp);
		enable.write(1);
	}

	SC_CTOR(ReSub) : ninecomp1("NINE1"), ninecomp2("NINE2"), ninecomp3("NINE3"), ninecomp4("NINE4"), ReAdder1("REAL"), not1("NOT"), sub1("SUB1"), sub2("SUB2"), sub3("SUB3"), sub4("SUB4"), four1("FOUR1"), four2("FOUR2"), four3("FOUR3"), four4("FOUR4")
	{
		ninecomp1 << b0 << b1 << b2 << b3 << comp1out0 << comp1out1 << comp1out2 << comp1out3;
		ninecomp2 << b4 << b5 << b6 << b7 << comp2out0 << comp2out1 << comp2out2 << comp2out3;
		ninecomp3 << b8 << b9 << b10 << b11 << comp3out0 << comp3out1 << comp3out2 << comp3out3;
		ninecomp4 << b12 << b13 << b14 << b15 << comp4out0 << comp4out1 << comp4out2 << comp4out3;

		ReAdder1 << comp1out0 << comp1out1 << comp1out2 << comp1out3 << comp2out0 << comp2out1 << comp2out2 << comp2out3 << comp3out0 << comp3out1 << comp3out2 << comp3out3 << comp4out0 << comp4out1 << comp4out2 << comp4out3<< a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << a12 << a13 << a14 << a15 << ReOut0 << ReOut1 << ReOut2 << ReOut3 << ReOut4 << ReOut5 << ReOut6 << ReOut7 << ReOut8 << ReOut9 << ReOut10 << ReOut11 << ReOut12 << ReOut13 << ReOut14 << ReOut15 << ReOut16;

		not1 << ReOut16 << sign;
		
		four1 << ReOut0 << ReOut1 << ReOut2 << ReOut3 << ReOut16 << zero << zero << zero << zero << f1out0 << f1out1 << f1out2 << f1out3 << f1carry;
		four2 << ReOut4 << ReOut5 << ReOut6 << ReOut7 << zero << zero << zero << zero << f1carry << f2out0 << f2out1 << f2out2 << f2out3 << f2carry;
		four3 << ReOut8 << ReOut9 << ReOut10 << ReOut11 << zero << zero << zero << zero << f2carry << f3out0 << f3out1 << f3out2 << f3out3 << f3carry;
		four4 << ReOut12 << ReOut13 << ReOut14 << ReOut15 << zero << zero << zero << zero << f3carry << f4out0 << f4out1 << f4out2 << f4out3 << f4carry;

		
		sub1 << nine0 << nine1 << nine2 << nine3 << ReOut0 << ReOut1 << ReOut2 << ReOut3 << sub1out0 << sub1out1 << sub1out2 << sub1out3 << sub1sign;
		sub2 << nine0 << nine1 << nine2 << nine3 << ReOut4 << ReOut5 << ReOut6 << ReOut7 << sub2out0 << sub2out1 << sub2out2 << sub2out3 << sub2sign;
		sub3 << nine0 << nine1 << nine2 << nine3 << ReOut8 << ReOut9 << ReOut10 << ReOut11 << sub3out0 << sub3out1 << sub3out2 << sub3out3 << sub3sign;
		sub4 << nine0 << nine1 << nine2 << nine3 << ReOut12 << ReOut13 << ReOut14 << ReOut15 << sub4out0 << sub4out1 << sub4out2 << sub4out3 << sub4sign;

		

		SC_METHOD(initiate);
		sensitive << a;

		SC_METHOD(out_write);
		sensitive << f1out0 << f1out1 << f1out2 << f1out3 << f2out0 << f2out1 << f2out2 << f2out3 << f3out0 << f3out1 << f3out2 << f3out3 << f4out0 << f4out1 << f4out2 << f4out3 << sub1out0 << sub1out1 << sub1out2 << sub1out3 << sub2out0 << sub2out1 << sub2out2 << sub2out3 << sub3out0 << sub3out1 << sub3out2 << sub3out3 << sub4out0 << sub4out1 << sub4out2 << sub4out3;
	}
};
#endif
