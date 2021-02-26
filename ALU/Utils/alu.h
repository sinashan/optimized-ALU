#include "systemc.h"
#include "Adder/adder.h"
#include "Subtractor/subtractor.h"
#include "Multiplier/multiplier.h"

SC_MODULE(alu)
{
	sc_in< sc_lv<12> > a, b;
	sc_in< sc_logic > start;
	sc_in< sc_lv<4> > operation;
	sc_out< sc_lv<32> > s;
//------------Local Variables--------------
	adder adder1;
	subtractor subtractor1;
	multiplier mult1;

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, b0, b1, b2, b3, b4, b5, b6, b7, b8, b9, b10, b11;
	sc_signal< sc_logic > sum0, sum1, sum2, sum3, sum4, sum5, sum6, sum7, sum8, sum9, sum10, sum11, sum12, sum13, sum14;
	sc_signal< sc_logic > sub0, sub1, sub2, sub3, sub4, sub5, sub6, sub7, sub8, sub9, sub10, sub11, sub12, sub13, sub14;
	sc_signal< sc_logic > re0, re1, re2, re3, re4, re5, re6, re7, re8, re9, re10, re11, re12, re13, re14, re15, im0, im1, im2, im3, im4, im5, im6, im7, im8, im9, im10, im11, im12, reSign;

	
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
		

	}

	void sum_write()
	{
		sc_lv<4> op = operation.read();
	    	if(op == "0001")
		{
			sc_lv<15> sum_temp;
			sum_temp[0] = sum0;
			sum_temp[1] = sum1;
			sum_temp[2] = sum2;
			sum_temp[3] = sum3;
			sum_temp[4] = sum4;
			sum_temp[5] = sum5;
			sum_temp[6] = sum6;
			sum_temp[7] = sum7;
			sum_temp[8] = sum8;
			sum_temp[9] = sum9;
			sum_temp[10] = sum10;
			sum_temp[11] = sum11;
			sum_temp[12] = sum12;
			sum_temp[13] = sum13;
			sum_temp[14] = sum14;
			cout << sum_temp << endl;
			s.write(sum_temp);
		}
	}

	void sub_write()
	{
		sc_lv<4> op = operation.read();
	    	if(op == "0010")
		{
			sc_lv<15> sub_temp;
			sub_temp[0] = sub0;
			sub_temp[1] = sub1;
			sub_temp[2] = sub2;
			sub_temp[3] = sub3;
			sub_temp[4] = sub4;
			sub_temp[5] = sub5;
			sub_temp[6] = sub6;
			sub_temp[7] = sub7;
			sub_temp[8] = sub8;
			sub_temp[9] = sub9;
			sub_temp[10] = sub10;
			sub_temp[11] = sub11;
			sub_temp[12] = sub12;
			sub_temp[13] = sub13;
			sub_temp[14] = sub14;

			s.write(sub_temp);
		}
	}

	void mul_write()
	{
		sc_lv<4> op = operation.read();
	    	if(op == "0100")
		{
			sc_lv<30> mul_temp;
			mul_temp[0] = re0;
			mul_temp[1] = re1;
			mul_temp[2] = re2;
			mul_temp[3] = re3;
			mul_temp[4] = re4;
			mul_temp[5] = re5;
			mul_temp[6] = re6;
			mul_temp[7] = re7;
			mul_temp[8] = re8;
			mul_temp[9] = re9;
			mul_temp[10] = re10;
			mul_temp[11] = re11;
			mul_temp[12] = re12;
			mul_temp[13] = re13;
			mul_temp[14] = re14;
			mul_temp[15] = re15;
			mul_temp[16] = im0;
			mul_temp[17] = im1;
			mul_temp[18] = im2;
			mul_temp[19] = im3;
			mul_temp[20] = im4;
			mul_temp[21] = im5;
			mul_temp[22] = im6;
			mul_temp[23] = im7;
			mul_temp[24] = im8;
			mul_temp[25] = im9;
			mul_temp[26] = im10;
			mul_temp[27] = im11;
			mul_temp[28] = im12;
			mul_temp[29] = reSign;
			
			cout << re0 << re1 << re2 << re3 << re4 << re5 << re6 << re7 << re8 << re9 << re10 << re11 << re12 << re13 << re14 << re15 <<  " " << im0 << im1 << im2 << im3 << im4 << im5 << im6 << im7 << im8 << im9 << im10 << im11 << im12 <<  endl;
			s.write(mul_temp);
		}
	}

	void out_write()
	{
		sc_lv<4> op = operation.read();
	    	if(op == "0001")
		{
			sc_lv<15> sum_temp;
			sum_temp[0] = sum0;
			sum_temp[1] = sum1;
			sum_temp[2] = sum2;
			sum_temp[3] = sum3;
			sum_temp[4] = sum4;
			sum_temp[5] = sum5;
			sum_temp[6] = sum6;
			sum_temp[7] = sum7;
			sum_temp[8] = sum8;
			sum_temp[9] = sum9;
			sum_temp[10] = sum10;
			sum_temp[11] = sum11;
			sum_temp[12] = sum12;
			sum_temp[13] = sum13;
			sum_temp[14] = sum14;

			s.write(sum_temp);
		}
		
	}

	SC_CTOR(alu) : adder1("ADD1"), subtractor1("SUB1"), mult1("MULT1")
	{
		adder1 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << sum0 << sum1 << sum2 << sum3 << sum4 << sum5 << sum6 << sum7 << sum8 << sum9 << sum10 << sum11 << sum12 << sum13 << sum14;
		subtractor1 << 	a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << sub0 << sub1 << sub2 << sub3 << sub4 << sub5 << sub6 << sub7 << sub8 << sub9 << sub10 << sub11 << sub12 << sub13 << sub14; 	
		mult1 << a0 << a1 << a2 << a3 << a4 << a5 << a6 << a7 << a8 << a9 << a10 << a11 << b0 << b1 << b2 << b3 << b4 << b5 << b6 << b7 << b8 << b9 << b10 << b11 << re0 << re1 << re2 << re3 << re4 << re5 << re6 << re7 << re8 << re9 << re10 << re11 << re12 << re13 << re14 << re15 << im0 << im1 << im2 << im3 << im4 << im5 << im6 << im7 << im8 << im9 << im10 << im11 << im12 << reSign;

		SC_METHOD(initiate);
		sensitive << a << b;

		/*SC_METHOD(sum_write);
		sensitive << sum0 << sum1 << sum2 << sum3 << sum4 << sum5 << sum6 << sum7 << sum8 << sum9 << sum10 << sum11 << sum12 << sum13 << sum14;

		SC_METHOD(sub_write);
		sensitive << sub0 << sub1 << sub2 << sub3 << sub4 << sub5 << sub6 << sub7 << sub8 << sub9 << sub10 << sub11 << sub12 << sub13 << sub14;

		SC_METHOD(mul_write);
		sensitive << re0 << re1 << re2 << re3 << re4 << re5 << re6 << re7 << re8 << re9 << re10 << re11 << re12 << re13 << re14 << re15 << im0 << im1 << im2 << im3 << im4 << im5 << im6 << im7 << im8 << im9 << im10 << im11 << im12 << reSign;*/

		SC_METHOD(out_write);
		sensitive << start;
	}
};
