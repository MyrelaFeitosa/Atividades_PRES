#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    // Escreva um programa que recebe dois numeros e retorne o maior deles

    int num1, num2;

    cout << "Digite o primeiro número: " << endl;
    cin >> num1;

    cout << "Digite o segundo número: " << endl;
    cin >> num2;

    if (num1>num2){
        cout <<" O primeiro número é o maior!!" << endl;
    }
    else{
        cout <<"O segundo número é o maior!!" << endl;
    }
    return 0;
}
