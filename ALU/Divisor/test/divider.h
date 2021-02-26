#include "systemc.h"
#include "Latch16/latch16.h"
#include "ReSub/ReSub.h"

#include "Mux/mux16.h"

SC_MODULE(divider)
{
	sc_in< sc_lv<16> > a, b;
	sc_inout< sc_lv<16> > quotient;

//----------Local Variables------------
	ReSub sub;
	reg latch16;
	mux16 multiplexer16;

	sc_signal< sc_lv<16> > a_b, latch4_out, sub2_in, sub2_out;
	sc_signal< sc_bv<1> > sub_en2;
	sc_signal< sc_logic > subSign1, subSign2;


	void initiate()
	{

	}

	void out_write()
	{
		cout << sub2_in.read() << endl;
	
	}


	SC_CTOR(divider) : sub("SUB1"), latch16("LATCH16"), multiplexer16("MUX16")
	{
		
		multiplexer16 << a << quotient << sub_en2 << sub2_in;

		sub << sub2_in << b << sub2_out << subSign2 << sub_en2;

		latch16 << sub2_out << subSign2 << quotient;
		

		
		//SC_METHOD(initiate);
		//sensitive << a << b;

		SC_METHOD(out_write);
		sensitive << sub2_in;

	}
};
