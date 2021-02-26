#ifndef MUX32_H
#define MUX32_H
#include "systemc.h"
#include "and.h"
#include "or2.h"
#include "not.h"

SC_MODULE(mux32)
{
	sc_in< sc_lv<32> > in0, in1;
	sc_in< sc_logic > select;
	sc_out< sc_lv<32> > out;
//--------Local Variables----------
	and_gate and00, and01, and02, and03, and04, and05, and06, and07, and08, and09, and010, and011, and012, and013, and014, and015, and016, and017, and018, and019, and020, and021, and022, and023, and024, and025, and026, and027, and028, and029, and030, and031;
	and_gate and10, and11, and12, and13, and14, and15, and16, and17, and18, and19, and110, and111, and112, and113, and114, and115, and116, and117, and118, and119, and120, and121, and122, and123, and124, and125, and126, and127, and128, and129, and130, and131;		
	not_gate not1;
	or2_gate or_gate0, or_gate1, or_gate2, or_gate3, or_gate4, or_gate5, or_gate6, or_gate7, or_gate8, or_gate9, or_gate10, or_gate11, or_gate12, or_gate13, or_gate14, or_gate15, or_gate16, or_gate17, or_gate18, or_gate19, or_gate20, or_gate21, or_gate22, or_gate23, or_gate24, or_gate25, or_gate26, or_gate27, or_gate28, or_gate29, or_gate30, or_gate31;

	sc_signal< sc_logic > i00, i01, i02, i03, i04, i05, i06, i07, i08, i09, i010, i011, i012, i013, i014, i015, i016, i017, i018, i019, i020, i021, i022, i023, i024, i025, i026, i027, i028, i029, i030, i031;
	sc_signal< sc_logic > i10, i11, i12, i13, i14, i15, i16, i17, i18, i19, i110, i111, i112, i113, i114, i115, i116, i117, i118, i119, i120, i121, i122, i123, i124, i125, i126, i127, i128, i129, i130, i131;
	sc_signal< sc_logic > or00, or01, or10, or11, or20, or21, or30, or31, or40, or41, or50, or51, or60, or61, or70, or71, or80, or81, or90, or91, or100, or101, or110, or111, or120, or121, or130, or131, or140, or141, or150, or151, or160, or161, or170, or171, or180, or181, or190, or191, or200, or201, or210, or211, or220, or221, or230, or231, or240, or241, or250, or251, or260, or261, or270, or271, or280, or281, or290, or291, or300, or301, or310, or311; 

	sc_signal< sc_logic > out0, out1, out2, out3, out4, out5, out6, out7, out8, out9, out10, out11, out12, out13, out14, out15, out16, out17, out18, out19, out20, out21, out22, out23, out24, out25, out26, out27, out28, out29, out30, out31;

	sc_signal< sc_logic > select_not;

	void initiate()
	{
		i00 = in0.read()[0];
		i01 = in0.read()[1];
		i02 = in0.read()[2];
		i03 = in0.read()[3];
		i04 = in0.read()[4];
		i05 = in0.read()[5];
		i06 = in0.read()[6];
		i07 = in0.read()[7];
		i08 = in0.read()[8];
		i09 = in0.read()[9];
		i010 = in0.read()[10];
		i011 = in0.read()[11];
		i012 = in0.read()[12];
		i013 = in0.read()[13];
		i014 = in0.read()[14];
		i015 = in0.read()[15];
		i016 = in0.read()[16];
		i017 = in0.read()[17];
		i018 = in0.read()[18];
		i019 = in0.read()[19];
		i020 = in0.read()[20];
		i021 = in0.read()[21];
		i022 = in0.read()[22];
		i023 = in0.read()[23];
		i024 = in0.read()[24];
		i025 = in0.read()[25];
		i026 = in0.read()[26];
		i027 = in0.read()[27];
		i028 = in0.read()[28];
		i029 = in0.read()[29];
		i030 = in0.read()[30];
		i031 = in0.read()[31];

		i10 = in1.read()[0];
		i11 = in1.read()[1];
		i12 = in1.read()[2];
		i13 = in1.read()[3];
		i14 = in1.read()[4];
		i15 = in1.read()[5];
		i16 = in1.read()[6];
		i17 = in1.read()[7];
		i18 = in1.read()[8];
		i19 = in1.read()[9];
		i110 = in1.read()[10];
		i111 = in1.read()[11];
		i112 = in1.read()[12];
		i113 = in1.read()[13];
		i114 = in1.read()[14];
		i115 = in1.read()[15];
		i116 = in1.read()[16];
		i117 = in1.read()[17];
		i118 = in1.read()[18];
		i119 = in1.read()[19];
		i120 = in1.read()[20];
		i121 = in1.read()[21];
		i122 = in1.read()[22];
		i123 = in1.read()[23];
		i124 = in1.read()[24];
		i125 = in1.read()[25];
		i126 = in1.read()[26];
		i127 = in1.read()[27];
		i128 = in1.read()[28];
		i129 = in1.read()[29];
		i130 = in1.read()[30];
		i131 = in1.read()[31];
	}

	void out_write()
	{
		sc_lv<32> temp;
		temp[0] = out0;
		temp[1] = out1;
		temp[2] = out2;
		temp[3] = out3;
		temp[4] = out4;
		temp[5] = out5;
		temp[6] = out6;
		temp[7] = out7;
		temp[8] = out8;
		temp[9] = out9;
		temp[10] = out10;
		temp[11] = out11;
		temp[12] = out12;
		temp[13] = out13;
		temp[14] = out14;
		temp[15] = out15;
		temp[16] = out16;		
		temp[17] = out17;
		temp[18] = out18;
		temp[19] = out19;
		temp[20] = out20;
		temp[21] = out21;
		temp[22] = out22;
		temp[23] = out23;
		temp[24] = out24;
		temp[25] = out25;
		temp[26] = out26;
		temp[27] = out27;
		temp[28] = out28;
		temp[29] = out29;
		temp[30] = out30;		
		temp[31] = out31;

		out.write(temp);
	}

	SC_CTOR(mux32) : and00("AND00"), and01("A01"), and02("A02"), and03("A03"), and04("A04"), and05("A05"), and06("A06"), and07("A07"), and08("A08"), and09("A09"), and010("A010"), and011("A011"), and012("A012"), and013("A013"), and014("A014"), and015("A015"), and016("A016"), and017("A017"), and018("A018"), and019("A019"), and020("A020"), and021("A021"), and022("A022"), and023("A023"), and024("A024"), and025("A025"), and026("A026"), and027("A027"), and028("A028"), and029("A029"), and030("A030"), and031("A031"), and10("and10"), and11("A11"), and12("A12"), and13("A13"), and14("A14"), and15("A15"), and16("A16"), and17("A17"), and18("A18"), and19("A19"), and110("A110"), and111("A111"), and112("A112"), and113("A113"), and114("A114"), and115("A115"), and116("A116"), and117("A117"), and118("A118"), and119("A119"), and120("A120"), and121("A121"), and122("A122"), and123("A123"), and124("A124"), and125("A125"), and126("A126"), and127("A127"), and128("A128"), and129("A129"), and130("A130"), and131("A131"), not1("NOT1"), or_gate0("OR0"), or_gate1("OR1"), or_gate2("OR2"), or_gate3("OR3"), or_gate4("OR4"), or_gate5("OR5"), or_gate6("O6"), or_gate7("or_gate7"), or_gate8("or_gate8"), or_gate9("or_gate9"), or_gate10("or_gate10"), or_gate11("or_gate11"), or_gate12("or_gate12"), or_gate13("or_gate13"), or_gate14("or_gate14"), or_gate15("or_gate15"), or_gate16("or_gate16"), or_gate17("or_gate17"), or_gate18("or_gate18"), or_gate19("or_gate19"), or_gate20("or_gate20"), or_gate21("or_gate21"), or_gate22("or_gate22"), or_gate23("or_gate23"), or_gate24("or_gate24"), or_gate25("or_gate25"), or_gate26("or_gate26"), or_gate27("or_gate27"), or_gate28("or_gate28"), or_gate29("or_gate29"), or_gate30("or_gate30"), or_gate31("or_gate31") 
	{
		not1 << select << select_not;

		and00 << i00 << select_not << or00;
		and01 << i01 << select_not << or10;
		and02 << i02 << select_not << or20;
		and03 << i03 << select_not << or30;
		and04 << i04 << select_not << or40;
		and05 << i05 << select_not << or50;
		and06 << i06 << select_not << or60;
		and07 << i07 << select_not << or70;
		and08 << i08 << select_not << or80;
		and09 << i09 << select_not << or90;
		and010 << i010 << select_not << or100;
		and011 << i011 << select_not << or110;
		and012 << i012 << select_not << or120;
		and013 << i013 << select_not << or130;
		and014 << i014 << select_not << or140;
		and015 << i015 << select_not << or150;
		and016 << i016 << select_not << or160;
		and017 << i017 << select_not << or170;
		and018 << i018 << select_not << or180;
		and019 << i019 << select_not << or190;
		and020 << i020 << select_not << or200;
		and021 << i021 << select_not << or210;
		and022 << i022 << select_not << or220;
		and023 << i023 << select_not << or230;
		and024 << i024 << select_not << or240;
		and025 << i025 << select_not << or250;
		and026 << i026 << select_not << or260;
		and027 << i027 << select_not << or270;
		and028 << i028 << select_not << or280;
		and029 << i029 << select_not << or290;
		and030 << i030 << select_not << or300;
		and031 << i031 << select_not << or310;

		and10 << i10 << select << or01;
		and11 << i11 << select << or11;
		and12 << i12 << select << or21;
		and13 << i13 << select << or31;
		and14 << i14 << select << or41;
		and15 << i15 << select << or51;
		and16 << i16 << select << or61;
		and17 << i17 << select << or71;
		and18 << i18 << select << or81;
		and19 << i19 << select << or91;
		and110 << i110 << select << or101;
		and111 << i111 << select << or111;
		and112 << i112 << select << or121;
		and113 << i113 << select << or131;
		and114 << i114 << select << or141;
		and115 << i115 << select << or151;
		and116 << i116 << select << or161;
		and117 << i117 << select << or171;
		and118 << i118 << select << or181;
		and119 << i119 << select << or191;
		and120 << i120 << select << or201;
		and121 << i121 << select << or211;
		and122 << i122 << select << or221;
		and123 << i123 << select << or231;
		and124 << i124 << select << or241;
		and125 << i125 << select << or251;
		and126 << i126 << select << or261;
		and127 << i127 << select << or271;
		and128 << i128 << select << or281;
		and129 << i129 << select << or291;
		and130 << i130 << select << or301;
		and131 << i131 << select << or311;

		or_gate0 << or00 << or01 << out0;
		or_gate1 << or10 << or11 << out1;
		or_gate2 << or20 << or21 << out2;
		or_gate3 << or30 << or31 << out3;
		or_gate4 << or40 << or41 << out4;
		or_gate5 << or50 << or51 << out5;
		or_gate6 << or60 << or61 << out6;
		or_gate7 << or70 << or71 << out7;
		or_gate8 << or80 << or81 << out8;
		or_gate9 << or90 << or91 << out9;
		or_gate10 << or100 << or101 << out10;
		or_gate11 << or110 << or111 << out11;
		or_gate12 << or120 << or121 << out12;
		or_gate13 << or130 << or131 << out13;
		or_gate14 << or140 << or141 << out14;
		or_gate15 << or150 << or151 << out15;
		or_gate16 << or160 << or161 << out16;
		or_gate17 << or170 << or171 << out17;
		or_gate18 << or180 << or181 << out18;
		or_gate19 << or190 << or191 << out19;
		or_gate20 << or200 << or201 << out20;
		or_gate21 << or210 << or211 << out21;
		or_gate22 << or220 << or221 << out22;
		or_gate23 << or230 << or231 << out23;
		or_gate24 << or240 << or241 << out24;
		or_gate25 << or250 << or251 << out25;
		or_gate26 << or260 << or261 << out26;
		or_gate27 << or270 << or271 << out27;
		or_gate28 << or280 << or281 << out28;
		or_gate29 << or290 << or291 << out29;
		or_gate30 << or300 << or301 << out30;
		or_gate31 << or310 << or311 << out31;

		SC_METHOD(initiate);
		sensitive << in0 << in1 << select;

		SC_METHOD(out_write);
		sensitive << out0 << out1 << out2 << out3 << out4 << out5 << out6 << out7 << out8 << out9 << out10 << out11 << out12 << out13 << out14 << out15 << out16 << out17 << out18 << out19 << out20 << out21 << out22 << out23 << out24 << out25 << out26 << out27 << out28 << out29 << out30 << out31;
	}
};
#endif
