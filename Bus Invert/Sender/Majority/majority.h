#include "systemc.h"
#include "sixTree/sixTree.h"
#include "Converter/converter.h"
#include "Sub/ReSub.h"
#include "Misc./l2b.h" //to convert sc_logic into bit vector for future uses
#include "../xor.h"


SC_MODULE(majority)
{
	sc_in< sc_bv<32> > a, b;
	sc_out< sc_bv<32> > out;
	sc_out< sc_logic > inv;
//-----------Local Variables-----------
	sixTree sixTree1;
	converter convert;
	ReSub subtract;
	l2b logic2bit;

	xor_gate xor1, xor2, xor3, xor4, xor5, xor6, xor7, xor8, xor9, xor10, xor11, xor12, xor13, xor14, xor15, xor16, xor17, xor18, xor19, xor20, xor21, xor22, xor23, xor24, xor25, xor26, xor27, xor28, xor29, xor30, xor31, xor32, xor33, xor34, xor35, xor36, xor37, xor38, xor39, xor40, xor41, xor42, xor43, xor44, xor45, xor46, xor47, xor48, xor49, xor50, xor51, xor52, xor53, xor54, xor55, xor56, xor57, xor58, xor59, xor60, xor61, xor62, xor63, xor64;
	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31;
	sc_signal< sc_logic > b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11, b12, b13, b14, b15, b16, b17, b18, b19, b20, b21, b22, b23, b24, b25, b26, b27, b28, b29, b30, b31;
	sc_signal< sc_logic > zero, sixteen0, sixteen1, sixteen2, sixteen3, sixteen4, sixteen5, sixteen6, sixteen7;
	sc_signal< sc_logic > sixOut0, sixOut1, sixOut2, sixOut3, sixOut4, sixOut5;
	sc_signal< sc_lv<6> > sixOut;
	sc_signal< sc_logic > convOut0, convOut1, convOut2, convOut3, convOut4, convOut5, convOut6, convOut7;
	sc_signal< sc_logic > sub0, sub1, sub2, sub3, sub4, sub5, sub6, sub7, sub8;
	sc_signal< sc_logic > invertBefore;

	sc_signal< sc_logic > xor1out, xor2out, xor3out, xor4out, xor5out, xor6out, xor7out, xor8out, xor9out, xor10out, xor11out, xor12out, xor13out, xor14out, xor15out, xor16out, xor17out, xor18out, xor19out, xor20out, xor21out, xor22out, xor23out, xor24out, xor25out, xor26out, xor27out, xor28out, xor29out, xor30out, xor31out, xor32out, xor33out, xor34out, xor35out, xor36out, xor37out, xor38out, xor39out, xor40out, xor41out, xor42out, xor43out, xor44out, xor45out, xor46out, xor47out, xor48out, xor49out, xor50out, xor51out, xor52out, xor53out, xor54out, xor55out, xor56out, xor57out, xor58out, xor59out, xor60out, xor61out, xor62out, xor63out, xor64out;
	sc_signal< sc_lv<32> > input;
	sc_signal< sc_logic > invert;

	void initiate()
	{
		zero = SC_LOGIC_0;

		sixteen0 = SC_LOGIC_0;
		sixteen1 = SC_LOGIC_1;
		sixteen2 = SC_LOGIC_1;
		sixteen3 = SC_LOGIC_0;
		sixteen4 = SC_LOGIC_1;
		sixteen5 = SC_LOGIC_0;
		sixteen6 = SC_LOGIC_0;
		sixteen7 = SC_LOGIC_0;

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
		a16 = a.read()[16];
		a17 = a.read()[17];
		a18 = a.read()[18];
		a19 = a.read()[19];
		a20 = a.read()[20];
		a21 = a.read()[21];
		a22 = a.read()[22];
		a23 = a.read()[23];
		a24 = a.read()[24];
		a25 = a.read()[25];
		a26 = a.read()[26];
		a27 = a.read()[27];
		a28 = a.read()[28];
		a29 = a.read()[29];
		a30 = a.read()[30];
		a31 = a.read()[31];

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
		b16 = b.read()[16];
		b17 = b.read()[17];
		b18 = b.read()[18];
		b19 = b.read()[19];
		b20 = b.read()[20];
		b21 = b.read()[21];
		b22 = b.read()[22];
		b23 = b.read()[23];
		b24 = b.read()[24];
		b25 = b.read()[25];
		b26 = b.read()[26];
		b27 = b.read()[27];
		b28 = b.read()[28];
		b29 = b.read()[29];
		b30 = b.read()[30];
		b31 = b.read()[31];


	}

	void tree_out()
	{
		sixOut0 = sixOut.read()[0];
		sixOut1 = sixOut.read()[1];
		sixOut2 = sixOut.read()[2];
		sixOut3 = sixOut.read()[3];
		sixOut4 = sixOut.read()[4];
		sixOut5 = sixOut.read()[5];
	}

	void xor_to_sixTree()
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

		input = temp;
	}

	void out_write()
	{
		sc_lv<32> temp2;
		temp2[0] = xor33out;
		temp2[1] = xor34out;
		temp2[2] = xor35out;
		temp2[3] = xor36out;
		temp2[4] = xor37out;
		temp2[5] = xor38out;
		temp2[6] = xor39out;
		temp2[7] = xor40out;
		temp2[8] = xor41out;
		temp2[9] = xor42out;
		temp2[10] = xor43out;
		temp2[11] = xor44out;
		temp2[12] = xor45out;
		temp2[13] = xor46out;
		temp2[14] = xor47out;
		temp2[15] = xor48out;
		temp2[16] = xor49out;
		temp2[17] = xor50out;
		temp2[18] = xor51out;
		temp2[19] = xor52out;
		temp2[20] = xor53out;
		temp2[21] = xor54out;
		temp2[22] = xor55out;
		temp2[23] = xor56out;
		temp2[24] = xor57out;
		temp2[25] = xor58out;
		temp2[26] = xor59out;
		temp2[27] = xor60out;
		temp2[28] = xor61out;
		temp2[29] = xor62out;
		temp2[30] = xor63out;
		temp2[31] = xor64out;

		out.write(temp2);
		inv.write(invert);
	}



	SC_CTOR(majority) : sixTree1("Tree"), convert("CONV"), subtract("SUB"), logic2bit("L2B"), xor1("XOR1"), xor2("XOR2"), xor3("XOR3"), xor4("XOR4"), xor5("XOR5"), xor6("XOR6"), xor7("XOR7"), xor8("XOR8"), xor9("XOR9"), xor10("XOR10"), xor11("XOR11"), xor12("XOR12"), xor13("XOR13"), xor14("XOR14"), xor15("XOR15"), xor16("XOR16"), xor17("XOR17"), xor18("XOR18"), xor19("XOR19"), xor20("XOR20"), xor21("XOR21"), xor22("XOR22"), xor23("XOR23"), xor24("XOR24"), xor25("XOR25"), xor26("XOR26"), xor27("XOR27"), xor28("XOR28"), xor29("XOR29"), xor30("XOR30"), xor31("XOR31"), xor32("XOR32"), xor33("XOR33"), xor34("XOR34"), xor35("XOR35"), xor36("XOR36"), xor37("XOR37"), xor38("XOR38"), xor39("XOR39"), xor40("XOR40"), xor41("XOR41"), xor42("XOR42"), xor43("XOR43"), xor44("XOR44"), xor45("XOR45"), xor46("XOR46"), xor47("XOR47"), xor48("XOR48"), xor49("XOR49"), xor50("XOR50"), xor51("XOR51"), xor52("XOR52"), xor53("XOR53"), xor54("XOR54"), xor55("XOR55"), xor56("XOR56"), xor57("XOR57"), xor58("XOR58"), xor59("XOR59"), xor60("XOR60"), xor61("XOR61"), xor62("XOR62"), xor63("XOR63"), xor64("XOR64")
	{

		xor1 << a0 << b0 << xor1out;
		xor2 << a1 << b1 << xor2out;
		xor3 << a2 << b2 << xor3out;
		xor4 << a3 << b3 << xor4out;
		xor5 << a4 << b4 << xor5out;
		xor6 << a5 << b5 << xor6out;
		xor7 << a6 << b6 << xor7out;
		xor8 << a7 << b7 << xor8out;
		xor9 << a8 << b8 << xor9out;
		xor10 << a9 << b9 << xor10out;
		xor11 << a10 << b10 << xor11out;
		xor12 << a11 << b11 << xor12out;
		xor13 << a12 << b12 << xor13out;
		xor14 << a13 << b13 << xor14out;
		xor15 << a14 << b14 << xor15out;
		xor16 << a15 << b15 << xor16out;
		xor17 << a16 << b16 << xor17out;
		xor18 << a17 << b17 << xor18out;
		xor19 << a18 << b18 << xor19out;
		xor20 << a19 << b19 << xor20out;
		xor21 << a20 << b20 << xor21out;
		xor22 << a21 << b21 << xor22out;
		xor23 << a22 << b22 << xor23out;
		xor24 << a23 << b23 << xor24out;
		xor25 << a24 << b24 << xor25out;		
		xor26 << a25 << b25 << xor26out;		
		xor27 << a26 << b26 << xor27out;
		xor28 << a27 << b27 << xor28out;
		xor29 << a28 << b28 << xor29out;
		xor30 << a29 << b29 << xor30out;
		xor31 << a30 << b30 << xor31out;
		xor32 << a31 << b31 << xor32out;

		sixTree1 << input << sixOut;

		convert << sixOut0 << sixOut1 << sixOut2 << sixOut3 << sixOut4 << sixOut5 << zero << convOut0 << convOut1 << convOut2 << convOut3 << convOut4 << convOut5 << convOut6 << convOut7;

		subtract << sixteen0 << sixteen1 << sixteen2 << sixteen3 << sixteen4 << sixteen5 << sixteen6 << sixteen7 << convOut0 << convOut1 << convOut2 << convOut3 << convOut4 << convOut5 << convOut6 << convOut7 << sub0 << sub1 << sub2 << sub3 << sub4 << sub5 << sub6 << sub7 << sub8 << invertBefore;

		logic2bit << invertBefore << invert;

		xor33 << b0 << invert << xor33out;
		xor34 << b1 << invert << xor34out;
		xor35 << b2 << invert << xor35out;
		xor36 << b3 << invert << xor36out;
		xor37 << b4 << invert << xor37out;
		xor38 << b5 << invert << xor38out;
		xor39 << b6 << invert << xor39out;
		xor40 << b7 << invert << xor40out;
		xor41 << b8 << invert << xor41out;
		xor42 << b9 << invert << xor42out;
		xor43 << b10 << invert << xor43out;
		xor44 << b11 << invert << xor44out;
		xor45 << b12 << invert << xor45out;
		xor46 << b13 << invert << xor46out;
		xor47 << b14 << invert << xor47out;
		xor48 << b15 << invert << xor48out;
		xor49 << b16 << invert << xor49out;
		xor50 << b17 << invert << xor50out;
		xor51 << b18 << invert << xor51out;
		xor52 << b19 << invert << xor52out;
		xor53 << b20 << invert << xor53out;
		xor54 << b21 << invert << xor54out;
		xor55 << b22 << invert << xor55out;
		xor56 << b23 << invert << xor56out;		
		xor57 << b24 << invert << xor57out;		
		xor58 << b25 << invert << xor58out;
		xor59 << b26 << invert << xor59out;
		xor60 << b27 << invert << xor60out;
		xor61 << b28 << invert << xor61out;
		xor62 << b29 << invert << xor62out;
		xor63 << b30 << invert << xor63out;
		xor64 << b31 << invert << xor64out;


		SC_METHOD(initiate);
		sensitive << b;

		SC_METHOD(tree_out);
		sensitive << sixOut;

		SC_METHOD(xor_to_sixTree);
		sensitive << xor1out << xor2out << xor3out << xor4out << xor5out << xor6out << xor7out << xor8out << xor9out << xor10out << xor11out << xor12out << xor13out << xor14out << xor15out << xor16out << xor17out << xor18out << xor19out << xor20out << xor21out << xor22out << xor23out << xor24out << xor25out << xor26out << xor27out << xor28out << xor29out << xor30out << xor31out << xor32out;

		SC_METHOD(out_write);;
		sensitive << xor33out << xor34out << xor35out << xor36out << xor37out << xor38out << xor39out << xor40out << xor41out << xor42out << xor43out << xor44out << xor45out << xor46out << xor47out << xor48out << xor49out << xor50out << xor51out << xor52out << xor53out << xor54out << xor55out << xor56out << xor57out << xor58out << xor59out << xor60out << xor61out << xor62out << xor63out << xor64out;


	}
};
