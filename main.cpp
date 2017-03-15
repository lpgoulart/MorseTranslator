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
	int op;

	while(var){

		ifstream myFile ("Morse2Port.txt");
		ifstream myOtherFile ("Port2Morse.txt");

	cout << "(1): Traduz Alfabeto -> Morse" << endl;
	cout << "(2): Traduz Morse -> Alfabeto" << endl;
	cout << "Digite qualquer tecla para sair..." << endl;
    cout << "Selecione uma opcao: ";
    cin >> opcao;
    
	switch(opcao)
	{
		case 1:
		cout << endl << "Alfabeto -> Morse" << endl;
		cout << "Selecione (1) para inserir nova string" << endl;
		cout << "Selecione (2) para imprimir strings salvas" << endl;
		cout << "Selecione sua opcao: ";
		cin >> op;
		cin.ignore();
		
		switch(op)
		{
			case 1:
				cout << endl << "Insira o texto a ser traduzido para Morse: " << endl;
				getline(cin,frase);
				len = frase.length();
				frase.insert(len,aux);
				Port2Morse(len, frase);
			break;
			case 2:

				if( myFile.is_open() )
				{
					while( getline (myFile,frase) )
					{
						len = frase.length();
						frase.insert(len,aux);
			    		cout << frase << endl; 
		        		Port2Morse(len,frase); 
					}
				}else cout << endl << "O arquivo nao existe...ainda" << endl;

			break;
			default:
			break;
		}		
        cout << endl;
		break;
		
		case 2:
		cout << endl << "Morse -> Alfabeto" << endl;
		cout << "Selecione (1) para nova string" << endl;
		cout << "Selecione (2) para imprimir strings salvas" << endl;
		cout << "Selecione sua opcao: ";
		cin >> op;
		cin.ignore();
		
		switch(op)
		{
			case 1:
				cout << endl << "Insira o texto a ser traduzido para o Alfabeto: " << endl;
				getline(cin,frase);
				len = frase.length();
				frase.insert(len,aux);
				Morse2Port(len, frase);
			break;
			case 2:

				if( myOtherFile.is_open() )
				{
					while( getline (myOtherFile,frase) )
					{
						len = frase.length();
						frase.insert(len,aux);
			    		cout << frase << endl; 
		        		Morse2Port(len,frase); 
					}
				}else cout << endl << "O arquivo nao existe...ainda" << endl;

			break;
			default:
			break;
		}		
        cout << endl;
		break;
		default:
			var = false;
		break;

	} 
}
return 0;
}

