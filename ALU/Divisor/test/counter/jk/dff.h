#include "systemc.h"
SC_MODULE(dff)
{
	sc_in< sc_logic > input;
	sc_in< sc_logic > din;
	sc_out< sc_logic > dout;
	void p1() 
	{
		sc_logic temp;
		temp = input.read();
		if(temp == SC_LOGIC_0)
			dout.write(din.read());
	}

	SC_CTOR(dff) 
	{
		SC_METHOD(p1);
		sensitive << input;
	}
};
