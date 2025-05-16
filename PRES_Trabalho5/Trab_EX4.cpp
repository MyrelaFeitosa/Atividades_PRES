#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //Construa um programa em C++ que receba o nome e o valor de um produto, calcule o valor do produto após um desconto de 13%.
    //Apresente o resultado como o abaixo:
       //Produto: <nome do produto>
       //Valor: <valor original do produto>
       //Desconto: <valor do desconto>
       //Valor Final: <valor do produto após o desconto>

     char nome [30];
     float valorTotal, desconto, valorFinal;

     cout <<"Digite o nome do produto: " << endl;
     cin >> nome;

     cout <<"Digite o valor do produto: " << endl;
     cin >> valorTotal;

     valorFinal = (valorTotal * 13)/100;
     desconto = valorTotal - valorFinal;

     cout <<"Produto: " << nome << endl;
     cout <<"Valor: " << valorTotal << endl;
     cout <<"Desconto: " << setprecision(4) << desconto << endl;
     cout <<"Valor Final: " << setprecision(4) << valorFinal << endl;


    return 0;
}