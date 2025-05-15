#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, soma, subtracao, divisao, multiplicacao;
    int resto, num4, num5;

    cout << "Este programa irá executar algumas operações matemática." << endl;
    cout << "Cinco números serão necessários." << endl << endl;

    cout << "Digite o primeiro número: " << endl;
    cin >> num1;

    cout << "Digite o segundo núemro: " << endl;
    cin >> num2;

    cout << "Digite o terceiro número: " << endl;
    cin >> num3;

    cout << "Digite o quarto número: " << endl;
    cin >> num4;

    cout << "Digite o quinto número: " << endl;
    cin >> num5;

    soma = num1 + num2;
    cout << "A soma do primeiro e segundo número é: " << soma << endl;

    subtracao = num3 - num1;
    cout << "A subtração do terceito e do primeiro número é: " << subtracao << endl;

    divisao = num2/num1;
    cout << "A divisão do segundo número pelo primeiro é: " << setprecision(2) << divisao << endl;

    multiplicacao = num1 * num2;
    cout << "A multiplicação do primeiro e segundo número é: " << multiplicacao << endl;

    resto = num4 % num5;
    cout << "O resto da divisâo do quarto pelo quinto número é: " << resto << endl;

    return 0;
}
