#include "systemc.h"
#include "../../../../ALU/Utils/Misc./6-bit adder/sixAdder.h"

SC_MODULE(sixTree)
{
	sc_in< sc_lv<32> > input;
	sc_out< sc_lv<6> > output;
//------------Local Variables-----------------
	sixAdder six1, six2, six3, six4, six5, six6, six7, six8, six9, six10, six11, six12, six13, six14, six15, six16, six17, six18, six19, six20, six21, six22, six23, six24, six25, six26, six27, six28, six29, six30, six31; 

	sc_signal< sc_logic > i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i20, i21, i22, i23, i24, i25, i26, i27, i28, i29, i30, i31;
	sc_signal< sc_logic > zero; 
	sc_signal< sc_logic > six1out0, six1out1, six1out2, six1out3, six1out4, six1out5;
	sc_signal< sc_logic > six2out0, six2out1, six2out2, six2out3, six2out4, six2out5;
	sc_signal< sc_logic > six3out0, six3out1, six3out2, six3out3, six3out4, six3out5;
	sc_signal< sc_logic > six4out0, six4out1, six4out2, six4out3, six4out4, six4out5;
	sc_signal< sc_logic > six5out0, six5out1, six5out2, six5out3, six5out4, six5out5;
	sc_signal< sc_logic > six6out0, six6out1, six6out2, six6out3, six6out4, six6out5;
	sc_signal< sc_logic > six7out0, six7out1, six7out2, six7out3, six7out4, six7out5;
	sc_signal< sc_logic > six8out0, six8out1, six8out2, six8out3, six8out4, six8out5;
	sc_signal< sc_logic > six9out0, six9out1, six9out2, six9out3, six9out4, six9out5;
	sc_signal< sc_logic > six10out0, six10out1, six10out2, six10out3, six10out4, six10out5;
	sc_signal< sc_logic > six11out0, six11out1, six11out2, six11out3, six11out4, six11out5;
	sc_signal< sc_logic > six12out0, six12out1, six12out2, six12out3, six12out4, six12out5;
	sc_signal< sc_logic > six13out0, six13out1, six13out2, six13out3, six13out4, six13out5;
	sc_signal< sc_logic > six14out0, six14out1, six14out2, six14out3, six14out4, six14out5;
	sc_signal< sc_logic > six15out0, six15out1, six15out2, six15out3, six15out4, six15out5;
	sc_signal< sc_logic > six16out0, six16out1, six16out2, six16out3, six16out4, six16out5;
	sc_signal< sc_logic > six17out0, six17out1, six17out2, six17out3, six17out4, six17out5;
	sc_signal< sc_logic > six18out0, six18out1, six18out2, six18out3, six18out4, six18out5;
	sc_signal< sc_logic > six19out0, six19out1, six19out2, six19out3, six19out4, six19out5;
	sc_signal< sc_logic > six20out0, six20out1, six20out2, six20out3, six20out4, six20out5;
	sc_signal< sc_logic > six21out0, six21out1, six21out2, six21out3, six21out4, six21out5;
	sc_signal< sc_logic > six22out0, six22out1, six22out2, six22out3, six22out4, six22out5;
	sc_signal< sc_logic > six23out0, six23out1, six23out2, six23out3, six23out4, six23out5;
	sc_signal< sc_logic > six24out0, six24out1, six24out2, six24out3, six24out4, six24out5;
	sc_signal< sc_logic > six25out0, six25out1, six25out2, six25out3, six25out4, six25out5;
	sc_signal< sc_logic > six26out0, six26out1, six26out2, six26out3, six26out4, six26out5;
	sc_signal< sc_logic > six27out0, six27out1, six27out2, six27out3, six27out4, six27out5;
	sc_signal< sc_logic > six28out0, six28out1, six28out2, six28out3, six28out4, six28out5;
	sc_signal< sc_logic > six29out0, six29out1, six29out2, six29out3, six29out4, six29out5;
	sc_signal< sc_logic > six30out0, six30out1, six30out2, six30out3, six30out4, six30out5;
	sc_signal< sc_logic > six31out0, six31out1, six31out2, six31out3, six31out4, six31out5;


	void initiate()
	{
		zero = SC_LOGIC_0;
		
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
		sc_lv<6> temp;
		temp[0] = six31out0;
		temp[1] = six31out1;
		temp[2] = six31out2;
		temp[3] = six31out3;
		temp[4] = six31out4;
		temp[5] = six31out5;

		output.write(temp);
	}

	SC_CTOR(sixTree) : six1("SIX1"), six2("SIX2"), six3("SIX3"), six4("SIX4"), six5("SIX5"), six6("SIX6"), six7("SIX7"), six8("SIX8"), six9("SIX9"), six10("SIX10"), six11("SIX11"), six12("SIX12"), six13("SIX13"), six14("SIX14"), six15("SIX15"), six16("SIX16"), six17("SIX17"), six18("SIX18"), six19("SIX19"), six20("SIX20"), six21("SIX21"), six22("SIX22"), six23("SIX23"), six24("SIX24"), six25("SIX25"), six26("SIX26"), six27("SIX27"), six28("SIX28"), six29("SIX29"), six30("SIX30"), six31("SIX31")
	{
		six1 << i0 << zero << zero << zero << zero << zero << i1 << zero << zero << zero << zero << zero << zero << six1out0 << six1out1 << six1out2 << six1out3 << six1out4 << six1out5;
		six2 << i2 << zero << zero << zero << zero << zero << i3 << zero << zero << zero << zero << zero << zero << six2out0 << six2out1 << six2out2 << six2out3 << six2out4 << six2out5;
		six3 << i4 << zero << zero << zero << zero << zero << i5 << zero << zero << zero << zero << zero << zero << six3out0 << six3out1 << six3out2 << six3out3 << six3out4 << six3out5;
		six4 << i6 << zero << zero << zero << zero << zero << i7 << zero << zero << zero << zero << zero << zero << six4out0 << six4out1 << six4out2 << six4out3 << six4out4 << six4out5;
		six5 << i8 << zero << zero << zero << zero << zero << i9 << zero << zero << zero << zero << zero << zero << six5out0 << six5out1 << six5out2 << six5out3 << six5out4 << six5out5;
		six6 << i10 << zero << zero << zero << zero << zero << i11 << zero << zero << zero << zero << zero << zero << six6out0 << six6out1 << six6out2 << six6out3 << six6out4 << six6out5;
		six7 << i12 << zero << zero << zero << zero << zero << i13 << zero << zero << zero << zero << zero << zero << six7out0 << six7out1 << six7out2 << six7out3 << six7out4 << six7out5;
		six8 << i14 << zero << zero << zero << zero << zero << i15 << zero << zero << zero << zero << zero << zero << six8out0 << six8out1 << six8out2 << six8out3 << six8out4 << six8out5;
		six9 << i16 << zero << zero << zero << zero << zero << i17 << zero << zero << zero << zero << zero << zero << six9out0 << six9out1 << six9out2 << six9out3 << six9out4 << six9out5;
		six10 << i18 << zero << zero << zero << zero << zero << i19 << zero << zero << zero << zero << zero << zero << six10out0 << six10out1 << six10out2 << six10out3 << six10out4 << six10out5;
		six11 << i20 << zero << zero << zero << zero << zero << i21 << zero << zero << zero << zero << zero << zero << six11out0 << six11out1 << six11out2 << six11out3 << six11out4 << six11out5;
		six12 << i22 << zero << zero << zero << zero << zero << i23 << zero << zero << zero << zero << zero << zero << six12out0 << six12out1 << six12out2 << six12out3 << six12out4 << six12out5;
		six13 << i24 << zero << zero << zero << zero << zero << i25 << zero << zero << zero << zero << zero << zero << six13out0 << six13out1 << six13out2 << six13out3 << six13out4 << six13out5;
		six14 << i26 << zero << zero << zero << zero << zero << i27 << zero << zero << zero << zero << zero << zero << six14out0 << six14out1 << six14out2 << six14out3 << six14out4 << six14out5;
		six15 << i28 << zero << zero << zero << zero << zero << i29 << zero << zero << zero << zero << zero << zero << six15out0 << six15out1 << six15out2 << six15out3 << six15out4 << six15out5;
		six16 << i30 << zero << zero << zero << zero << zero << i31 << zero << zero << zero << zero << zero << zero << six16out0 << six16out1 << six16out2 << six16out3 << six16out4 << six16out5;

		six17 << six1out0 << six1out1 << six1out2 << six1out3 << six1out4 << six1out5 << six2out0 << six2out1 << six2out2 << six2out3 << six2out4 << six2out5 << zero << six17out0 << six17out1 << six17out2 << six17out3 << six17out4 << six17out5;
		six18 << six3out0 << six3out1 << six3out2 << six3out3 << six3out4 << six3out5 << six4out0 << six4out1 << six4out2 << six4out3 << six4out4 << six4out5 << zero << six18out0 << six18out1 << six18out2 << six18out3 << six18out4 << six18out5;
		six19 << six5out0 << six5out1 << six5out2 << six5out3 << six5out4 << six5out5 << six6out0 << six6out1 << six6out2 << six6out3 << six6out4 << six6out5 << zero << six19out0 << six19out1 << six19out2 << six19out3 << six19out4 << six19out5;
		six20 << six7out0 << six7out1 << six7out2 << six7out3 << six7out4 << six7out5 << six8out0 << six8out1 << six8out2 << six8out3 << six8out4 << six8out5 << zero << six20out0 << six20out1 << six20out2 << six20out3 << six20out4 << six20out5;
		six21 << six9out0 << six9out1 << six9out2 << six9out3 << six9out4 << six9out5 << six10out0 << six10out1 << six10out2 << six10out3 << six10out4 << six10out5 << zero << six21out0 << six21out1 << six21out2 << six21out3 << six21out4 << six21out5;
		six22 << six11out0 << six11out1 << six11out2 << six11out3 << six11out4 << six11out5 << six12out0 << six12out1 << six12out2 << six12out3 << six12out4 << six12out5 << zero << six22out0 << six22out1 << six22out2 << six22out3 << six22out4 << six22out5;
		six23 << six13out0 << six13out1 << six13out2 << six13out3 << six13out4 << six13out5 << six14out0 << six14out1 << six14out2 << six14out3 << six14out4 << six14out5 << zero << six23out0 << six23out1 << six23out2 << six23out3 << six23out4 << six23out5;
		six24 << six15out0 << six15out1 << six15out2 << six15out3 << six15out4 << six15out5 << six16out0 << six16out1 << six16out2 << six16out3 << six16out4 << six16out5 << zero << six24out0 << six24out1 << six24out2 << six24out3 << six24out4 << six24out5;		

		six25 << six17out0 << six17out1 << six17out2 << six17out3 << six17out4 << six17out5 << six18out0 << six18out1 << six18out2 << six18out3 << six18out4 << six18out5 << zero << six25out0 << six25out1 << six25out2 << six25out3 << six25out4 << six25out5;
		six26 << six19out0 << six19out1 << six19out2 << six19out3 << six19out4 << six19out5 << six20out0 << six20out1 << six20out2 << six20out3 << six20out4 << six20out5 << zero << six26out0 << six26out1 << six26out2 << six26out3 << six26out4 << six26out5;
		six27 << six21out0 << six21out1 << six21out2 << six21out3 << six21out4 << six21out5 << six22out0 << six22out1 << six22out2 << six22out3 << six22out4 << six22out5 << zero << six27out0 << six27out1 << six27out2 << six27out3 << six27out4 << six27out5;
		six28 << six23out0 << six23out1 << six23out2 << six23out3 << six23out4 << six23out5 << six24out0 << six24out1 << six24out2 << six24out3 << six24out4 << six24out5 << zero << six28out0 << six28out1 << six28out2 << six28out3 << six28out4 << six28out5;

		six29 << six25out0 << six25out1 << six25out2 << six25out3 << six25out4 << six25out5 << six26out0 << six26out1 << six26out2 << six26out3 << six26out4 << six26out5 << zero << six29out0 << six29out1 << six29out2 << six29out3 << six29out4 << six29out5;
		six30 << six27out0 << six27out1 << six27out2 << six27out3 << six27out4 << six27out5 << six28out0 << six28out1 << six28out2 << six28out3 << six28out4 << six28out5 << zero << six30out0 << six30out1 << six30out2 << six30out3 << six30out4 << six30out5;

		six31 << six29out0 << six29out1 << six29out2 << six29out3 << six29out4 << six29out5 << six30out0 << six30out1 << six30out2 << six30out3 << six30out4 << six30out5 << zero << six31out0 << six31out1 << six31out2 << six31out3 << six31out4 << six31out5;



		SC_METHOD(initiate);
		sensitive << input;

		SC_METHOD(out_write);
		sensitive << six31out0 << six31out1 << six31out2 << six31out3 << six31out4 << six31out5;
	}
};
