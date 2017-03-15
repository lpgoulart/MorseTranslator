#include "library.h"
#include <string>
#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

void MorseRead(int len, std::string& frase)
{	

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
                    }
                    else if(frase.at(i+4) == '-')
                    {
                    	i += 5;
                    	cout << "4 ";
                    }
                    else
                    {
                    	i += 4;
                    	cout << "H ";
                    }
                }
                else if(frase.at(i+3) == '-')//V
                {
                    if(frase.at(i+4) == '-')//3
                    {
                    	i += 5;
                    	cout << "3 ";
                    }
                    else 
                    {
                    	i+= 4;
                    	cout << "V ";
                    }
                }
                
                else 
                {
                    i += 3;
                    cout << "S ";
                }
            }
            else if(frase.at(i+2) == '-')//U
            {
                if(frase.at(i+3) == '.')//F
                {
                    i += 4;
                    cout << "F ";
                }
                else if(frase.at(i+3) == '-')//-
                {
                    if(frase.at(i+4) == '-')//2
                    {
                    	i += 5;
                    	cout << "2 ";
                    }
                    else
                    {
                    	i += 4;
                    	cout << "- ";
                    }
                }
                
                else 
                {
                    i += 3;
                    cout << "U ";
                }
            }
            
            else
            {
                i += 2;
                cout << "I ";
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
                }
                
                else
                {
                    i += 3;
                    cout << "R ";
                }
            }
            else if(frase.at(i+2) == '-')//W
            {
                if(frase.at(i+3) == '.')//P
                {
                    i += 4;
                    cout << "P ";
                }
                else if(frase.at(i+3) == '-')//J
                {
                	if(frase.at(i+4) == '-')//1
                	{
                		i += 5;
                		cout << "1 ";
                	}
                    else
                    {
                    	i += 4;
                    	cout << "J ";
                    }
                }
                
                else 
                {
                    i += 3;
                    cout << "W ";
                }
            }
            
            else
            {
                i += 2;
                cout << "A "; 
            }
        }
        
        else
        {
        cout << "E ";
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
                    	}
                        else
                        {
                        	i += 4;
                        	cout << "B ";
                        }
                    }
                    else if(frase.at(i+3) == '-')//X
                    {
                        i += 4;
                        cout << "X ";
                    }
                    
                    else 
                    {
                        i += 3;
                        cout << "D ";
                    }
                }
                else if(frase.at(i+2) == '-')//K
                {
                    if(frase.at(i+3) == '.')//C
                    {
                        i += 4;
                        cout << "C ";
                    }
                    else if(frase.at(i+3) == '-')//Y
                    {
                        i += 4;
                        cout << "Y ";
                    }
                    
                    else
                    {
                        i += 3;
                        cout << "K ";
                    }
                }
            
                else
                {
                    i += 2;
                    cout << "N ";
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
                    	}
                        else 
                        {
                        	i += 4;
                        	cout << "Z ";
                        }
                    }
                    else if(frase.at(i+3) == '-')//Q
                    {
                        i += 4;
                        cout << "Q ";
                    }
                
                    else
                    {
                        i += 3;
                        cout << "G ";
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
                    	}
                        else
                        {
                        	i += 4;
                        	cout << ". ";
                        }
                    }
                    else if(frase.at(i+3) == '-')//NADA
                    {
                    	if(frase.at(i+4) == '.')//9
                    	{
                    		i += 5;
                    		cout << "9 ";
                    	}
                    	else if(frase.at(i+4) == '-')//0
                    	{
                    		i += 5;
                    		cout << "0 ";
                    	}
                        else 
                        {
                        	i += 4;
                        	cout << "NADA ";
                        }
                    }
                
                    else
                    {
                        i += 3;
                        cout << "O ";
                    }
            }
            
            else 
            {
                i += 2;
                cout << "M ";   
            }
        }
        
        else 
        {
            cout << "T ";
        }
    }

    
	}
		cout << endl;
}