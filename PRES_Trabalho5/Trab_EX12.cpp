#include <iostream>
#include <locale>
#include <cstdlib> // biblioteca para encerrar o programa

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //Construir um programa que calcule a média aritmética de 20 valores inteiros positivos, fornecidos pelo usuário.
    //Exiba o resultado da média.

    int i, num, soma;
    float mediaAritmetica;

   for (i=1; i <= 20; i++){
         cout << "Digite um número positivo: " << endl;
         cin >> num;

        if(num >= 1){
            soma= soma + num;
            mediaAritmetica = soma/20;

        }else {
            cout << "Número inválido!!" << endl;
            cout << "Todos os valores devem ser positivos!!" << endl;
            cout << "O programa será encerrado!!" << endl;
         exit(0);
        }

    }
    cout << "A média aritmética dos valores digitados é: " << mediaAritmetica << endl;

    return 0;
}