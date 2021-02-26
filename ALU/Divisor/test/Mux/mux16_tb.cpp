
#include <systemc.h>
#include "mux16.h"


int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<16> > a, b;
	sc_signal< sc_lv<16> > s;
	sc_signal< sc_bv<1> > select;

	mux16 mux1("mux1");
	mux1.a(a);
	mux1.b(b);
	mux1.select(select);
	mux1.s(s);
	



        a="1001100110011001";
        sc_start();
	std::cout<< s.read() << endl;
 }
