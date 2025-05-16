#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Escreva um programa para calcular a soma dos números pares contidos entre 100 e 200, inclusive.
    // Exiba o resultado da soma.

     setlocale(LC_ALL, "Portuguese");

     int i= 100;
     float par, soma;

     while (i <=200 ) { // enquanto i for igual ou menor que 200

       if (i % 2 == 0){ // se o resto de i dividido por 2 for igual a 0 é par
           par = i;
           soma = soma + par;
       }
         i = i + 1;
     }
     cout <<"A resultado da soma dos números pares entre 100 e 200 é: " << soma << endl;

    return 0;
}
