#ifndef MUX_H
#define MUX_H
#include "systemc.h"
#include "../../../Utils/Misc./BCDadder/and.h"
#include "or2.h"
#include "not.h"

SC_MODULE(mux)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3 ,b4 ,b5 ,b6 ,b7, select;
	sc_out< sc_logic > s0, s1, s2, s3 ,s4, s5, s6 , s7;
//--------Local Variables----------
	and_gate and1, and2, and3, and4, and5, and6, and7, and8, and9, and10, and11, and12, and13, and14, and15, and16;
	or2_gate or1, or2, or3, or4, or5, or6, or7, or8;
	not_gate not1;
	sc_signal < sc_logic > select_not;
	sc_signal < sc_logic > and1out, and2out, and3out, and4out, and5out, and6out, and7out, and8out, and9out, and10out, and11out, and12out, and13out, and14out, and15out, and16out;

	void multiplex()
	{

	}

	SC_CTOR(mux) : and1("A1"), and2("A2"), and3("A3"), and4("A4"), and5("A5"), and6("A6"), and7("A7"), and8("A8"), and9("A9"), and10("A10"), and11("A11"), and12("A12"), and13("A13"), and14("A14"), and15("A15"), and16("A16"), or1("OR1"), or2("OR2"), or3("OR3"), or4("OR4"), or5("OR5"), or6("OR6"), or7("OR7"), or8("OR8"), not1("NOT1")
	{
		not1 << select << select_not;

		and1 << a0 << select << and1out;
		and2 << a1 << select << and2out;
		and3 << a2 << select << and3out;
		and4 << a3 << select << and4out;
		and5 << a4 << select << and5out;
		and6 << a5 << select << and6out;
		and7 << a6 << select << and7out;
		and8 << a7 << select << and8out;

		and9 << b0 << select_not << and9out;
		and10 << b1 << select_not << and10out;
		and11 << b2 << select_not << and11out;
		and12 << b3 << select_not << and12out;
		and13 << b4 << select_not << and13out;
		and14 << b5 << select_not << and14out;
		and15 << b6 << select_not << and15out;
		and16 << b7 << select_not << and16out;

		or1 << and1out << and9out << s0;
		or2 << and2out << and10out << s1;
		or3 << and3out << and11out << s2;
		or4 << and4out << and12out << s3;
		or5 << and5out << and13out << s4;
		or6 << and6out << and14out << s5;
		or7 << and7out << and15out << s6;
		or8 << and8out << and16out << s7;


	
		
		
		SC_METHOD(multiplex);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << select;
	}
};
#endif
