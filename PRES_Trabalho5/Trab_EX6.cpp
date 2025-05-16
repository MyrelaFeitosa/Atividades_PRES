#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //Reescreva o programa do exercício anterior (exercício 5) considerando o zero como neutro, ou seja,
    //se for digitado o valor zero, escrever a palavra zero.

    int num;

    cout <<"Digite um número: " << endl;
    cin >> num;

    if (num != 0){
        if (num >=1){
            cout << "O número " << num << " é positivo!!" << endl;

        } else {
            cout << "O número " << num << " é negativo!!" << endl;
        }
    }else {
       cout << "Zero !!" << endl;
    }

    return 0;
}
