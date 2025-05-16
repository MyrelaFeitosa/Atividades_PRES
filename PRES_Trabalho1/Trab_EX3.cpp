#include <iostream>
#include <locale>

using namespace std;

//Faça um programa em C++ que pergunte um valor em graus Fahrenheit e imprime na tela o correspondente
//em Celsius usando a seguinte fórmula:
    //Celsius = (fahrenheit – 32) * (5.0/9.0).
//OBS: Usar uma variável double ou float para ler o valor em Fahrenheit

int main()
{
   setlocale (LC_ALL, "Portuguese");

   float fahrenheit;
   int celsius;

   cout << "Digite a temperatura em Fahrenheit: " << endl;
   cin >> fahrenheit;

   celsius = (fahrenheit - 32) * (5.0/9.0);

   cout <<"A temperatura correspondente em graus celsius é: " << celsius << endl;

    return 0;
}
