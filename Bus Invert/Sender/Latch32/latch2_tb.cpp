// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "latch2.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<2> > input;
	sc_signal< sc_bv<2> > output;


	reg2 latch2("LATCH2");
	latch2.input(input);
	latch2.output(output);
	


	

	input="11";

        sc_start(1,SC_NS);

	std::cout << output.read() << endl;
	
}
