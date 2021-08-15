#ifndef PDP_11_PDP11_H
#define PDP_11_PDP11_H

//---------------------------------------------------------types:
typedef unsigned char Byte;         //or signed // 8 bit
typedef unsigned short int Word;    //or signed // 16 bit
typedef Word Adress;                // 16 bit
//---------------------------------------------------------------


//--------------------------------------------------------memory:
const int MEMSIZE = 64 * 1024;
Byte mem[MEMSIZE];
//---------------------------------------------------------------


//-----------------------------------------------------functions:
void b_write(Adress adr, Byte byte);   //пишем байт b по адресу adr
Byte b_read(Adress adr);            //читаем байт по адресу adr

void w_write(Adress adr, Word word);   //пишем слово w по адресу adr
Word w_read(Adress adr);            //читаем слово по адресу adr
//---------------------------------------------------------------

#endif //PDP_11_PDP11_H