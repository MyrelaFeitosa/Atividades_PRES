#include <iostream>
#include <locale>
#include <cctype>
#include <iomanip>

using namespace std;

int main()
{
     setlocale (LC_ALL, "Portuguese");
     //Tendo como dados de entrada a altura e o sexo de uma pessoa (M para masculino e F para feminino), construa um programa
     //que calcule o peso ideal de uma pessoa, utilizando as seguintes fórmulas:
     //- para pessoa do sexo masculino: peso Ideal =  (72.7*h)-58
     //- para pessoa do sexo feminino: peso Ideal =: (62.1*h)-44.7
     //Exiba as informações incluindo o peso ideal.

     char sexo;
     float pesoIdeal, altura;

     cout << "Escolha o sexo: (M) Masculino ou (F) Feminino: " << endl;
     cin >> sexo;

     sexo = toupper(sexo);
     cout << fixed << setprecision (2);

     switch (sexo){
          case 'M':
              cout << "Digite sua altura em metros: " << endl;
              cin >> altura;

              pesoIdeal = (72.7* altura)-58;
              cout << "Sexo selecionado: Masculino. Altura: " << altura << "m. Seu peso ideal é: " << pesoIdeal << " Kg." << endl;
          break;

          case 'F':
              cout << "Digite sua altura: " << endl;
              cin >> altura;

              pesoIdeal = (62.1* altura)-44.7;
              cout << "Sexo selecionado: Feminino. Altura: " << altura << "m. Seu peso ideal é: " << pesoIdeal  << " Kg." << endl;
          break;

          default:
            cout << "Sexo inválido!!" << endl;

     }

    return 0;
}