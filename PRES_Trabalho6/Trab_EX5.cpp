#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, num, maior, menor;

    maior = 1;
    menor = 1;

    cout << "Esse programa pegara 50 valores e retornará o maior e o menor deles!" << endl << endl;

    for ( i=1; i <= 50; i++){
        cout << "Digite um valor: " << endl;
        cin >> num;

        if (maior < num){
            maior = num;
        }

        if (menor > num){
            menor = num;
        }

    }
     cout << "O maior número digitado é: " << maior << endl;
     cout << "O menor número digitado é: " << menor << endl;

    return 0;
}