#ifndef PDP_11_PDP11_H
#define PDP_11_PDP11_H

//------------------------------------------------std components:
using std::cin;
using std::cout;
using std::endl;
using std::hex;
//---------------------------------------------------------------

//---------------------------------------------------------types:
typedef uint8_t Byte;
typedef uint16_t Word;
typedef Word Adress;
//---------------------------------------------------------------

//--------------------------------------------------------memory:
const int MEMSIZE = 64 * 1024;
extern Byte mem[MEMSIZE];
const int bit_shift = sizeof(Byte) * 8;
//---------------------------------------------------------------

//-----------------------------------------------------functions:
void b_write(Adress adr, Byte byte);   //пишем байт b по адресу adr
Byte b_read(Adress adr);            //читаем байт по адресу adr
void w_write(Adress adr, Word word);   //пишем слово w по адресу adr
Word w_read(Adress adr);            //читаем слово по адресу adr
//---------------------------------------------------------------

#endif //PDP_11_PDP11_H