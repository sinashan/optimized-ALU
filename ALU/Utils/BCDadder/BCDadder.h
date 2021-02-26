#ifndef BCDADDER1_H
#define BCDADDER1_H
#include "systemc.h"
#include "../Misc./4-bit adder/fourAdder.h"
#include "and.h"
#include "or.h"

SC_MODULE(BCDadder)
{
	sc_in< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3, cin;
	sc_out< sc_logic > sum0, sum1, sum2, sum3, cout;
	sc_inout< sc_logic > sum4;
//------------Local Variables Here---------------------
	fourAdder four1, four2; //instantiating two 4-adders for BCD adder
	and_gate and_gate1, and_gate2;
	or_gate or_gate1;
	sc_signal< sc_lv<4> > A_in, B_in; //signal for taking inputs
	sc_signal< sc_logic > f1s0, f1s1, f1s2, f1s3, f1cout; //first 4-adder signals
	sc_signal< sc_logic > and1Out, and2Out, orOut;
	sc_signal< sc_lv<4> > f2in1, f2in2; // to create two sc_lv types to be fed to second 4-bit adder
	sc_signal< sc_logic > carry_in;

	void BCDadd()
	{
			
	}

	SC_CTOR(BCDadder) : four1("F1"), four2("F2"), and_gate1("AND1"), and_gate2("AND2"), or_gate1("OR")
	{
		four1 << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3 << cin << f1s0 << f1s1 << f1s2 << f1s3 << f1cout;
		and_gate1 << f1s3 << f1s2 << and1Out;
		and_gate2 << f1s3 << f1s1 << and2Out;
		or_gate1 << f1cout << and1Out << and2Out <<  sum4;
		four2 << f1s0 << f1s1 << f1s2 << f1s3 << cin << sum4 << sum4 << cin << cin << sum0 << sum1 << sum2 << sum3 << cout;

		SC_METHOD(BCDadd);
		sensitive << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3;
	}


};
#endif
