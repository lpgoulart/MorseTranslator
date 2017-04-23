#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "library.h"
using namespace std;

/**
*	@param len -> tamanho da string inserida
*	@param frase -> string inserida
*/

void PortRead(int len, std::string& frase)
{

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
				break;
	    	}
     	}
   	} 
   	cout << endl;
}