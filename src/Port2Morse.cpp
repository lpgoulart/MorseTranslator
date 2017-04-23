#include "library.h"
#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

/**
*	@param len -> tamanho da string inserida
*	@param frase -> string inserida
*/
void Port2Morse(int len, std::string& frase)
{
	
	std::fstream File;
	
  	File.open ("../src/Port2Morse.txt", std::fstream::in | std::fstream::out | std::fstream::app);
	char a[36] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
	string m[36] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----" };
	
	cout << "Seu texto eh: ";

	for(int i = 0;i < len; i++)
	{
       for(int j=0; j < 36; j++)
       {
            if(toupper(frase.at(i)) == a[j])
            {
		 		cout << m[j] << " ";
		 		File << m[j] << "/";
				break;
	    	}
     	}
   	} 
   		File << endl;
   		cout << endl;
}