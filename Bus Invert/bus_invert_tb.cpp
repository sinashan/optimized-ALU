// A Simple TestBench for SystemC
// By: Pourya Gohari

#include <systemc.h>
#include "bus_invert.h"

int sc_main (int argc, char* argv[]) {
	sc_core::sc_report_handler::set_actions( "/IEEE_Std_1666/deprecated",
                                           sc_core::SC_DO_NOTHING );

	sc_signal< sc_bv<32> > raw_input, encoded_output;



	bus_invert bus_invert1("bus_invert1");
	bus_invert1.raw_input(raw_input);
	bus_invert1.encoded_output(encoded_output);



	

	raw_input="00000000001000110101100001110100";

        sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << encoded_output.read() << endl;

	raw_input="01110111011101110111011101110111";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << encoded_output.read() << endl;

	raw_input="00110010010101000001100010010000";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << encoded_output.read() << endl;

	raw_input="00010000001000000101100001000011";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << encoded_output.read() << endl;

	raw_input="00000000000000100101010001111000";
	sc_start(1,SC_NS);

	std::cout << "Output at timestamp " << sc_time_stamp() << " = " << encoded_output.read() << endl;

	
}
