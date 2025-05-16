#include <iostream>
#include <locale>
#include <math.h>

using namespace std;

int main()
{
    // Faça um Programa que solicite o raio de um círculo, calcule e mostre sua área.

    setlocale(LC_ALL, "Portuguese");

    int raio;
    float area, pi=3.14;

    cout <<"Digite o raio do circulo: " << endl;
    cin >> raio;

    area = pi*(pow(raio, 2)); // incluir biblioteca para matematica // usa-se pow para exponenciação

    cout << "A área do círculo é: " << area << endl;

    return 0;
}
