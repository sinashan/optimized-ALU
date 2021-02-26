#include "systemc.h"

SC_MODULE(division)
{
	sc_in< sc_logic > p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, q0, q1, q2, q3, q4, q5, q6, q7, q8, q9, q10, q11, q12, q13, q14, q15, u0, u1, u2, u3, u4, u5, u6, u7, u8, u9, u10, u11, u12, u13, u14, u15; 
	sc_out< sc_logic > re0, re1, re2, re3, re4, re5, re6, re7, re8, re9, re10, re11, re12, re13, re14, re15, im0, im1, im2, im3, im4, im5, im6, im7, im8, im9, im10, im11;
//------------Local Variables----------- 

	void do_division()
	{

	}
	
	SC_CTOR(division)
	{


		SC_METHOD(do_division);
		sensitive << p0 << p1 << p2 << p3 << p4 << p5 << p6 << p7 << p8 << p9 << p10 << p11 << p12 << p13 << p14 << p15 << q0 << q1 << q2 << q3 << q4 << q5 << q6 << q7 << q8 << q9 << q10 << q11 << q12 << q13 << q14 << q15 << u0 << u1 << u2 << u3 << u4 << u5 << u6 << u7 << u8 << u9 << u10 << u11 << u12 << u13 << u14 << u15; 
	}
};
