#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // Escreva um programa para exibir os números contidos no intervalo de n a m, inclusive. n e m devem ser valores informados pelo usuário
    //(os números devem ser exibidos em ordem crescente).

    setlocale(LC_ALL, "Portuguese");

    int n, m;

    cout<< "Informe o primeiro valor: "<< endl;
    cin >> n;

    cout<<"Informe o segundo valor, sendo esse obrigatoriamente maior que o primeiro: "<< endl;
    cin >> m;

    while (n <= m){
        cout <<"Numero= " << n << endl;
        n = n + 1;

    }
        cout <<"Fim!"<< endl;
    return 0;
}
