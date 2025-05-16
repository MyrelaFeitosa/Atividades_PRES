#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Faça um programa que calcula 12% de 2112.

    setlocale(LC_ALL, "Portuguese");

    float resultado;

    resultado = 0.12*2112;

    cout << "12% de 2112 é igual a: " << resultado << endl;

    return 0;
}
