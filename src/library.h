#ifndef _LIBRARY_H_
#define _LIBRARY_H_
#include <string>

/// @brief Traduz de Morse para linguagem escrita baseada no alfabeto
void Morse2Port (int , std::string& );
/// @brief Traduz da linguagem do alfabeto para linguagem baseada morse
void Port2Morse (int , std::string& );
/// @brief Realiza somente a leitura do arquivo .txt
void MorseRead (int , std::string& );
/// @brief Realiza somente a leitura do arquivo .txt
void PortRead (int , std::string& );


#endif
