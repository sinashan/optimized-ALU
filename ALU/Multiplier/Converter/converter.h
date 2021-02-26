#ifndef CONVERTER_H
#define CONVERTER_H
#include "systemc.h"
#include "Components/four2five.h"
#include "Components/five2five.h"

SC_MODULE(converter)
{
	sc_in< sc_logic > a0, a1, a2, a3, a4, a5, a6;
	sc_out< sc_logic > s0, s1, s2, s3, s4, s5, s6, s7;
//-------------Local Variables-----------------
	four2five four;
	five2five five;

	sc_signal< sc_logic > fourOut0, fourOut1, fourOut2;

	void write0()
	{
		s0.write(a0);
	}

	SC_CTOR(converter) : four("FOUR"), five("FIVE")
	{
		four << a3 << a4 << a5 << a6 << fourOut0 << fourOut1 << fourOut2 << s6 << s7;
		five << a1 << a2 << fourOut0 << fourOut1 << fourOut2 << s1 << s2 << s3 << s4 << s5;
		
		SC_METHOD(write0);
		sensitive << a0;
	}
};
#endif
