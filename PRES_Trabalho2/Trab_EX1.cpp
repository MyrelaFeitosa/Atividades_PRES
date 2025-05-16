#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // Faça um Programa que mostra a mensagem "Sou aluno de BSI no IFSP" na tela

    setlocale(LC_ALL, "Portuguese");

     char nome[30];

     cout << "Digite seu nome: " << endl;
     cin >> nome;

     cout << "Meu nome é " << nome << ", e eu sou aluno de BSI no IFSP" << endl;


    return 0;
}
