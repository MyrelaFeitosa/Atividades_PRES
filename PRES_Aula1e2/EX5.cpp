#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3;
    bool resultado;

    cout << "Operadores Relacionais" << endl;
    cout << "Digite três números: " << endl;

    cin >> num1 >> num2 >> num3;

    resultado = num1 > num2;
    cout << "O resultado da operação: número 1 é maior que número 2, é: " << resultado << endl;

    resultado = num2 == num3;
    cout << "O resultado da operação: número 2 é igual ao número 3, é: " << resultado << endl;

    resultado = num3 != num1;
    cout << "O resultado da operação: número 3 é diferente do número 1, é: " << resultado << endl;

    return 0;
}
