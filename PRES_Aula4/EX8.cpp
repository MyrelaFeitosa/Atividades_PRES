#include <iostream>
#include <locale>

using namespace std;

int main()
{
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
