
#include <systemc.h>
#include "mux.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_logic > a0, a1, a2, a3, a4, a5, a6, a7, b0, b1, b2, b3 ,b4 ,b5 ,b6 ,b7, select;
	sc_signal< sc_logic > s0, s1, s2, s3 ,s4, s5, s6 , s7;

	mux mux1("mux1");
	mux1.a0(a0);
	mux1.b0(b0);
	mux1.a1(a1);
	mux1.b1(b1);	
	mux1.a2(a2);
	mux1.b2(b2);
	mux1.a3(a3);
	mux1.b3(b3);
	mux1.a4(a4);
	mux1.b4(b4);
	mux1.a5(a5);
	mux1.b5(b5);
	mux1.a6(a6);
	mux1.b6(b6);
	mux1.a7(a7);
	mux1.b7(b7);
	mux1.select(select);
	mux1.s0(s0);
	mux1.s1(s1);
	mux1.s2(s2);
	mux1.s3(s3);
	mux1.s4(s4);
	mux1.s5(s5);
	mux1.s6(s6);
	mux1.s7(s7);




        a0 = SC_LOGIC_1;  a1 = SC_LOGIC_1; a2 = SC_LOGIC_1; a3 = SC_LOGIC_1;  a4 = SC_LOGIC_1;  a5 = SC_LOGIC_1; a6 = SC_LOGIC_1; a7 = SC_LOGIC_1;
        b0 = SC_LOGIC_0;  b1 = SC_LOGIC_1; b2 = SC_LOGIC_0; b3 = SC_LOGIC_0; b4 = SC_LOGIC_0;  b5 = SC_LOGIC_0; b6 = SC_LOGIC_0; b7= SC_LOGIC_0;

	select = SC_LOGIC_1;
        sc_start();
	std::cout<< "Out= " << s7.read() << s6.read() << s5.read() << s3.read() << s2.read() << s1.read() << s0.read() << endl;
 }
