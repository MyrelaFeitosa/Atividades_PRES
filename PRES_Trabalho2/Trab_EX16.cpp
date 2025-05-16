#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada
    //por aluno e apresentar: A mensagem "Aprovado", se a média alcançada por maior ou igual a sete; A mensagem "Reprovado",
    //se a mídia for menor do que sete; A mensagem "Aprovado com Distinção", se a média for igual a dez.

     setlocale(LC_ALL, "Portuguese");

     int nota1, nota2;
     float media;

     cout << "Digite a primeira nota: "<< endl;
     cin >> nota1;

     cout << "Digite a segunda nota: "<< endl;
     cin >> nota2;

     media = (nota1+nota2)/2;

     if(media < 7){
      cout <<"Reprovado!" << endl;
     }
     else if (media >=7 && media < 10) {
        cout <<"Aprovado!" << endl;
     }
     else {
        cout <<"Aprovado com distinção!" << endl;
     }

    return 0;
}