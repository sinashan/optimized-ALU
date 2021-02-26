#ifndef FOUR_H
#define FOUR_H
#include "systemc.h"
#include "mux.h"
#include "and.h"
#include "or2.h"
#include "xor.h"
#include "xnor.h"

SC_MODULE(four2five)
{
	sc_in< sc_logic > a0, a1, a2, a3;
	sc_out< sc_logic > s0, s1, s2, s3, s4;
//---------Local Variables-------------
	mux mux1, mux2, mux3;
	xor_gate xor1, xor2, xor3, xor4;
	xnor_gate xnor1, xnor2;
	or2_gate or1, or2, or3;
	and_gate and1, and2;

	sc_signal< sc_logic > f, x, mux10, mux11, mux20, mux21, mux30, mux31, or1out, or2out, mux2out, xor3out, and1out, or3out;

	SC_CTOR(four2five) : mux1("MUX1"), mux2("MUX2"), mux3("MUX3"), xor1("XOR1"), xor2("XOR2"), xor3("XOR3"), xor4("XOR4"), xnor1("XNOR1"), xnor2("XNOR2"), or1("OR1"), or2("OR2"), or3("OR3"), and1("AND1"), and2("AND2")
	{
		xor1 << s3 << a0 << s0;
		xnor1 << a0 << a1 << mux11;
		xor2 << s4 << a1 << mux10;
		mux1 << mux10 << mux11 << s3 << s1;
		xnor2 << a1 << a2 << mux21;
		mux2 << a2 << mux21 << s4 << mux2out;
		xor3 << mux2out << or2out << xor3out;
		mux3 << mux2out << xor3out << s3 << s2;
		or1 << a1 << a2 << or1out;
		or2 << a1 << a0 << or2out;
		and1 << a2 << or2out << and1out;
		and2 << a3 << or1out << s4;
		or3 << and1out << a3 << or3out;
		xor4 << s4 << or3out << s3;
	}
};
#endif
