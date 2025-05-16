#include <iostream>
#include <locale>

using namespace std;

int main()
{
    // Faça um Programa que solicite as 4 notas bimestrais de um aluno e mostre sua média na tela.

    setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, nota4, media;

    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;

    cout << "Digite a segunda nota: " << endl;
    cin >> nota2;

    cout << "Digite a terceira nota: " << endl;
    cin >> nota3;

    cout << "Digite a quarta nota: " << endl;
    cin >> nota4;

    media = (nota1 + nota2 + nota3 +nota4)/4;

    cout << "A média do aluno é: " << media << endl;


    return 0;
}