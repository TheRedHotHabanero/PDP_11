#include <iostream>
#include "pdp_11.h"
#include "mem_tests.h"

Byte mem[MEMSIZE];

void b_write(Adress adr, Byte byte)
{ mem[adr] = byte; }

Byte b_read(Adress adr)
{ return mem[adr]; }

Word w_read(Adress adr)
{
  Word new_word = ((Word)mem[adr + 1]) << 8; //8 byte
  new_word = new_word | mem[adr]; // &0xFF for signed
  return new_word;
}

void w_write(Adress adr, Word word)
{
  Byte first_byte = (Byte)(word & 0xff); // right byte
  Byte second_byte = (Byte)((word & 0xff00) >> 8); //left byte
  mem[adr] = first_byte;
  mem[adr + 1] = second_byte;
}
 

int main()
{
  mem_test();
  return 0;
}