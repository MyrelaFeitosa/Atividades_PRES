#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char opcao;
    int num1, num2, soma, subtracao;

    cout <<"Escolha a Opção: " << endl;
    cout <<"Digite - A - para Somar!" << endl;
    cout <<"Digite - B - para Subtrair!" << endl;
    cout <<"Digite - C - para Siar do Programa" << endl;

    cin >> opcao;
    opcao = toupper(opcao);

    switch (opcao){
    case 'A':
        cout <<"Digite o primeiro número: " << endl;
        cin >> num1;

        cout <<"Digite o segundo número: " << endl;
        cin >> num2;

        soma = num1+num2;

        cout <<"O resultado da soma é " << soma << endl;
    break;

    case 'B':
        cout <<"Digite o primeiro número: " << endl;
        cin >> num1;

        cout <<"Digite o segundo número: " << endl;
        cin >> num2;

        subtracao = num1-num2;

        cout <<"O resultado da subtracão é " << subtracao << endl;
    break;

    case 'C':
        cout <<"Você saiu do programa!" << endl;
    break;

    default:
        cout <<"Opção Inválida!" << endl;

    }

    return 0;
}
