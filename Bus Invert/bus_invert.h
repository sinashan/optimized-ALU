#include "systemc.h"
#include "Sender/sender.h"
#include "Receiver/receiver.h"

SC_MODULE(bus_invert)
{
	sc_in< sc_bv<32> > raw_input;
	sc_out< sc_bv<32> > encoded_output;
//------------Local Variables--------------
	sender sender1;
	receiver receiver1;

	sc_signal< sc_bv<32> > sender_out;
	sc_signal< sc_logic>  inv;

	SC_CTOR(bus_invert) : sender1("SENDER"), receiver1("RECEIVER")
	{
		sender1 << raw_input << sender_out << inv;
		receiver1 << sender_out << inv << encoded_output;
	}
};
