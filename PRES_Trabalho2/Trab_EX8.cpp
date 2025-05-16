#include <iostream>
#include <locale>

using namespace std;

int main()
{
    //Faça um Programa que pergunta quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o
    // total do seu salário no referido mês.

     setlocale(LC_ALL, "Portuguese");

     int horasTrabalhadas;
     float salarioHora, salarioTotal;

     cout << "Informe quanto você ganha por hora: " << endl;
     cin >> salarioHora;

     cout << "Informe o número de horas trabalhadas: "<< endl;
     cin >> horasTrabalhadas;

     salarioTotal = salarioHora*horasTrabalhadas;

     cout << "Seu salário mensal é de " << salarioTotal << " reais" << endl;

    return 0;
}
