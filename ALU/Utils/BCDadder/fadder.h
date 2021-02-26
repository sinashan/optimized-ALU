#ifndef FADDER_H
#define FADDER_H
#include "systemc.h"

SC_MODULE(fadder)         
{
  sc_in< sc_logic > a, b, cin;        
  sc_out< sc_logic > sum, cout;


  void do_add()           
  {
	sc_logic aANDb,aXORb,cinANDaXORb;
		
      	aANDb = a.read() & b.read();
        aXORb = a.read() ^ b.read();
      	cinANDaXORb = cin.read() & aXORb;
	
        sum = aXORb ^ cin.read();
        cout = aANDb | cinANDaXORb;
  }

  SC_CTOR(fadder)         
  {
    SC_METHOD(do_add);    
    sensitive << a << b << cin; 
  }
};
#endif
