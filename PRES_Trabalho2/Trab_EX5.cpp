#include <iostream>
#include <locale>

using namespace std;

int main()
{
   //Faça um Programa que solicite uma distância em metros e a converta para centímetros.

   setlocale(LC_ALL, "Portuguese");

   float distanciaMetros, distanciaCentimetros;

   cout << "Digite a distancia em metros: " << endl;
   cin >> distanciaMetros;

   distanciaCentimetros = distanciaMetros * 100;

    cout << "A distancia em centimetros é: " << distanciaCentimetros << endl;

    return 0;
}