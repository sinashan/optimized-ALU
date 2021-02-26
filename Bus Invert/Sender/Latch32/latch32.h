#include "systemc.h"
#include "Latch/latch.h"
#include "not.h"

SC_MODULE(reg)
{
	sc_in< sc_bv<32> > input;
	//sc_in< sc_logic > inv;
	sc_out< sc_bv<32> > output;
	//sc_out< sc_logic > inv_out;
//-----------Local Variables--------------
	latch latch1, latch2, latch3, latch4, latch5, latch6, latch7, latch8, latch9, latch10, latch11, latch12, latch13, latch14, latch15, latch16, latch17, latch18, latch19, latch20, latch21, latch22, latch23, latch24, latch25, latch26, latch27, latch28, latch29, latch30, latch31, latch32;  
	not_gate not1, not2, not3, not4, not5, not6, not7, not8, not9, not10, not11, not12, not13, not14, not15, not16, not17, not18, not19, not20, not21, not22, not23, not24, not25, not26, not27, not28, not29, not30, not31, not32; 
	
	sc_signal< sc_logic > i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31; 
	sc_signal< sc_logic > n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15, n16, n17, n18, n19, n20, n21, n22, n23, n24, n25, n26, n27, n28, n29, n30, n31;
	sc_signal< sc_logic > latch_out0, latch_out1, latch_out2, latch_out3, latch_out4, latch_out5, latch_out6, latch_out7, latch_out8, latch_out9, latch_out10, latch_out11, latch_out12, latch_out13, latch_out14, latch_out15, latch_out16, latch_out17, latch_out18, latch_out19, latch_out20, latch_out21, latch_out22, latch_out23, latch_out24, latch_out25, latch_out26, latch_out27, latch_out28, latch_out29, latch_out30, latch_out31;
	sc_signal< sc_logic > latch_not0, latch_not1, latch_not2, latch_not3, latch_not4, latch_not5, latch_not6, latch_not7, latch_not8, latch_not9, latch_not10, latch_not11, latch_not12, latch_not13, latch_not14, latch_not15, latch_not16, latch_not17, latch_not18, latch_not19, latch_not20, latch_not21, latch_not22, latch_not23, latch_not24, latch_not25, latch_not26, latch_not27, latch_not28, latch_not29, latch_not30, latch_not31;  



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

	void out_write()
	{
		sc_lv<32> temp;
		temp[0] = latch_out0.read();
		temp[1] = latch_out1.read();
		temp[2] = latch_out2.read();
		temp[3] = latch_out3.read();
		temp[4] = latch_out4.read();
		temp[5] = latch_out5.read();
		temp[6] = latch_out6.read();
		temp[7] = latch_out7.read();
		temp[8] = latch_out8.read();
		temp[9] = latch_out9.read();
		temp[10] = latch_out10.read();
		temp[11] = latch_out11.read();
		temp[12] = latch_out12.read();
		temp[13] = latch_out13.read();
		temp[14] = latch_out14.read();
		temp[15] = latch_out15.read();
		temp[16] = latch_out16.read();
		temp[17] = latch_out17.read();
		temp[18] = latch_out18.read();
		temp[19] = latch_out19.read();
		temp[20] = latch_out20.read();
		temp[21] = latch_out21.read();
		temp[22] = latch_out22.read();
		temp[23] = latch_out23.read();
		temp[24] = latch_out24.read();
		temp[25] = latch_out25.read();
		temp[26] = latch_out26.read();
		temp[27] = latch_out27.read();
		temp[28] = latch_out28.read();
		temp[29] = latch_out29.read();
		temp[30] = latch_out30.read();
		temp[31] = latch_out31.read();

		output.write(temp);
		//inv_out.write(inv.read());

	}

	SC_CTOR(reg) : latch1("LATCH1"), latch2("LATCH2"), latch3("LATCH3"), latch4("LATCH4"), latch5("LATCH5"), latch6("LATCH6"), latch7("LATCH7"), latch8("LATCH8"), latch9("LATCH9"), latch10("LATCH10"), latch11("LATCH11"), latch12("LATCH12"), latch13("LATCH13"), latch14("LATCH14"), latch15("LATCH15"), latch16("LATCH16"), latch17("LATCH17"), latch18("LATCH18"), latch19("LATCH19"), latch20("LATCH20"), latch21("LATCH21"), latch22("LATCH22"), latch23("LATCH23"), latch24("LATCH24"), latch25("LATCH25"), latch26("LATCH26"), latch27("LATCH27"), latch28("LATCH28"), latch29("LATCH29"), latch30("LATCH30"), latch31("LATCH31"), latch32("LATCH32"), not1("NOT1"), not2("NOT2"), not3("NOT3"), not4("NOT4"), not5("NOT5"), not6("NOT6"), not7("NOT7"), not8("NOT8"), not9("NOT9"), not10("NOT10"), not11("NOT11"), not12("NOT12"), not13("NOT13"), not14("NOT14"), not15("NOT15"), not16("NOT16"), not17("NOT17"), not18("NOT18"), not19("NOT19"), not20("NOT20"), not21("NOT21"), not22("NOT22"), not23("NOT23"), not24("NOT24"), not25("NOT25"), not26("NOT26"), not27("NOT27"), not28("NOT28"), not29("NOT29"), not30("NOT30"), not31("NOT31"), not32("NOT32")
	{
		not1 << i0 << n0;
		not2 << i1 << n1;
		not3 << i2 << n2;
		not4 << i3 << n3;
		not5 << i4 << n4;
		not6 << i5 << n5;
		not7 << i6 << n6;
		not8 << i7 << n7;
		not9 << i8 << n8;
		not10 << i9 << n9;
		not11 << i10 << n10;
		not12 << i11 << n11;
		not13 << i12 << n12;
		not14 << i13 << n13;
		not15 << i14 << n14;
		not16 << i15 << n15;
		not17 << i16 << n16;
		not18 << i17 << n17;
		not19 << i18 << n18;
		not20 << i19 << n19;
		not21 << i20 << n20;
		not22 << i21 << n21;
		not23 << i22 << n22;
		not24 << i23 << n23;
		not25 << i24 << n24;
		not26 << i25 << n25;
		not27 << i26 << n26;
		not28 << i27 << n27;
		not29 << i28 << n28;
		not30 << i29 << n29;
		not31 << i30 << n30;
		not32 << i31 << n31;


		latch1 << i0 << n0 << latch_out0 << latch_not0;
		latch2 << i1 << n1 << latch_out1 << latch_not1;
		latch3 << i2 << n2 << latch_out2 << latch_not2;
		latch4 << i3 << n3 << latch_out3 << latch_not3;
		latch5 << i4 << n4 << latch_out4 << latch_not4;
		latch6 << i5 << n5 << latch_out5 << latch_not5;
		latch7 << i6 << n6 << latch_out6 << latch_not6;
		latch8 << i7 << n7 << latch_out7 << latch_not7;
		latch9 << i8 << n8 << latch_out8 << latch_not8;
		latch10 << i9 << n9 << latch_out9 << latch_not9;
		latch11 << i10 << n10 << latch_out10 << latch_not10;
		latch12 << i11 << n11 << latch_out11 << latch_not11;
		latch13 << i12 << n12 << latch_out12 << latch_not12;
		latch14 << i13 << n13 << latch_out13 << latch_not13;
		latch15 << i14 << n14 << latch_out14 << latch_not14;
		latch16 << i15 << n15 << latch_out15 << latch_not15;
		latch17 << i16 << n16 << latch_out16 << latch_not16;
		latch18 << i17 << n17 << latch_out17 << latch_not17;
		latch19 << i18 << n18 << latch_out18 << latch_not18;
		latch20 << i19 << n19 << latch_out19 << latch_not19;
		latch21 << i20 << n20 << latch_out20 << latch_not20;
		latch22 << i21 << n21 << latch_out21 << latch_not21;
		latch23 << i22 << n22 << latch_out22 << latch_not22;
		latch24 << i23 << n23 << latch_out23 << latch_not23;
		latch25 << i24 << n24 << latch_out24 << latch_not24;
		latch26 << i25 << n25 << latch_out25 << latch_not25;
		latch27 << i26 << n26 << latch_out26 << latch_not26;
		latch28 << i27 << n27 << latch_out27 << latch_not27;
		latch29 << i28 << n28 << latch_out28 << latch_not28;
		latch30 << i29 << n29 << latch_out29 << latch_not29;
		latch31 << i30 << n30 << latch_out30 << latch_not30;
		latch32 << i31 << n31 << latch_out31 << latch_not31;

		SC_METHOD(initiate);
		sensitive << input;

		SC_METHOD(out_write);
		sensitive << latch_out0 << latch_out1 << latch_out2 << latch_out3 << latch_out4 << latch_out5 << latch_out6 << latch_out7 << latch_out8 << latch_out9 << latch_out10 << latch_out11 << latch_out12 << latch_out13 << latch_out14 << latch_out15 << latch_out16 << latch_out17 << latch_out18 << latch_out19 << latch_out20 << latch_out21 << latch_out22 << latch_out23 << latch_out24 << latch_out25 << latch_out26 << latch_out27 << latch_out28 << latch_out29 << latch_out30 << latch_out31;
	}
};
