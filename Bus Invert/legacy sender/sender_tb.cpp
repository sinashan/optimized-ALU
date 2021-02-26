// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "sender.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<32> > input, output;
	sc_signal< sc_logic > invert;


	sender sender1("sender1");
	sender1.input(input);
	sender1.output(output);
	sender1.invert(invert);

	

	input="11111111111111111111111111111100";

        sc_start(1,SC_NS);

	std::cout << sc_time_stamp() << " " << output.read() <<  endl;

	input="00000000000000000000000000000000";
	sc_start(1,SC_NS);

	std::cout << sc_time_stamp() << " " << output.read() <<  endl;



	
}
