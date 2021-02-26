// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "sixTree.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_lv<32> > input;
	sc_signal< sc_lv<6> > output;

	sixTree sixTree1("sixTree");
	sixTree1.input(input);
	sixTree1.output(output);

	

	input="01100000000001010000000000001110";

        sc_start(1,SC_NS);

	std::cout << output.read() <<  endl;
	
}
