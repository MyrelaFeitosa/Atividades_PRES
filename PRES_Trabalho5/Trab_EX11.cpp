#include <iostream>
#include <locale>


using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //Escrever um programa que leia 15 números, um de cada vez, e conte quantos destes valores são negativos.
    //Exiba a quantidade de números negativos digitados.

    int i, num, qtdNegativos;

    qtdNegativos = 0;

    for (i = 1; i <= 15; i++){
         cout << "Digite um número: " << endl;
         cin >> num;

         if(num <= -1){
           qtdNegativos = qtdNegativos + 1;
         }
    }
    cout << "Foram digitados: " << qtdNegativos << " números negativos!" << endl;

    return 0;
}
