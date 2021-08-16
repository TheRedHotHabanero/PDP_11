#include "mem_tests.h"
#include "pdp_11.h"

using std::cin;
using std::cout;
using std::endl;

void test_byte_read_write_1()
{
  Byte new_byte = 0x0a;
  Adress new_adr = 2;

  b_write(new_adr, new_byte);
  Byte testing_byte = b_read(new_adr);

  assert(new_byte == testing_byte);
}

void test_word_read_2()
{
  Adress new_adr = 4;
  Byte first_byte = 0x0a;
  Byte second_byte = 0x0b;
  Word testing_word = 0x0b0a;

  b_write(new_adr, first_byte);
  b_write(new_adr + 1, second_byte);
  Word result_word = w_read(new_adr);

  assert(result_word == testing_word);
}

void test_word_write_3(/*Adress adr, Word word*/)
{
  Adress new_adr = 4;
  Word testing_word = 0x0b0a;

  w_write(new_adr, testing_word);
  Word result_word = w_read(new_adr);
  
  assert(result_word == testing_word);
}

void mem_test()
{
  test_byte_read_write_1();
  test_word_read_2();
  test_word_write_3();
}