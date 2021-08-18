#ifndef PDP11_H
#define PDP11_H

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
const int BIT_SHIFT = sizeof(Byte) * 8;
const int MEMSIZE = 64 * 1024;
extern Byte mem[MEMSIZE];
//---------------------------------------------------------------

//-----------------------------------------------------functions:
void b_write(Adress adr, Byte byte);  //write byte "byte" to "adr"
Byte b_read(Adress adr);              //read byte at "adr"
void w_write(Adress adr, Word word);  //write the word "word" at "adr"
Word w_read(Adress adr);              //read the word at "adr"
//---------------------------------------------------------------

#endif //PDP11_H