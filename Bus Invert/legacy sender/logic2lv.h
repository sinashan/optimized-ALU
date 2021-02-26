#include "systemc.h"

SC_MODULE(logic2lv)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a30, a31;
	sc_out< sc_lv<32> > out; 

	void convert()
	{
		sc_lv<32> temp;
		temp[0] = a0;
		temp[1] = a1;
		temp[2] = a2;
		temp[3] = a3;
		temp[4] = a4;
		temp[5] = a5;
		temp[6] = a6;
		temp[7] = a7;
		temp[8] = a8;
		temp[9] = a9;
		temp[10] = a10;
		temp[11] = a11;
		temp[12] = a12;
		temp[13] = a13;	
		temp[14] = a14;
		temp[15] = a15;
		temp[16] = a16;
		temp[17] = a17;
		temp[18] = a18;
		temp[19] = a19;
		temp[20] = a20;
		temp[21] = a21;
		temp[22] = a22;
		temp[23] = a23;
		temp[24] = a24;
		temp[25] = a25;
		temp[26] = a26;
		temp[27] = a27;
		temp[28] = a28;
		temp[29] = a29;
		temp[30] = a30;
		temp[31] = a31;

		out.write(temp);

	}
 
	SC_CTOR(logic2lv)
	{
		SC_METHOD(convert);
		sensitive << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << a12 << a13 << a14 << a15 << a16 << a17 << a18 << a19 << a20 << a21 << a22 << a23 << a24 << a25 << a26 << a27 << a28 << a29 << a30 << a31;
	}
};
