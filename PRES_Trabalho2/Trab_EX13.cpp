#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Escreva um programa que recebe dois números e retorna o maior deles.

    setlocale(LC_ALL, "Portuguese");

    int num1, num2;

    cout <<"Digite o primeiro número: "<<endl;
    cin >> num1;

    cout << "Digite o segundo número: "<<endl;
    cin >> num2;

    if (num1> num2){
      cout << "O número "<<num1<<" é o maior!" <<endl;
    }
    else{
      cout << "O número "<<num2<<" é o maior !" << endl;
    }

    return 0;
}
