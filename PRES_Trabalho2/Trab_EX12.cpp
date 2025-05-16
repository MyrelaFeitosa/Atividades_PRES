#include <iostream>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
 //Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
 //Considere que a cobertura de tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros,
 //que custa R$ 80,00. Informe ao usuário as quantidades de latas de tinta que serão compradas e o preço total.

  setlocale(LC_ALL, "Portuguese");

    float area, latas, litros,preco;

    //1 lata = 18L de tinta = pinta 54 metros
    //1L de tinta pinta 3 metros
    //1 lata = 80 reais

    cout <<"Digite a área em metros quadrados a ser pintada: " << endl;
    cin >> area;

    litros = area/3;
    latas = ceil(litros/18); //ceil pra arredondar o numero de latas
    preco = latas * 80;

    cout <<"Para pintar "<<area <<" metros, serão usadas " << latas <<" latas de tinta. O preço total é de " << preco<< " reais" <<endl;

    return 0;
}
