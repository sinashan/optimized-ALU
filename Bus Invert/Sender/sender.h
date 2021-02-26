#include "systemc.h"
#include "Latch32/latch32.h"
#include "Majority/majority.h"


SC_MODULE(sender)
{
	sc_in< sc_bv<32> > input;
	sc_out< sc_bv<32> > output;
	sc_out< sc_logic > invert;
//------------Local Variables--------------
	reg latch;
	majority major1;

	sc_signal< sc_bv<32> > major_to_latch, latch_out, input_signal;

	void out_write()
	{
		output.write(latch_out);
	}

	SC_CTOR(sender) : latch("LATCH"), major1("MAJOR")
	{

		major1 << latch_out << input << major_to_latch << invert;
		latch << major_to_latch << latch_out;
		
		SC_METHOD(out_write);
		sensitive << latch_out;

	}
};
