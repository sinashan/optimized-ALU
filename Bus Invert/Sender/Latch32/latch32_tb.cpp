// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "latch32.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_bv<32> > input, output;
	//sc_signal< sc_logic > inv, inv_out;


	reg latch1("LATCH");
	latch1.input(input);
	latch1.output(output);
	//latch1.inv(inv);
	//latch1.inv_out(inv_out);


	

	input="00111010100100011010001101010000";
        sc_start(1,SC_NS);

	std::cout << output.read() << endl;
	
}
