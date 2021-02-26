// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "sender.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_bv<32> > input, output;
	sc_signal< sc_logic > invert;


	sender sender1("sender1");
	sender1.input(input);
	sender1.output(output);
	sender1.invert(invert);
	
	

	input="00000000001000110101100001110100";

        sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << output.read() << ", Invert Signal= " << invert.read() << endl;

	input="01110111011101110111011101110111";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << output.read() << ", Invert Signal= " << invert.read() << endl;

	input="00110010010101000001100010010000";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << output.read() << ", Invert Signal= " << invert.read() << endl;

	input="00010000001000000101100001000011";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << output.read() << ", Invert Signal= " << invert.read() << endl;

	input="00000000000000100101010001111000";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << output.read() << ", Invert Signal= " << invert.read() << endl;



	
}
