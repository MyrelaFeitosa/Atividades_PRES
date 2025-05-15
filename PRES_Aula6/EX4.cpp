#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char palavra[20];

    cout << "Digite um,a palavra: " << endl;
    cin >> palavra;

    cout << "A palavra tem " << strlen(palavra) << " letras" << endl;

    // strlen(palavra)  -> conta quantos caracteres tem a palavra
    //                  -> determinar o tamanho de um string

    return 0;
}
