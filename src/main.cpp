#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include "library.h"
using namespace std;

/**
*	@author Leonardo Goulart & Gustavo Batista
*	@author Projeto da primeira unidade de LP1
*	@author UFRN - Universidade Federal do Rio Grande do Norte
*
*	@see PortRead() 
*   @see Port2Morse()
*   @see MorseRead()
*	@see Morse2Port()
*/


int main(){

	string frase; // frase -> Variavel a ser traduzida 
	string aux = "  "; // aux -> Variavel adicionada ao final de "frase" para fins de tamanho a ser percorrido *
	int len; // len -> Inteiro representando o tamanho da string "frase"
	int opcao; // opcao -> Escolha do tipo de traducao pelo usuario
	bool var = true; // var -> Variavel responsavel por impedir qualquer entrada invalida
	int op; // op -> Escolha se "frase" vai receber um valor exixtente ou inserir um novo valor nos arquivos .txt

	while(var){

		
		ifstream myFile ("../src/Morse2Port.txt"); 
		ifstream myOtherFile ("../src/Port2Morse.txt"); 		

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
		cout << "\033[2J\033[1;1H"; 
		
		switch(op)
		{
			case 1:
				cout << endl << "Insira o texto a ser traduzido para Morse: " << endl;
				getline( cin, frase ); 
				len = frase.length(); 
				frase.insert( len, aux ); 
				Port2Morse( len, frase );
			break;
			case 2:
				if( myFile.is_open() )
				{
					while( getline ( myFile, frase ) )
					{
						len = frase.length();
						frase.insert( len, aux );
			    		cout << frase << endl; 
		        		PortRead( len, frase ); 
					}
				}else cout << endl << "O arquivo nao existe...ainda" << endl;

			break;
			default:
				var = false;
			break;
				var = true;
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
		cout << "\033[2J\033[1;1H";
		
		switch(op)
		{
			case 1:
				cout << endl << "Insira o texto a ser traduzido para o Alfabeto: " << endl;
				getline( cin, frase );
				len = frase.length();
				frase.insert( len, aux );
				Morse2Port( len, frase );
			break;
			case 2:

				if( myOtherFile.is_open() )
				{
					while( getline ( myOtherFile, frase ) )
					{
						len = frase.length();
						frase.insert( len,aux );
			    		cout << frase << endl; 
		        		MorseRead( len, frase ); 
					}
				}else cout << endl << "O arquivo nao existe...ainda" << endl;

			break;
			default:
				var = false;
			break;
				var = true;
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

