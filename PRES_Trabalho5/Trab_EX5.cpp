#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //Escreva um programa para ler um valor e escrever se é positivo ou negativo. Considere o valor zero como positivo.

    int num;

    cout <<"Digite um número: " << endl;
    cin >> num;

    if (num >= 0){
        cout <<"O número " << num << " é positivo!!" << endl;
    }else {
        cout <<"O valor é negativo!!" << endl;
    }

    return 0;
}
