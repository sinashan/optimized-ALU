#ifndef RESUB_H
#define RESUB_H
#include "systemc.h"
#include "../ninecomp.h"
#include "ReAdder.h"
#include "../../Utils/Misc./BCDadder/BCDadder.h"
#include "../../Utils/Misc./4-bit adder/fourAdder.h"
#include "../ImSub/ImSub.h"
#include "../not.h"


SC_MODULE(ReSub)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, b4, b5, b6, b7;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, sign;
//------------Local Variables Here---------------------
	ninecomp ninecomp1, ninecomp2;
	ReAdder ReAdder1;
	ImSub sub1, sub2;
	fourAdder four1, four2;
	not_gate not1;

	
	sc_signal< sc_logic > comp1out0, comp1out1, comp1out2, comp1out3, comp2out0, comp2out1, comp2out2, comp2out3;
	sc_signal< sc_logic > carry_in, zero, useless_carry, useless_s4, useless_s5, nine0, nine1, nine2, nine3;
	sc_signal< sc_logic > ReOut0, ReOut1, ReOut2, ReOut3;
	sc_signal< sc_logic > signOut;
	sc_signal< sc_logic > s0signal, s1signal, s2signal, s3signal, s4signal, s5signal, s6signal, s7signal, s8signal; 
	sc_signal< sc_logic > bcd1out0, bcd1out1, bcd1out2, bcd1out3, bcd1out4, bcd1out5, bcd1out6, bcd1out7;
	sc_signal< sc_logic > f1out0, f1out1, f1out2, f1out3, f1carry;
	sc_signal< sc_logic > f2out0, f2out1, f2out2, f2out3, f2carry;
	sc_signal< sc_logic > sub1out0, sub1out1, sub1out2, sub1out3, sub1sign;
	sc_signal< sc_logic > sub2out0, sub2out1, sub2out2, sub2out3, sub2sign;
	sc_signal< sc_logic > s8alaki;


	void do_sub()
	{
		carry_in = SC_LOGIC_0;
		zero = SC_LOGIC_0;
		
		nine0 = SC_LOGIC_1;
		nine1 = SC_LOGIC_0;
		nine2 = SC_LOGIC_0;
		nine3 = SC_LOGIC_1;
	}

	void out_write()
	{
		sc_logic temp = signOut.read();
		if(temp == SC_LOGIC_0)
		{
			s0.write(sub1out0);
			s1.write(sub1out1);
			s2.write(sub1out2);
			s3.write(sub1out3);
			s5.write(sub2out0);
			s6.write(sub2out1);
			s7.write(sub2out2);
			s8.write(sub2out3);
		}
		else if(temp == SC_LOGIC_1)
		{
			s0.write(f1out0);
			s1.write(f1out1);
			s2.write(f1out2);
			s3.write(f1out3);
			s5.write(f2out0);
			s6.write(f2out1);
			s7.write(f2out2);
			s8.write(f2out3);
			
		}
	}

	SC_CTOR(ReSub) : ninecomp1("NINE1"), ninecomp2("NINE2"), ReAdder1("REAL"), not1("NOT"), sub1("SUB1"), sub2("SUB2"), four1("FOUR1"), four2("FOUR2")
	{
		ninecomp1 << b0 << b1 << b2 << b3 << comp1out0 << comp1out1 << comp1out2 << comp1out3;
		ninecomp2 << b4 << b5 << b6 << b7 << comp2out0 << comp2out1 << comp2out2 << comp2out3;

		ReAdder1 << comp1out0 << comp1out1 << comp1out2 << comp1out3 << comp2out0 << comp2out1 << comp2out2 << comp2out3 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << ReOut0 << ReOut1 << ReOut2 << ReOut3 << s4signal << s5signal << s6signal << s7signal << s8signal << signOut;
		not1 << signOut << sign;
		
		four1 << ReOut0 << ReOut1 << ReOut2 << ReOut3 << signOut << zero << zero << zero << zero << f1out0 << f1out1 << f1out2 << f1out3 << f1carry;
		four2 << s5signal << s6signal << s7signal << s8signal << zero << zero << zero << zero << f1carry << f2out0 << f2out1 << f2out2 << f2out3 << f2carry;

		
		sub1 << nine0 << nine1 << nine2 << nine3 << ReOut0 << ReOut1 << ReOut2 << ReOut3 << sub1out0 << sub1out1 << sub1out2 << sub1out3 << sub1sign;
		sub2 << nine0 << nine1 << nine2 << nine3 << s5signal << s6signal << s7signal << s8signal << sub2out0 << sub2out1 << sub2out2 << sub2out3 << sub2sign;

		

		SC_METHOD(do_sub);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7;

		SC_METHOD(out_write);
		sensitive << f1out0 << f1out1 << f1out2 << f1out3 << f2out0 << f2out1 << f2out2 << f2out3 << sub1out0 << sub1out1 << sub1out2 << sub1out3 << sub2out0 << sub2out1 << sub2out2 << sub2out3;
	}
};
#endif
