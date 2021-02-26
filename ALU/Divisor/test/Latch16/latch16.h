#include "systemc.h"
#include "Latch/latch.h"
#include "not.h"

SC_MODULE(reg)
{
	sc_in< sc_lv<16> > input;
	sc_in< sc_logic > enable;
	sc_out< sc_lv<16> > output;
//-----------Local Variables--------------
	latch latch1, latch2, latch3, latch4, latch5, latch6, latch7, latch8, latch9, latch10, latch11, latch12, latch13, latch14, latch15, latch16;

	not_gate not1, not2, not3, not4, not5, not6, not7, not8, not9, not10, not11, not12, not13, not14, not15, not16;
	
	sc_signal< sc_logic > i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15; 
	sc_signal< sc_logic > n0, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, n11, n12, n13, n14, n15;
	sc_signal< sc_logic > latch_out0, latch_out1, latch_out2, latch_out3, latch_out4, latch_out5, latch_out6, latch_out7, latch_out8, latch_out9, latch_out10, latch_out11, latch_out12, latch_out13, latch_out14, latch_out15;
	sc_signal< sc_logic > latch_not0, latch_not1, latch_not2, latch_not3, latch_not4, latch_not5, latch_not6, latch_not7, latch_not8, latch_not9, latch_not10, latch_not11, latch_not12, latch_not13, latch_not14, latch_not15;



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
		
	}

	void out_write()
	{
		sc_lv<16> temp;

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


   		if(enable.read() == SC_LOGIC_0)
			output.write(temp);


	}

	SC_CTOR(reg) : latch1("LATCH1"), latch2("LATCH2"), latch3("LATCH3"), latch4("LATCH4"), latch5("LATCH5"), latch6("LATCH6"), latch7("LATCH7"), latch8("LATCH8"), latch9("LATCH9"), latch10("LATCH10"), latch11("LATCH11"), latch12("LATCH12"), latch13("LATCH13"), latch14("LATCH14"), latch15("LATCH15"), latch16("LATCH16"), not1("NOT1"), not2("NOT2"), not3("NOT3"), not4("NOT4"), not5("NOT5"), not6("NOT6"), not7("NOT7"), not8("NOT8"), not9("NOT9"), not10("NOT10"), not11("NOT11"), not12("NOT12"), not13("NOT13"), not14("NOT14"), not15("NOT15"), not16("NOT16")
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


		SC_METHOD(initiate);
		sensitive << input;

		SC_METHOD(out_write);
		sensitive << latch_out0 << latch_out1 << latch_out2 << latch_out3 << latch_out4 << latch_out5 << latch_out6 << latch_out7 << latch_out8 << latch_out9 << latch_out10 << latch_out11 << latch_out12 << latch_out13 << latch_out14 << latch_out15;
	}
};
