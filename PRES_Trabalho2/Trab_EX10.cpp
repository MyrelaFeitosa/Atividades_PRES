#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Faça um programa que recebe um valor do usuário e calcula 12% desse total.

    setlocale(LC_ALL, "Portuguese");

    float valor, resultado;

    cout <<"Digite um valor: " << endl;
    cin >> valor;

    resultado = valor * 0.12;

    cout << "12% de "<< valor <<" é igual a "<< resultado << endl;

    return 0;
}
