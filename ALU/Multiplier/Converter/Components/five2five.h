#ifndef FIVE_H
#define FIVE_H
#include "systemc.h"
#include "mux.h"
#include "and.h"
#include "or2.h"
#include "xor.h"
#include "xnor.h"
#include "not.h"

SC_MODULE(five2five)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4;
	sc_out< sc_logic > s0, s1, s2, s3, s4;
//-----------Local Variables--------------
	mux mux1, mux2, mux3, mux4, mux5;
	xor_gate xor1, xor2, xor3, xor4, xor5;
	xnor_gate xnor1, xnor2;
	not_gate not1;
	and_gate and1, and2, and3, and4, and5;
	or2_gate or1, or2, or3, or4, or5, or6;


	sc_signal< sc_logic > xor2out, xnor1out, xnor1out_not, mux1out, s, and1out, or1out, xnor2out, mux3out, xor3out, mux4out, xor4out, or2out, and2out, and3out, or3out, f, and4out, p;	

	SC_CTOR(five2five) : mux1("MUX1"), mux2("MUX2"), mux3("MUX3"), mux4("MUX4"), mux5("MUX5"), xor1("XOR1"), xor2("XOR2"), xor3("XOR3"), xor4("XOR4"), xor5("XOR5"), xnor1("XNOR1"), xnor2("XNOR2"), not1("NOT1"), and1("AND1"), and2("AND2"), and3("AND3"), and4("AND4"), and5("AND5"), or1("OR1"), or2("OR2"), or3("OR3"), or4("OR4"), or5("OR5"), or6("OR6") 
	{
		xor1 << s3 << a0 << s0;
		xor2 << s4 << a1 << xor2out;
		xnor1 << a0 << a1 << xnor1out;
		not1 << xnor1out << xnor1out_not;
		mux1 << xor2out << xnor1out << s3 << mux1out;
		mux2 << mux1out << xnor1out_not << s << s1;
		and1 << a0 << a1 << and1out;
		or1 << a0 << a1 << or1out;
		xnor2 << a1 << a2 << xnor2out;
		mux3 << a2 << xnor2out << s4 << mux3out;
		xor3 << or1out << a2 << xor3out;
		mux4 << mux3out << xor3out << s3 << mux4out;
		xor4 << a2 << and1out << xor4out;
		mux5 << mux4out << xor4out << s << s2;
		or2 << a1 << a2 << or2out;
		and2 << or1out << a2 << and2out;
		and3 << a3 << or2out << and3out;
		or3 << and2out << a3 << or3out;
		or4 << and3out << a4 << s4;
		xor5 << s4 << or3out << f;
		and4 << a2 << and1out << and4out;	
		and5 << a3 << and4out << p;
		or5 << p << a4 << s;
		or6 << p << f << s3;
			
	}
};
#endif
