#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //Escreva um programa que receba 20 números do usuário (um de cada vez). Calcule a média dos números pares digitados.

    int i, num, somaPares, qtdPares;
    float media;

    somaPares=0;

    for (i=1; i <= 20; i++){
        cout << "Digite um número: " << endl;
        cin >> num;

        if (num % 2 == 0){
            somaPares = somaPares + num;
            qtdPares = qtdPares + 1;
        }
    }

      media = somaPares/qtdPares;
      cout << "A média dos números pares digitados é: " << media << endl;

    return 0;
}