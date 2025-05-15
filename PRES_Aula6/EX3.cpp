#include <iostream>
#include <locale>
#include <iomanip>
#include <cstring> //A função getline vai armazenar tudo que foi escrito na linha ate 250 caracters
#include <windows.h> // biblioteca de linguagem

using namespace std;

int main()
{
    //setlocale (LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);

    //Fazer um programa para solicitar o nome completo de uma pessoa. tres notas e gerar sua média

    string nome; // char nome[30];
    float nota1, nota2, nota3;
    float media;

    cout <<"Programa para calcular uma média!" << endl << endl;
    cout <<"Digite o nome completo: " << endl;
    getline (cin, nome);
    cout << endl;

    cout <<"Digite a primeira nota: " << endl;
    cin >> nota1;
    cout <<"Digite a segunda nota: " << endl;
    cin >> nota2;
    cout <<"Digite a terceira nota: " << endl;
    cin >> nota3;

    media = (nota1 + nota2 + nota3)/3;
    // media = (float(nota1 + nota2 + nota3)/3);
    // força a média a aparecer números cedimais

    cout << nome << ", sua média das notas é " << setprecision (2) << media << endl;
    return 0;
}