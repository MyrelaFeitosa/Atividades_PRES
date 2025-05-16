#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    SetConsoleCP;
    SetConsoleOutputCP;

    //Elaborar um algoritmo que seja capaz de armazenar 15 números inteiros em um vetor,
    //imprimir cada número com a informação se ele é par ou ímpar


    int vetor[15];

    for (int i=0; i < 5; i++){
        cout << "Digite um número: " << endl;
        cin >> vetor[i];
     }

     cout << "Os números são: " << endl;
     for (int i=0; i < 5; i++){
        cout << vetor[i];

         if(vetor[i] % 2 == 0){
            cout << " - PAR" << endl;
         }else{
            cout << " - ÍMPAR" << endl;
         }
      }
  return 0;
}
