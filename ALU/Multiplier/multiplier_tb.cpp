#include <systemc.h>
#include "multiplier.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3, c0, c1, c2, c3, c4, c5, c6, c7, d0, d1, d2, d3;
	sc_signal< sc_logic > re0, re1, re2, re3, re4, re5, re6, re7, re8, re9, re10, re11, re12, re13, re14, re15, im0, im1, im2, im3, im4, im5, im6, im7, im8, im9, im10, im11, im12, reSign;

	multiplier multiplier1("multiplier1");
	multiplier1.a0(a0);
	multiplier1.a1(a1);
	multiplier1.a2(a2);
	multiplier1.a3(a3);
	multiplier1.a4(a4);
	multiplier1.a5(a5);
	multiplier1.a6(a6);
	multiplier1.a7(a7);

	multiplier1.b0(b0);
	multiplier1.b1(b1);
	multiplier1.b2(b2);
	multiplier1.b3(b3);

	multiplier1.c0(c0);
	multiplier1.c1(c1);
	multiplier1.c2(c2);
	multiplier1.c3(c3);
	multiplier1.c4(c4);
	multiplier1.c5(c5);
	multiplier1.c6(c6);
	multiplier1.c7(c7);

	multiplier1.d0(d0);
	multiplier1.d1(d1);
	multiplier1.d2(d2);
	multiplier1.d3(d3);

	multiplier1.re0(re0);
	multiplier1.re1(re1);
	multiplier1.re2(re2);
	multiplier1.re3(re3);
	multiplier1.re4(re4);
	multiplier1.re5(re5);
	multiplier1.re6(re6);
	multiplier1.re7(re7);
	multiplier1.re8(re8);
	multiplier1.re9(re9);
	multiplier1.re10(re10);
	multiplier1.re11(re11);
	multiplier1.re12(re12);
	multiplier1.re13(re13);
	multiplier1.re14(re14);
	multiplier1.re15(re15);

	multiplier1.im0(im0);
	multiplier1.im1(im1);
	multiplier1.im2(im2);
	multiplier1.im3(im3);
	multiplier1.im4(im4);
	multiplier1.im5(im5);
	multiplier1.im6(im6);
	multiplier1.im7(im7);
	multiplier1.im8(im8);
	multiplier1.im9(im9);
	multiplier1.im10(im10);
	multiplier1.im11(im11);
	multiplier1.im12(im12);
	multiplier1.reSign(reSign);





        a0 = SC_LOGIC_1;
        a1 = SC_LOGIC_0;
	a2 = SC_LOGIC_0;
	a3 = SC_LOGIC_0;
	a4 = SC_LOGIC_0;
        a5 = SC_LOGIC_0;
	a6 = SC_LOGIC_0;
	a7 = SC_LOGIC_0;

	
	b0 = SC_LOGIC_0;
        b1 = SC_LOGIC_0;
	b2 = SC_LOGIC_1;
        b3 = SC_LOGIC_0;

        c0 = SC_LOGIC_1;
        c1 = SC_LOGIC_1;
	c2 = SC_LOGIC_0;
	c3 = SC_LOGIC_0;
	c4 = SC_LOGIC_0;
        c5 = SC_LOGIC_0;
	c6 = SC_LOGIC_0;
	c7 = SC_LOGIC_0;

	
	d0 = SC_LOGIC_0;
        d1 = SC_LOGIC_1;
	d2 = SC_LOGIC_1;
        d3 = SC_LOGIC_0;
   

        sc_start(1,SC_NS);
	std::cout << "***Real Part***" << "\nSign= " << reSign.read() << "\nFourth Digit= " << re15.read() << re14.read() << re13.read() << re12.read() << "\nThird Digit= " << re11.read() << re10.read() << re9.read() << re8.read() << "\nSecond Digit= " << re7.read() << re6.read() << re5.read() << re4.read() << "\nFirst Digit= " << re3.read() << re2.read() << re1.read() << re0.read() << "\n\n***Imaginary Part***" << "\nFourth Digit= " << im12.read() << "\nThird Digit= " << im11.read() << im10.read() << im9.read() <<  im8.read() << "\nSecond Digit= " << im7.read() << im6.read() << im5.read() <<  im4.read() << "\nFirst Digit= " << im3.read() << im2.read() << im1.read() << im0.read() << endl; 

 }
