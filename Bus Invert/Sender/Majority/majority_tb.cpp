// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "majority.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_bv<32> > a, b;
	sc_signal< sc_bv<32> > out;
	sc_signal< sc_logic > inv;

	majority majority1("MAJORITY");
	majority1.a(a);
	majority1.b(b);
	majority1.out(out);
	majority1.inv(inv);

	

	a="00000000000000000000000000000000";
	b="10101010101000001100110100001100";
        sc_start(1,SC_NS);

	std::cout << out.read() << endl;
	
}
