#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

//Exercícios 1:
//Faça um programa em C++ que peça o nome de uma pessoa, a quantidade de quilômetros que ela andou de bicicleta
//e o tempo gasto em minutos para percorrer essa distância. Mostre na tela uma mensagem como: “Olá Mário, você percorreu
//30 km em 65 minutos, sua velocidade média foi: 27.7.

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome [30];
    float minutos, quilometros;
    float velocidadeMedia;

     cout << "Digite o seu nome: " << endl;
     cin >> nome;

     cout << "Digite os quilometros percorridos: " << endl;
     cin >> quilometros;

     cout << "Digite o tempo gasto em minutos para percorrer essa distancia: " << endl;
     cin >> minutos;

     velocidadeMedia = (quilometros/minutos)*60;

     cout <<"Olá " << nome << ", você percorreu " << quilometros << " km em " << minutos << " minutos. Sua velocidade média foi: " << setprecision (4) << velocidadeMedia << endl;

    return 0;
}