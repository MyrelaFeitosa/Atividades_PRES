#include <iostream>
#include <locale>

using namespace std;

//Exercícios 2:
//Faça um programa em C++ que leia o nome e três notas do aluno. Calcule a média. Após o cálculo, imprima uma
//mensagem da forma “Aluno Fulano possui média 7.0”.


int main()
{
        setlocale(LC_ALL, "Portuguese");

        char nome [30];
        int nota1, nota2, nota3;
        float media;

        cout << "Digite o nome do aluno: " << endl;
        cin >> nome;

        cout << "Digite a primeira nota: " << endl;
        cin >> nota1;

        cout << "Digite a segunda nota: " << endl;
        cin >> nota2;

        cout << "Digite a terceita nota: " << endl;
        cin >> nota3;

        media = ((nota1 + nota2 + nota3)/3);

        cout <<"A média do aluno " << nome << " é: " << media << endl;

    return 0;
}