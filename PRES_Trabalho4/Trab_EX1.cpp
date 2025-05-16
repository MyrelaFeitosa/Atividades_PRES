#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Faça um programa para ler N números inteiros – informe um de cada vez. A repetição será encerrada quando o usuário digitar o número 0.
    // O programa deve informar quantos números foram digitados.

    setlocale(LC_ALL, "Portuguese");

    int num, i=0;

    do {
        cout<<"Digite um número: " << endl;
        cin >> num;

        i = i+1; // conta a quantidade de números digitados

        cout<<"O número escolhido foi " << num << endl;

    }while (num != 0);{
        cout <<"Programa encerrado!!" << endl;
        cout <<"Foram digitados " << i << " números" << endl;
    }
    return 0;
}
