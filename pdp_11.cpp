#include <iostream>
#include "pdp_11.h"

using std::cin;
using std::cout;
using std::endl;

void b_write(Adress adr, Byte byte)
{ mem[adr] = byte; }

Byte b_read(Adress adr)
{ return mem[adr]; }
 
void test_byte_read_write()
{
  Byte new_byte = 0x0a;
  Adress new_adr = 2;

  b_write(new_adr, new_byte);
  Byte testing_byte = b_read(new_adr);

  cout << endl;
  if (new_byte == testing_byte)
     std::cout << "test_byte_read_write - DONE" << endl;
  else
     std::cout << "test_byte_read_write - FAILED" << endl;
  cout << endl;
}

int main()
{
  test_byte_read_write();
  return 0;
}