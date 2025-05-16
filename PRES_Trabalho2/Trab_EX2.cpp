#include <iostream>
#include <locale>

using namespace std;

int main()
{
   // Faça um Programa que solicite um número ao usuário e então mostre a mensagem: O número informado foi [número].

    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Digite um número: " << endl;
    cin >> num;

    cout << "O número informado foi: " << num << endl;

    return 0;
}
