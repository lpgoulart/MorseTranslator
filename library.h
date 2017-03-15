#ifndef _LIBRARY_H_
#define _LIBRARY_H_
#include <string>

void Morse2Port (int , std::string& );
//Traduz de Morse para linguagem escrita baseada no alfabeto
void Port2Morse (int , std::string& );
//Traduz da linguagem do alfabeto para linguagem baseada morse
void MorseRead (int , std::string& );
//Realiza somente a leitura do arquivo .txt
void PortRead (int , std::string& );
//Realiza somente a leitura do arquivo .txt


#endif
