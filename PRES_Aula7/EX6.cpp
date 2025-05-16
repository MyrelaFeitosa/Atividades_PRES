#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    SetConsoleCP;
    SetConsoleOutputCP;

    // Fazer um programa que permita digitar o valor de N produtos.
    //Calcular o valor da compra

    int i, produtos;
    int vetor[produtos];
    float valor, soma = 0.0;

    cout << "Digite o número de produtos comprados: " << endl;
    cin >> vetor[produtos];

    for (i=1; i <= vetor[produtos]; i++){
        cout << "Digite o valor do produto: " << endl;
        cin >> valor;

        soma = soma + valor;
    }
    cout << endl;
    cout << "O valor total da compra foi de R$" << soma <<" reais" << endl;
    return 0;
}