#ifndef MUX16_H
#define MUX16_H
#include "systemc.h"
#include "and.h"
#include "or2.h"
#include "not.h"

SC_MODULE(mux16)
{
	sc_in< sc_lv<16> > a, b;
	sc_in< sc_bv<1> > select;
	sc_out< sc_lv<16> > s;
//--------Local Variables----------
	and_mux and1, and2, and3, and4, and5, and6, and7, and8, and9, and10, and11, and12, and13, and14, and15, and16, and17, and18, and19, and20, and21, and22, and23, and24, and25, and26, and27, and28, and29, and30, and31, and32;
	or2_gate or1, or2, or3, or4, or5, or6, or7, or8, or9, or10, or11, or12, or13, or14, or15, or16;
	not_mux not1;

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15;
	sc_signal< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11, s12, s13, s14, s15;
	sc_signal < sc_bv<1> > select_not;
	sc_signal < sc_logic > and1out, and2out, and3out, and4out, and5out, and6out, and7out, and8out, and9out, and10out, and11out, and12out, and13out, and14out, and15out, and16out, and17out, and18out, and19out, and20out, and21out, and22out, and23out, and24out, and25out, and26out, and27out, and28out, and29out, and30out, and31out, and32out;

	void initiate()
	{
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
	}

	void out_write()
	{
		sc_lv<16> tmp;
		tmp[0] = s0;
		tmp[1] = s1;
		tmp[2] = s2;
		tmp[3] = s3;
		tmp[4] = s4;
		tmp[5] = s5;
		tmp[6] = s6;
		tmp[7] = s7;
		tmp[8] = s8;
		tmp[9] = s9;
		tmp[10] = s10;
		tmp[11] = s11;
		tmp[12] = s12;
		tmp[13] = s13;
		tmp[14] = s14;
		tmp[15] = s15;

		s.write(tmp);
	}


	SC_CTOR(mux16) : and1("A1"), and2("A2"), and3("A3"), and4("A4"), and5("A5"), and6("A6"), and7("A7"), and8("A8"), and9("A9"), and10("A10"), and11("A11"), and12("A12"), and13("A13"), and14("A14"), and15("A15"), and16("A16"), and17("A17"), and18("A18"), and19("A19"), and20("A20"), and21("A21"), and22("A22"), and23("A23"), and24("A24"), and25("A25"), and26("A26"), and27("A27"), and28("A28"), and29("A29"), and30("A30"), and31("A31"), and32("A32"), or1("OR1"), or2("OR2"), or3("OR3"), or4("OR4"), or5("OR5"), or6("OR6"), or7("OR7"), or8("OR8"), or9("OR9"), or10("OR10"), or11("OR11"), or12("OR12"), or13("OR13"), or14("OR14"), or15("OR15"), or16("OR16"), not1("NOT1")
	{
		not1 << select << select_not;

		and1 << a0 << select_not << and1out;
		and2 << a1 << select_not << and2out;
		and3 << a2 << select_not << and3out;
		and4 << a3 << select_not << and4out;
		and5 << a4 << select_not << and5out;
		and6 << a5 << select_not << and6out;
		and7 << a6 << select_not << and7out;
		and8 << a7 << select_not << and8out;
		and9 << a8 << select_not << and9out;
		and10 << a9 << select_not << and10out;
		and11 << a10 << select_not << and11out;
		and12 << a11 << select_not << and12out;
		and13 << a12 << select_not << and13out;
		and14 << a13 << select_not << and14out;
		and15 << a14 << select_not << and15out;
		and16 << a15 << select_not << and16out;

		and17 << b0 << select << and17out;
		and18 << b1 << select << and18out;
		and19 << b2 << select << and19out;
		and20 << b3 << select << and20out;
		and21 << b4 << select << and21out;
		and22 << b5 << select << and22out;
		and23 << b6 << select << and23out;
		and24 << b7 << select << and24out;
		and25 << b8 << select << and25out;
		and26 << b9 << select << and26out;
		and27 << b10 << select << and27out;
		and28 << b11 << select << and28out;
		and29 << b12 << select << and29out;
		and30 << b13 << select << and30out;
		and31 << b14 << select << and31out;
		and32 << b15 << select << and32out;



		or1 << and1out << and17out << s0;
		or2 << and2out << and18out << s1;
		or3 << and3out << and19out << s2;
		or4 << and4out << and20out << s3;
		or5 << and5out << and21out << s4;
		or6 << and6out << and22out << s5;
		or7 << and7out << and23out << s6;
		or8 << and8out << and24out << s7;
		or9 << and9out << and25out << s8;
		or10 << and10out << and26out << s9;
		or11 << and11out << and27out << s10;
		or12 << and12out << and28out << s11;
		or13 << and13out << and29out << s12;
		or14 << and14out << and30out << s13;
		or15 << and15out << and31out << s14;
		or16 << and16out << and32out << s15;

	


	
		SC_METHOD(initiate);
		sensitive << a << b;
		
	
		SC_METHOD(out_write);
		sensitive << s0 << s1 << s2 << s3 << s4 << s5 << s6 << s7 << s8 << s9 << s10 << s11 << s12 << s13 << s14 << s15;


	}
};
#endif
