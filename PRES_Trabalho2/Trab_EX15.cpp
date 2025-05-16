#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

    setlocale(LC_ALL, "Portuguese");

    float numero;

    cout << "Digite um número: " << endl;
    cin >> numero;

    if (numero >= 0){

         cout << "O número " << numero <<" é positivo!" << endl;
    }
    else {
        cout << "O número " << numero <<" é negativo!" << endl;
    }

    return 0;
}
