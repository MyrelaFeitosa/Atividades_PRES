#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Escreva um programa para exibir os números contidos no intervalo de 10 a 100, inclusive

    setlocale(LC_ALL, "Portuguese");

    int num =10;

    while (num <=100){
        cout <<"Número = " << num << endl;
        num = num + 1;
    }
        cout <<"Acabou!!" << endl;

    return 0;
}
