#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
using namespace std;

int main(){

	string frase;
	int len;
	int opcao;
	bool var = true;
	char a[28] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.', ',' };
	string m[28] = { ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", ".-.-.-", "--..--" };
	string aux = "  ";

	while(var){
    cin >> opcao;
    
	switch(opcao)
	{
		case 1:
		cin.ignore();
		getline(cin, frase);
		len = frase.length();
	for(int i = 0;i < len; i++)
	{
       for(int j=0; j < 28; j++)
       {
            if(toupper(frase.at(i)) == a[j])
            {
		 		cout << m[j] << " ";
				break;
	    	}
     	}
   	} 
   		cout << endl;
		break;
		case 2:
		cin.ignore();
		getline(cin, frase);
		len = frase.length();
		frase.insert(len,aux);
		
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
                i += 4;
                cout << "H ";
            }
            else if(frase.at(i+3) == '-')//V
            {
                i+= 4;
                cout << "V ";
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
                i += 4;
                cout << "- ";
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
                i += 4;
                cout << "J ";
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
    
    else cout << "E ";
}

else if(frase.at(i) == '-')//T
{
    if(frase.at(i+1) == '.')//N
    {
            if(frase.at(i+2) == '.')//D
            {
                if(frase.at(i+3) == '.')//B
                {
                    i += 4;
                    cout << "B ";
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
                    i += 4;
                    cout << "Z ";
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
                    i += 4;
                    cout << ". ";
                }
                else if(frase.at(i+3) == '-')//NADA
                {
                    i += 4;
                    cout << "NADA ";
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
    
    else cout << "T ";
}

    
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

