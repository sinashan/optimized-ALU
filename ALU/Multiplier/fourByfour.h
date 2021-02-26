#ifndef FOURBYFOUR_H
#define FOURBYFOUR_H
#include "systemc.h"
#include "../Utils/Misc./full adder/fadder.h"
#include "Converter/Components/and.h"
#include "Converter/converter.h"

SC_MODULE(fourByfour)
{
	sc_in< sc_logic > a0, a1, a2, a3, b0, b1, b2, b3;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7;
//--------------Local Variables---------------
	fadder fa1, fa2, fa3, fa4, fa5, fa6, fa7, fa8, fa9, fa10, fa11,fa12;
	and_gate and1, and2, and3, and4, and5, and6, and7, and8, and9, and10, and11, and12, and13, and14, and15, and16; 
	converter convert;

	sc_signal< sc_logic > and2out, and3out, and4out, and5out, and6out, and7out, and8out, fa1cout, fa2out, fa2cout, fa3out, fa3cout, fa4out, fa4cout, and9out, and10out, and11out, and12out, fa5cout, fa6out, fa6cout, fa7out, fa7cout, fa8out, fa8cout, and13out, and14out, and15out, and16out, fa9cout, fa10cout, fa11cout, conv0, conv1, conv2, conv3, conv4, conv5, conv6, conv7;
 
	sc_signal< sc_logic > zero;

	void mult()
	{
		zero = SC_LOGIC_0;
	}
	
	SC_CTOR(fourByfour) : fa1("FA1"), fa2("FA2"), fa3("FA3"), fa4("FA4"), fa5("FA5"), fa6("FA6"), fa7("FA7"), fa8("FA8"), fa9("FA9"), fa10("FA10"), fa11("FA11"), fa12("FA12"), and1("AND1"), and2("AND2"), and3("AND3"), and4("AND4"), and5("AND5"), and6("AND6"), and7("AND7"), and8("AND8"), and9("AND9"), and10("AND10"), and11("AND11"), and12("AND12"), and13("AND13"), and14("AND14"), and15("AND15"), and16("AND16"), convert("CONV")
	{
		and1 << a0 << b0 << conv0;
		and2 << a1 << b0 << and2out;
		and3 << a2 << b0 << and3out;
		and4 << a3 << b0 << and4out;

		and5 << a0 << b1 << and5out;
		and6 << a1 << b1 << and6out;
		and7 << a2 << b1 << and7out;
		and8 << a3 << b1 << and8out;

		fa1 << and2out << and5out << zero << conv1 << fa1cout;
		fa2 << and3out << and6out << fa1cout << fa2out << fa2cout;
		fa3 << and4out << and7out << fa2cout << fa3out << fa3cout;
		fa4 << and8out << zero << fa3cout << fa4out << fa4cout;

		and9 << a0 << b2 << and9out;
		and10 << a1 << b2 << and10out;
		and11 << a2 << b2 << and11out;
		and12 << a3 << b2 << and12out;

		fa5 << and9out << fa2out << zero << conv2 << fa5cout;
		fa6 << and10out << fa3out << fa5cout << fa6out << fa6cout;
		fa7 << and11out << fa4out << fa6cout << fa7out << fa7cout;
		fa8 << and12out << fa4cout << fa7cout << fa8out << fa8cout;
		
		and13 << a0 << b3 << and13out;
		and14 << a1 << b3 << and14out;
		and15 << a2 << b3 << and15out;
		and16 << a3 << b3 << and16out;

		fa9 << and13out << fa6out << zero << conv3 << fa9cout;
		fa10 << and14out << fa7out << fa9cout << conv4 << fa10cout;
		fa11 << and15out << fa8out << fa10cout << conv5 << fa11cout;
		fa12 << and16out << fa8cout << fa11cout << conv6 << conv7;

		convert << conv0 << conv1 << conv2 << conv3 << conv4 << conv5 << conv6 << s0 << s1 << s2 << s3 << s4 << s5 << s6 << s7;

		SC_METHOD(mult);
		sensitive << a0 << a1 << a2 << a3 << b0 << b1 << b2 << b3;
		
	}
};
#endif
