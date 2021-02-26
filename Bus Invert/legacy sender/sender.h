#include "systemc.h"
#include "Latch32/latch32.h"
#include "Majority/majority.h"
#include "Buffer/buffer.h"
#include "xor.h"

SC_MODULE(sender)
{
	sc_in< sc_lv<32> > input;
	sc_out< sc_lv<32> > output;
	sc_out< sc_logic > invert;
//---------------Local Variables------------
	reg latch;
	majority major1;
	xor_gate xor1, xor2, xor3, xor4, xor5, xor6, xor7, xor8, xor9, xor10, xor11, xor12, xor13, xor14, xor15, xor16, xor17, xor18, xor19, xor20, xor21, xor22, xor23, xor24, xor25, xor26, xor27, xor28, xor29, xor30, xor31, xor32, xor33, xor34, xor35, xor36, xor37, xor38, xor39, xor40, xor41, xor42, xor43, xor44, xor45, xor46, xor47, xor48, xor49, xor50, xor51, xor52, xor53, xor54, xor55, xor56, xor57, xor58, xor59, xor60, xor61, xor62, xor63, xor64;
	buffer bf0, bf1, bf2, bf3, bf4, bf5, bf6, bf7, bf8, bf9, bf10, bf11, bf12, bf13, bf14, bf15, bf16, bf17, bf18, bf19, bf20, bf21, bf22, bf23, bf24, bf25, bf26, bf27, bf28, bf29, bf30, bf31;
	buffer buf0, buf1, buf2, buf3, buf4, buf5, buf6, buf7, buf8, buf9, buf10, buf11, buf12, buf13, buf14, buf15, buf16, buf17, buf18, buf19, buf20, buf21, buf22, buf23, buf24, buf25, buf26, buf27, buf28, buf29, buf30, buf31;


	sc_signal< sc_logic > i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31;
	sc_signal< sc_logic > buf_out0, buf_out1, buf_out2, buf_out3, buf_out4, buf_out5, buf_out6, buf_out7, buf_out8, buf_out9, buf_out10, buf_out11, buf_out12, buf_out13, buf_out14, buf_out15, buf_out16, buf_out17, buf_out18, buf_out19, buf_out20, buf_out21, buf_out22, buf_out23, buf_out24, buf_out25, buf_out26, buf_out27, buf_out28, buf_out29, buf_out30, buf_out31;
	sc_signal< sc_logic > buf_latch0, buf_latch1, buf_latch2, buf_latch3, buf_latch4, buf_latch5, buf_latch6, buf_latch7, buf_latch8, buf_latch9, buf_latch10, buf_latch11, buf_latch12, buf_latch13, buf_latch14, buf_latch15, buf_latch16, buf_latch17, buf_latch18, buf_latch19, buf_latch20, buf_latch21, buf_latch22, buf_latch23, buf_latch24, buf_latch25, buf_latch26, buf_latch27, buf_latch28, buf_latch29, buf_latch30, buf_latch31;

	sc_signal< sc_logic > xor1out, xor2out, xor3out, xor4out, xor5out, xor6out, xor7out, xor8out, xor9out, xor10out, xor11out, xor12out, xor13out, xor14out, xor15out, xor16out, xor17out, xor18out, xor19out, xor20out, xor21out, xor22out, xor23out, xor24out, xor25out, xor26out, xor27out, xor28out, xor29out, xor30out, xor31out, xor32out, xor33out, xor34out, xor35out, xor36out, xor37out, xor38out, xor39out, xor40out, xor41out, xor42out, xor43out, xor44out, xor45out, xor46out, xor47out, xor48out, xor49out, xor50out, xor51out, xor52out, xor53out, xor54out, xor55out, xor56out, xor57out, xor58out, xor59out, xor60out, xor61out, xor62out, xor63out, xor64out;

	sc_signal< sc_lv<32> > latch_input, latch_output;
	sc_signal< sc_logic > latchOut0, latchOut1, latchOut2, latchOut3, latchOut4, latchOut5, latchOut6, latchOut7, latchOut8, latchOut9, latchOut10, latchOut11, latchOut12, latchOut13, latchOut14, latchOut15, latchOut16, latchOut17, latchOut18, latchOut19, latchOut20, latchOut21, latchOut22, latchOut23, latchOut24, latchOut25, latchOut26, latchOut27, latchOut28, latchOut29, latchOut30, latchOut31;

	sc_signal< sc_lv<32> > major_in;

	sc_signal< sc_logic > major_out;

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

	void latch_in()
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

		latch_input = temp;

	}

	void latch_out()
	{


		latchOut0 = latch_output.read()[0];
		latchOut1 = latch_output.read()[1];
		latchOut2 = latch_output.read()[2];
		latchOut3 = latch_output.read()[3];
		latchOut4 = latch_output.read()[4];
		latchOut5 = latch_output.read()[5];
		latchOut6 = latch_output.read()[6];
		latchOut7 = latch_output.read()[7];
		latchOut8 = latch_output.read()[8];
		latchOut9 = latch_output.read()[9];
		latchOut10 = latch_output.read()[10];
		latchOut11 = latch_output.read()[11];
		latchOut12 = latch_output.read()[12];
		latchOut13 = latch_output.read()[13];
		latchOut14 = latch_output.read()[14];
		latchOut15 = latch_output.read()[15];
		latchOut16 = latch_output.read()[16];
		latchOut17 = latch_output.read()[17];
		latchOut18 = latch_output.read()[18];
		latchOut19 = latch_output.read()[19];
		latchOut20 = latch_output.read()[20];
		latchOut21 = latch_output.read()[21];
		latchOut22 = latch_output.read()[22];
		latchOut23 = latch_output.read()[23];
		latchOut24 = latch_output.read()[24];
		latchOut25 = latch_output.read()[25];
		latchOut26 = latch_output.read()[26];
		latchOut27 = latch_output.read()[27];
		latchOut28 = latch_output.read()[28];
		latchOut29 = latch_output.read()[29];
		latchOut30 = latch_output.read()[30];
		latchOut31 = latch_output.read()[31];
cout << "Latch Out = " << latch_output.read() << endl;
		output.write(latch_output.read());
	}

	void majority_in()
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
cout << "Major = " << temp2 << endl;
		major_in = temp2;
	}

	void printmajor_out()
	{
		cout << "Invert= " << major_out << endl;
	}

	SC_CTOR(sender) : latch("LATCH32"), major1("MAJORITY"), xor1("XOR1"), xor2("XOR2"), xor3("XOR3"), xor4("XOR4"), xor5("XOR5"), xor6("XOR6"), xor7("XOR7"), xor8("XOR8"), xor9("XOR9"), xor10("XOR10"), xor11("XOR11"), xor12("XOR12"), xor13("XOR13"), xor14("XOR14"), xor15("XOR15"), xor16("XOR16"), xor17("XOR17"), xor18("XOR18"), xor19("XOR19"), xor20("XOR20"), xor21("XOR21"), xor22("XOR22"), xor23("XOR23"), xor24("XOR24"), xor25("XOR25"), xor26("XOR26"), xor27("XOR27"), xor28("XOR28"), xor29("XOR29"), xor30("XOR30"), xor31("XOR31"), xor32("XOR32"), xor33("XOR33"), xor34("XOR34"), xor35("XOR35"), xor36("XOR36"), xor37("XOR37"), xor38("XOR38"), xor39("XOR39"), xor40("XOR40"), xor41("XOR41"), xor42("XOR42"), xor43("XOR43"), xor44("XOR44"), xor45("XOR45"), xor46("XOR46"), xor47("XOR47"), xor48("XOR48"), xor49("XOR49"), xor50("XOR50"), xor51("XOR51"), xor52("XOR52"), xor53("XOR53"), xor54("XOR54"), xor55("XOR55"), xor56("XOR56"), xor57("XOR57"), xor58("XOR58"), xor59("XOR59"), xor60("XOR60"), xor61("XOR61"), xor62("XOR62"), xor63("XOR63"), xor64("XOR64"), bf0("BUFFER0"), bf1("BUFFER1"), bf2("BUFFER2"), bf3("BUFFER3"), bf4("BUFFER4"), bf5("BUFFER5"), bf6("BUFFER6"), bf7("BUFFER7"), bf8("BUFFER8"), bf9("BUFFER9"), bf10("BUFFER10"), bf11("BUFFER11"), bf12("BUFFER12"), bf13("BUFFER13"), bf14("BUFFER14"), bf15("BUFFER15"), bf16("BUFFER16"), bf17("BUFFER17"), bf18("BUFFER18"), bf19("BUFFER19"), bf20("BUFFER20"), bf21("BUFFER21"), bf22("BUFFER22"), bf23("BUFFER23"), bf24("BUFFER24"), bf25("BUFFER25"), bf26("BUFFER26"), bf27("BUFFER27"), bf28("BUFFER28"), bf29("BUFFER29"), bf30("BUFFER30"), bf31("BUFFER31"), buf0("BUF0"), buf1("BUF1"), buf2("BUF2"), buf3("BUF3"), buf4("BUF4"), buf5("BUF5"), buf6("BUF6"), buf7("BUF7"), buf8("BUF8"), buf9("BUF9"), buf10("BUF10"), buf11("BUF11"), buf12("BUF12"), buf13("BUF13"), buf14("BUF14"), buf15("BUF15"), buf16("BUF16"), buf17("BUF17"), buf18("BUF18"), buf19("BUF19"), buf20("BUF20"), buf21("BUF21"), buf22("BUF22"), buf23("BUF23"), buf24("BUF24"), buf25("BUF25"), buf26("BUF26"), buf27("BUF27"), buf28("BUF28"), buf29("BUF29"), buf30("BUF30"), buf31("BUF31")
	{
		xor1 << i0 << major_out << xor1out;
		xor2 << i1 << major_out << xor2out;
		xor3 << i2 << major_out << xor3out;
		xor4 << i3 << major_out << xor4out;
		xor5 << i4 << major_out << xor5out;
		xor6 << i5 << major_out << xor6out;
		xor7 << i6 << major_out << xor7out;
		xor8 << i7 << major_out << xor8out;
		xor9 << i8 << major_out << xor9out;
		xor10 << i9 << major_out << xor10out;
		xor11 << i10 << major_out << xor11out;
		xor12 << i11 << major_out << xor12out;
		xor13 << i12 << major_out << xor13out;
		xor14 << i13 << major_out << xor14out;
		xor15 << i14 << major_out << xor15out;
		xor16 << i15 << major_out << xor16out;
		xor17 << i16 << major_out << xor17out;
		xor18 << i17 << major_out << xor18out;
		xor19 << i18 << major_out << xor19out;
		xor20 << i19 << major_out << xor20out;
		xor21 << i20 << major_out << xor21out;
		xor22 << i21 << major_out << xor22out;
		xor23 << i22 << major_out << xor23out;
		xor24 << i23 << major_out << xor24out;
		xor25 << i24 << major_out << xor25out;		
		xor26 << i25 << major_out << xor26out;		
		xor27 << i26 << major_out << xor27out;
		xor28 << i27 << major_out << xor28out;
		xor29 << i28 << major_out << xor29out;
		xor30 << i29 << major_out << xor30out;
		xor31 << i30 << major_out << xor31out;
		xor32 << i31 << major_out << xor32out;

		
		latch << latch_input << latch_output;

		

		buf0 << latchOut0 << buf_latch0;
		buf1 << latchOut1 << buf_latch1;		
		buf2 << latchOut2 << buf_latch2;		
		buf3 << latchOut3 << buf_latch3;		
		buf4 << latchOut4 << buf_latch4;		
		buf5 << latchOut5 << buf_latch5;		
		buf6 << latchOut6 << buf_latch6;		
		buf7 << latchOut7 << buf_latch7;		
		buf8 << latchOut8 << buf_latch8;		
		buf9 << latchOut9 << buf_latch9;		
		buf10 << latchOut10 << buf_latch10;		
		buf11 << latchOut11 << buf_latch11;		
		buf12 << latchOut12 << buf_latch12;		
		buf13 << latchOut13 << buf_latch13;		
		buf14 << latchOut14 << buf_latch14;		
		buf15 << latchOut15 << buf_latch15;		
		buf16 << latchOut16 << buf_latch16;		
		buf17 << latchOut17 << buf_latch17;		
		buf18 << latchOut18 << buf_latch18;		
		buf19 << latchOut19 << buf_latch19;		
		buf20 << latchOut20 << buf_latch20;		
		buf21 << latchOut21 << buf_latch21;		
		buf22 << latchOut22 << buf_latch22;		
		buf23 << latchOut23 << buf_latch23;		
		buf24 << latchOut24 << buf_latch24;		
		buf25 << latchOut25 << buf_latch25;		
		buf26 << latchOut26 << buf_latch26;		
		buf27 << latchOut27 << buf_latch27;		
		buf28 << latchOut28 << buf_latch28;		
		buf29 << latchOut29 << buf_latch29;		
		buf30 << latchOut30 << buf_latch30;	
		buf31 << latchOut31 << buf_latch31;

		bf0 << buf_latch0 << buf_out0;
		bf1 << buf_latch1 << buf_out1;		
		bf2 << buf_latch2 << buf_out2;		
		bf3 << buf_latch3 << buf_out3;		
		bf4 << buf_latch4 << buf_out4;		
		bf5 << buf_latch5 << buf_out5;		
		bf6 << buf_latch6 << buf_out6;		
		bf7 << buf_latch7 << buf_out7;		
		bf8 << buf_latch8 << buf_out8;		
		bf9 << buf_latch9 << buf_out9;		
		bf10 << buf_latch10 << buf_out10;		
		bf11 << buf_latch11 << buf_out11;		
		bf12 << buf_latch12 << buf_out12;		
		bf13 << buf_latch13 << buf_out13;		
		bf14 << buf_latch14 << buf_out14;		
		bf15 << buf_latch15 << buf_out15;		
		bf16 << buf_latch16 << buf_out16;		
		bf17 << buf_latch17 << buf_out17;		
		bf18 << buf_latch18 << buf_out18;		
		bf19 << buf_latch19 << buf_out19;		
		bf20 << buf_latch20 << buf_out20;		
		bf21 << buf_latch21 << buf_out21;		
		bf22 << buf_latch22 << buf_out22;		
		bf23 << buf_latch23 << buf_out23;		
		bf24 << buf_latch24 << buf_out24;		
		bf25 << buf_latch25 << buf_out25;		
		bf26 << buf_latch26 << buf_out26;		
		bf27 << buf_latch27 << buf_out27;		
		bf28 << buf_latch28 << buf_out28;		
		bf29 << buf_latch29 << buf_out29;		
		bf30 << buf_latch30 << buf_out30;	
		bf31 << buf_latch31 << buf_out31;								

		xor33 << i0 << buf_out0 << xor33out;
		xor34 << i1 << buf_out1 << xor34out;
		xor35 << i2 << buf_out2 << xor35out;
		xor36 << i3 << buf_out3 << xor36out;
		xor37 << i4 << buf_out4 << xor37out;
		xor38 << i5 << buf_out5 << xor38out;
		xor39 << i6 << buf_out6 << xor39out;
		xor40 << i7 << buf_out7 << xor40out;
		xor41 << i8 << buf_out8 << xor41out;
		xor42 << i9 << buf_out9 << xor42out;
		xor43 << i10 << buf_out10 << xor43out;
		xor44 << i11 << buf_out11 << xor44out;
		xor45 << i12 << buf_out12 << xor45out;
		xor46 << i13 << buf_out13 << xor46out;
		xor47 << i14 << buf_out14 << xor47out;
		xor48 << i15 << buf_out15 << xor48out;
		xor49 << i16 << buf_out16 << xor49out;
		xor50 << i17 << buf_out17 << xor50out;
		xor51 << i18 << buf_out18 << xor51out;
		xor52 << i19 << buf_out19 << xor52out;
		xor53 << i20 << buf_out20 << xor53out;
		xor54 << i21 << buf_out21 << xor54out;
		xor55 << i22 << buf_out22 << xor55out;
		xor56 << i23 << buf_out23 << xor56out;		
		xor57 << i24 << buf_out24 << xor57out;		
		xor58 << i25 << buf_out25 << xor58out;
		xor59 << i26 << buf_out26 << xor59out;
		xor60 << i27 << buf_out27 << xor60out;
		xor61 << i28 << buf_out28 << xor61out;
		xor62 << i29 << buf_out29 << xor62out;
		xor63 << i30 << buf_out30 << xor63out;
		xor64 << i31 << buf_out31 << xor64out;

		major1 << major_in << major_out;

		SC_METHOD(initiate);
		sensitive << input;

		SC_METHOD(latch_in);
		sensitive << xor1out << xor2out << xor3out << xor4out << xor5out << xor6out << xor7out << xor8out << xor9out << xor10out << xor11out << xor12out << xor13out << xor14out << xor15out << xor16out << xor17out << xor18out << xor19out << xor20out << xor21out << xor22out << xor23out << xor24out << xor25out << xor26out << xor27out << xor28out << xor29out << xor30out << xor31out << xor32out;

		SC_METHOD(latch_out);
		sensitive << latch_output;

		SC_METHOD(majority_in);
		sensitive << xor33out << xor34out << xor35out << xor36out << xor37out << xor38out << xor39out << xor40out << xor41out << xor42out << xor43out << xor44out << xor45out << xor46out << xor47out << xor48out << xor49out << xor50out << xor51out << xor52out << xor53out << xor54out << xor55out << xor56out << xor57out << xor58out << xor59out << xor60out << xor61out << xor62out << xor63out << xor64out;

		SC_METHOD(printmajor_out);
		sensitive << major_out;
	}
}; 
