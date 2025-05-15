#include <iostream>
#include<locale>
#include <cstring>

using namespace std;

int main()
{
    //A função strrev é usada para inverter o conteúdo de uma string.
    //Sua sintaxe é:  strrev(string).

    setlocale (LC_ALL, "Portuguese");

    char palavra [20];

    cout << "Esse exemplo inverte uma palavra" << endl;
    cout << "Digite uma palavra: " << endl;
    cin >> palavra;

    cout << "A palavra " << palavra << " invertida, fica: " << strrev(palavra) << endl;

    return 0;
}
