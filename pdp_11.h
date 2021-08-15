#ifndef PDP_11_PDP11_H
#define PDP_11_PDP11_H

const int MEMSIZE = 64 * 1024;

//-------------------------------types:
typedef unsigned char Byte;         //or signed // 8 bit
typedef unsigned short int Word;    //or signed // 16 bit
typedef Word Adress;                // 16 bit

//-------------------------------------
//-----------------------------functions:
void b_write(Adress adr, Byte b);   //пишем байт b по адресу adr

Byte b_read(Adress adr);            //читаем байт по адресу adr
void w_write(Adress adr, Word w);   //пишем слово w по адресу adr
Word w_read(Adress adr);            //читаем слово по адресу adr
//---------------------------------------

#endif //PDP_11_PDP11_H