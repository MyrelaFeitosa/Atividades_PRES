#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
     setlocale (LC_ALL, "Portuguese");
     //Escreva um programa em C++ para ler o raio de um círculo, calcular e escrever a sua área e perímetro.
     //Fórmulas:  perímetro =  2 pi r , onde r é o raio e  vale 3.14, ou pode ser obtido através da biblioteca (cmath), utilizando a constante M_PI.

     const float pi = 3.14;
     float perimetro, area;
     int raio;

       cout <<"Digite o raio do circulo: " << endl;
       cin >> raio;

       perimetro = 2 * pi * raio;
       area = pi* pow(raio, 2);

       cout <<"O perímetro do circulo é " << perimetro <<", e sua área é " << area << endl;

    return 0;
}
