#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Escreva um programa para exibir os números contidos no intervalo de 50 a 10, inclusive.

    setlocale(LC_ALL, "Portuguese");

    int num=50;

    while (num >= 10){
        cout <<"Número = "<< num << endl;
        num = num - 1;
    }
      cout <<"Acabou!!!" << endl;
    return 0;
}
