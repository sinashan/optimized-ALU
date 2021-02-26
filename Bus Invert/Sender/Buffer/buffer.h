#include "systemc.h"
#include "not.h"

SC_MODULE(buffer)
{
	sc_in< sc_logic > in; //sensitivity on new input
	sc_out< sc_logic > out;
//----------Local Variables--------------
	not_gate not1, not2;
	
	sc_signal< sc_logic > temp_out, buf_out;

	void out_write()
	{
		out.write(buf_out);
	}

	SC_CTOR(buffer) : not1("NOT1"), not2("NOT2")
	{
		not1 << in << temp_out;
		not2 << temp_out << buf_out;

		SC_METHOD(out_write);
		sensitive << buf_out;

	}
};
