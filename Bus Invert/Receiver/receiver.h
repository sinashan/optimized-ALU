#include "systemc.h"
#include "xor.h"
SC_MODULE(receiver)
{
	sc_in< sc_bv<32> > input;
	sc_in< sc_logic > inv;
	sc_out< sc_bv<32> > output;
//-------------Local Variables-----------------
	xor_gate xor1, xor2, xor3, xor4, xor5, xor6, xor7, xor8, xor9, xor10, xor11, xor12, xor13, xor14, xor15, xor16, xor17, xor18, xor19, xor20, xor21, xor22, xor23, xor24, xor25, xor26, xor27, xor28, xor29, xor30, xor31, xor32;

	sc_signal< sc_logic > i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31;
	sc_signal< sc_logic > xor1out, xor2out, xor3out, xor4out, xor5out, xor6out, xor7out, xor8out, xor9out, xor10out, xor11out, xor12out, xor13out, xor14out, xor15out, xor16out, xor17out, xor18out, xor19out, xor20out, xor21out, xor22out, xor23out, xor24out, xor25out, xor26out, xor27out, xor28out, xor29out, xor30out, xor31out, xor32out;

	void initiate()
	{
		i0 = input.read()[0];
		i1 = input.read()[1];
		i2 = input.read()[2];
		i3 = input.read()[3];
		i4 = input.read()[4];
		i5 = input.read()[5];
		i6 = input.read()[6];
		i7 = input.read()[7];
		i8 = input.read()[8];
		i9 = input.read()[9];
		i10 = input.read()[10];
		i11 = input.read()[11];
		i12 = input.read()[12];
		i13 = input.read()[13];
		i14 = input.read()[14];
		i15 = input.read()[15];
		i16 = input.read()[16];
		i17 = input.read()[17];
		i18 = input.read()[18];
		i19 = input.read()[19];
		i20 = input.read()[20];
		i21 = input.read()[21];
		i22 = input.read()[22];
		i23 = input.read()[23];
		i24 = input.read()[24];
		i25 = input.read()[25];
		i26 = input.read()[26];
		i27 = input.read()[27];
		i28 = input.read()[28];
		i29 = input.read()[29];
		i30 = input.read()[30];
		i31 = input.read()[31];
	}

	void xor_out()
	{
		sc_lv<32> temp;
		temp[0] = xor1out;
		temp[1] = xor2out;
		temp[2] = xor3out;
		temp[3] = xor4out;
		temp[4] = xor5out;
		temp[5] = xor6out;
		temp[6] = xor7out;
		temp[7] = xor8out;
		temp[8] = xor9out;
		temp[9] = xor10out;
		temp[10] = xor11out;
		temp[11] = xor12out;
		temp[12] = xor13out;
		temp[13] = xor14out;
		temp[14] = xor15out;
		temp[15] = xor16out;
		temp[16] = xor17out;
		temp[17] = xor18out;
		temp[18] = xor19out;
		temp[19] = xor20out;
		temp[20] = xor21out;
		temp[21] = xor22out;
		temp[22] = xor23out;
		temp[23] = xor24out;
		temp[24] = xor25out;
		temp[25] = xor26out;
		temp[26] = xor27out;
		temp[27] = xor28out;
		temp[28] = xor29out;
		temp[29] = xor30out;
		temp[30] = xor31out;
		temp[31] = xor32out;

		output.write(temp);
	}

	SC_CTOR(receiver) : xor1("XOR1"), xor2("XOR2"), xor3("XOR3"), xor4("XOR4"), xor5("XOR5"), xor6("XOR6"), xor7("XOR7"), xor8("XOR8"), xor9("XOR9"), xor10("XOR10"), xor11("XOR11"), xor12("XOR12"), xor13("XOR13"), xor14("XOR14"), xor15("XOR15"), xor16("XOR16"), xor17("XOR17"), xor18("XOR18"), xor19("XOR19"), xor20("XOR20"), xor21("XOR21"), xor22("XOR22"), xor23("XOR23"), xor24("XOR24"), xor25("XOR25"), xor26("XOR26"), xor27("XOR27"), xor28("XOR28"), xor29("XOR29"), xor30("XOR30"), xor31("XOR31"), xor32("XOR32")
	{

		xor1 << i0 << inv << xor1out;
		xor2 << i1 << inv << xor2out;
		xor3 << i2 << inv << xor3out;
		xor4 << i3 << inv << xor4out;
		xor5 << i4 << inv << xor5out;
		xor6 << i5 << inv << xor6out;
		xor7 << i6 << inv << xor7out;
		xor8 << i7 << inv << xor8out;
		xor9 << i8 << inv << xor9out;
		xor10 << i9 << inv << xor10out;
		xor11 << i10 << inv << xor11out;
		xor12 << i11 << inv << xor12out;
		xor13 << i12 << inv << xor13out;
		xor14 << i13 << inv << xor14out;
		xor15 << i14 << inv << xor15out;
		xor16 << i15 << inv << xor16out;
		xor17 << i16 << inv << xor17out;
		xor18 << i17 << inv << xor18out;
		xor19 << i18 << inv << xor19out;
		xor20 << i19 << inv << xor20out;
		xor21 << i20 << inv << xor21out;
		xor22 << i21 << inv << xor22out;
		xor23 << i22 << inv << xor23out;
		xor24 << i23 << inv << xor24out;
		xor25 << i24 << inv << xor25out;		
		xor26 << i25 << inv << xor26out;		
		xor27 << i26 << inv << xor27out;
		xor28 << i27 << inv << xor28out;
		xor29 << i28 << inv << xor29out;
		xor30 << i29 << inv << xor30out;
		xor31 << i30 << inv << xor31out;
		xor32 << i31 << inv << xor32out;

		SC_METHOD(initiate);
		sensitive << input;

		SC_METHOD(xor_out);
		sensitive << xor1out << xor2out << xor3out << xor4out << xor5out << xor6out << xor7out << xor8out << xor9out << xor10out << xor11out << xor12out << xor13out << xor14out << xor15out << xor16out << xor17out << xor18out << xor19out << xor20out << xor21out << xor22out << xor23out << xor24out << xor25out << xor26out << xor27out << xor28out << xor29out << xor30out << xor31out << xor32out;
	}
};
