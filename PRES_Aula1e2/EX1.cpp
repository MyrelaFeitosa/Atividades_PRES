#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

       int numero1, numero2, numero3, resultadoPreliminar, resultadoFinal;

    cout << "Esse programa faz a soma de tres numeros. \n";
    cout <<"Digite o primeiro numero a ser somado: \n";
    cin >> numero1;
    cout <<"Digite o segundo numero a ser somado: \n";
    cin >> numero2;
    resultadoPreliminar = numero1 + numero2;
    cout << "Digite o terceiro numero a ser somado: \n";
    cin >> numero3;
    resultadoFinal = resultadoPreliminar + numero3;
    cout <<"O valor da soma é:" << resultadoFinal;

    return 0;
}
