#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Faça um programa que calcula a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

     setlocale(LC_ALL, "Portuguese");

     int base, area, dobroArea;

     cout << "Digite a base do quadrado: " << endl;
     cin >> base;

     area = base*base;
     dobroArea = area*2;

     cout << "A área do quadrado é " << area <<" e o dobro da área é "<< dobroArea << endl;


    return 0;
}
