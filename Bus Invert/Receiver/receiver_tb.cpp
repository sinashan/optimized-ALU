// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "receiver.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_bv<32> > input, output;
	sc_signal< sc_logic > inv;


	receiver receiver1("receiver1");
	receiver1.input(input);
	receiver1.output(output);
	receiver1.inv(inv);


	

	input="11111111111111111111111111111111";
	inv = SC_LOGIC_0;
        sc_start(1,SC_NS);

	std::cout << sc_time_stamp() << " " << output.read() << endl;

	input="10000000000000000000001111110000";
	inv = SC_LOGIC_1;
	sc_start(1,SC_NS);

	std::cout << sc_time_stamp() << " " << output.read() << endl;


	
}
