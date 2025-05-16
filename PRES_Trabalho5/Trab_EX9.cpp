#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //Escreva um programa para ler um número inteiro (considere que serão lidos apenas valores positivos e inteiros)
    //e escrever se é par ou ímpar.

    int num;

    cout << "Escolha um número: " << endl;
    cin >> num;

    if (num >= 1) {
        if (num % 2 == 0){
            cout << "O número " << num << " é par!!" << endl;
        }else {
            cout << "O número " << num << " é ímpar!!" << endl;
        }
    }else {
        cout << "O número é inválido!" << endl;
    }

    return 0;
}
