// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "latch16.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<16> > input, output;
	sc_signal< sc_logic > enable;



	reg my_latch("LATCH");
	my_latch.input(input);
	my_latch.output(output);
	my_latch.enable(enable);




	

	input="1000000000000000"; enable=SC_LOGIC_0;
        sc_start(1,SC_NS);

	std::cout << output.read() << endl;

	input="0100010001000000"; enable=SC_LOGIC_1;
        sc_start(1,SC_NS);

	std::cout << output.read() << endl;
	
}
