#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho.
    //Toda vez que ele trouxer um peso de peixes maior que o previsto pelo regulamento de pesca do estado de São Paulo
    //(50 quilos) deverá pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia
    // a variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do
    //limite e na multa variável o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens apropriadas.

    setlocale(LC_ALL, "Portuguese");

    int peso, excesso, multa;

    cout << "Digite o peso do peixe: " << endl;
    cin >> peso;

    if (peso > 50){

        excesso = peso - 50;
        multa = excesso * 4;

        cout << "O peso do peixe está "<< excesso <<" kg acima do permitido pelo regulamento de São Paulo. O valor da multa a ser paga é "
        << multa <<" reais" << endl;
    }
    else {
        cout << "O peso do peixe está dentro do previsto pelo regulamento de São Paulo" << endl;
    }
    return 0;
}