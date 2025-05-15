#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    //Fazer um programa para solicitar o nome completo de uma pessoa. tres notas e gerar sua média

    char nome[50];
    float nota1, nota2, nota3;
    float media;

    cout <<"Programa para calcular uma média!" << endl << endl;
    cout <<"Digite o nome completo: " << endl;
    cin >> nome;
    cout << endl;

    cout <<"Digite a primeira nota: " << endl;
    cin >> nota1;
    cout <<"Digite a segunda nota: " << endl;
    cin >> nota2;
    cout <<"Digite a terceira nota: " << endl;
    cin >> nota3;

    media = (nota1 + nota2 + nota3)/3;

    cout <<"A média das notas é " << setprecision (2) << media << endl;
    return 0;
}
