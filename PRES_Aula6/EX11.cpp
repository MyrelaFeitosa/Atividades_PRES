#include <iostream>
#include<locale>
#include <cstring>

using namespace std;

int main()
{
     setlocale (LC_ALL, "Portuguese");
     //A função strset é usada para substituir todos os caracteres da string pelo mesmo caractere.
     //Sua sintaxe é:  strset(string,caractere).


     char palavra [20];

     cout << "Exemplo que substitui o caracter de uma palavra." << endl;
     cout << "Digite uma palavra: " << endl;
     cin >> palavra;

     cout <<"Substituindo " << strset(palavra, '*');


    return 0;
}
