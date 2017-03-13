#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <cstring>
#include "library.h"
using namespace std;

int main(){

	string frase;
	int len;
	int opcao;
	bool var = true;
	string aux = "  ";

	while(var){
	cout << "(1): Traduz Alfabeto -> Morse" << endl;
	cout << "(2): Traduz Morse -> Alfabeto" << endl;
	cout << "Digite qualquer tecla para sair..." << endl;
    cout << "Selecione uma opcao: ";
    cin >> opcao;
    
	switch(opcao)
	{
		case 1:
		cout << "Insira o texto a ser traduzido para Morse: " << endl;
		cin.ignore();
		getline(cin, frase);
		len = frase.length();
	    
        Port2Morse(len,frase);   
        cout << endl;
		break;
		case 2:
		cout << "Insira o texto em Morse que sera traduzido:" << endl; 
		cin.ignore();
		getline(cin, frase);
		len = frase.length();
		frase.insert(len,aux);
		
        Morse2Port(len, frase);
        cout << endl;
		break;
		default:
			var = false;
		break;

	} 
}
return 0;
}

