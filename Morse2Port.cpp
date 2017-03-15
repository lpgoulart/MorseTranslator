#include "library.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

void Morse2Port(int len, std::string& frase)
{	
    std::fstream File;
    File.open ("Morse2Port.txt", std::fstream::in | std::fstream::out | std::fstream::app);
    cout << "Seu texto eh: ";	
	for(int i = 0; i < len; i++)
	{
    
    if(frase.at(i) == '.') //E
    {
        if(frase.at(i+1) == '.')//I
        {
            if(frase.at(i+2) == '.')//S
            {
                if(frase.at(i+3) == '.')//H
                {
                    if(frase.at(i+4) == '.')//5
                    {
                    	i += 5;
                    	cout << "5 ";
                        File << "5 ";
                    }
                    else if(frase.at(i+4) == '-')
                    {
                    	i += 5;
                    	cout << "4 ";
                        File << "4 ";
                    }
                    else
                    {
                    	i += 4;
                    	cout << "H ";
                        File << "H ";
                    }
                }
                else if(frase.at(i+3) == '-')//V
                {
                    if(frase.at(i+4) == '-')//3
                    {
                    	i += 5;
                    	cout << "3 ";
                        File << "3 ";
                    }
                    else 
                    {
                    	i+= 4;
                    	cout << "V ";
                        File << "V ";
                    }
                }
                
                else 
                {
                    i += 3;
                    cout << "S ";
                    File << "S ";
                }
            }
            else if(frase.at(i+2) == '-')//U
            {
                if(frase.at(i+3) == '.')//F
                {
                    i += 4;
                    cout << "F ";
                    File << "F ";
                }
                else if(frase.at(i+3) == '-')//-
                {
                    if(frase.at(i+4) == '-')//2
                    {
                    	i += 5;
                    	cout << "2 ";
                        File << "2 ";
                    }
                    else
                    {
                    	i += 4;
                    	cout << "- ";
                        File << "- ";
                    }
                }
                
                else 
                {
                    i += 3;
                    cout << "U ";
                    File << "U ";
                }
            }
            
            else
            {
                i += 2;
                cout << "I ";
                File << "I ";
            }
        }
        else if(frase.at(i+1) == '-')//A
        {
            if(frase.at(i+2) == '.')//R
            {
                if(frase.at(i+3) == '.')//L
                {
                    i += 4;
                    cout << "L ";
                    File << "L ";
                }
                
                else
                {
                    i += 3;
                    cout << "R ";
                    File << "R ";
                }
            }
            else if(frase.at(i+2) == '-')//W
            {
                if(frase.at(i+3) == '.')//P
                {
                    i += 4;
                    cout << "P ";
                    File << "P ";
                }
                else if(frase.at(i+3) == '-')//J
                {
                	if(frase.at(i+4) == '-')//1
                	{
                		i += 5;
                		cout << "1 ";
                        File << "1 ";
                	}
                    else
                    {
                    	i += 4;
                    	cout << "J ";
                        File << "J ";
                    }
                }
                
                else 
                {
                    i += 3;
                    cout << "W ";
                    File << "W ";
                }
            }
            
            else
            {
                i += 2;
                cout << "A "; 
                File << "A ";
            }
        }
        
        else
        {
        cout << "E ";
        File << "E ";
        }
    }

    else if(frase.at(i) == '-')//T
    {
        if(frase.at(i+1) == '.')//N
        {
                if(frase.at(i+2) == '.')//D
                {
                    if(frase.at(i+3) == '.')//B
                    {
                    	if(frase.at(i+4) == '.')//6
                    	{
                    		i += 5;
                    		cout << "6 ";
                            File << "6 ";
                    	}
                        else
                        {
                        	i += 4;
                        	cout << "B ";
                            File << "B ";
                        }
                    }
                    else if(frase.at(i+3) == '-')//X
                    {
                        i += 4;
                        cout << "X ";
                        File << "X ";
                    }
                    
                    else 
                    {
                        i += 3;
                        cout << "D ";
                        File << "D ";
                    }
                }
                else if(frase.at(i+2) == '-')//K
                {
                    if(frase.at(i+3) == '.')//C
                    {
                        i += 4;
                        cout << "C ";
                        File << "C ";
                    }
                    else if(frase.at(i+3) == '-')//Y
                    {
                        i += 4;
                        cout << "Y ";
                        File << "Y ";
                    }
                    
                    else
                    {
                        i += 3;
                        cout << "K ";
                        File << "K ";
                    }
                }
            
                else
                {
                    i += 2;
                    cout << "N ";
                    File << "N ";
                }
        }
        else if(frase.at(i+1) == '-')//M
        {
            if(frase.at(i+2) == '.')//G
            {
                    if(frase.at(i+3) == '.')//Z
                    {
                    	if(frase.at(i+4) == '.')//7
                    	{
                    		i += 5;
                    		cout << "7 ";
                            File << "7 ";
                    	}
                        else 
                        {
                        	i += 4;
                        	cout << "Z ";
                            File << "Z ";
                        }
                    }
                    else if(frase.at(i+3) == '-')//Q
                    {
                        i += 4;
                        cout << "Q ";
                        File << "Q ";
                    }
                
                    else
                    {
                        i += 3;
                        cout << "G ";
                        File << "G ";
                    }
            }
            else if(frase.at(i+2) == '-')//O
            {
                    if(frase.at(i+3) == '.')//.
                    {
                    	if(frase.at(i+4) == '.')//8
                    	{
                    		i += 5;
                    		cout << "8 ";
                            File << "8 ";
                    	}
                        else
                        {
                        	i += 4;
                        	cout << ". ";
                            File << ". ";
                        }
                    }
                    else if(frase.at(i+3) == '-')//NADA
                    {
                    	if(frase.at(i+4) == '.')//9
                    	{
                    		i += 5;
                    		cout << "9 ";
                            File << "9 ";
                    	}
                    	else if(frase.at(i+4) == '-')//0
                    	{
                    		i += 5;
                    		cout << "0 ";
                            File << "0 ";
                    	}
                        else 
                        {
                        	i += 4;
                        	cout << "NADA ";
                            File << "NADA ";
                        }
                    }
                
                    else
                    {
                        i += 3;
                        cout << "O ";
                        File << "O ";
                    }
            }
            
            else 
            {
                i += 2;
                cout << "M ";
                File << "M ";    
            }
        }
        
        else 
        {
            cout << "T ";
            File << "T ";
        }
    }

    
	}
		cout << endl;
        File << endl;
}