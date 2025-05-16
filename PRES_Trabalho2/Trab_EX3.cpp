#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // Faça um Programa que solicite dois números e imprima na tela a soma dos números.

    setlocale(LC_ALL, "Portuguese");

    int num1, num2, soma;

    cout << "Digite o primeiro número: " << endl;
    cin >> num1;

    cout << "Digite o segundo número: " << endl;
    cin >> num2;

    soma = num1+num2;

    cout << "A soma do primeiro com o segundo número é: " << soma << endl;

    return 0;
}
