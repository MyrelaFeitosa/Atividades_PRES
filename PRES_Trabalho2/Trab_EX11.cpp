#include <iostream>
#include <locale>

using namespace std;

int main()
{
// Você se tornou programador C++, e agora está ganhando super bem. Mas, mesmo assim, vai ter que pagar impostos.
//Crie um software que recebe o valor do seu salário e calcula os 7% do imposto de renda.
//A saída do seu programa deve ser o salário bruto (sem abatimento), o tanto de imposto que vai pagar e o seu salário
// líquido (após descontar o IR).

  setlocale(LC_ALL, "Portuguese");

  float salarioBruto, valorImposto, salarioLiquido;

  cout << "Digite o valor do seu salário: " << endl;
  cin >> salarioBruto;

  valorImposto = salarioBruto*0.07;
  salarioLiquido = salarioBruto - valorImposto;

  cout << "O saláripo bruto é " << salarioBruto << ", o valor do imposto a ser pago é " << valorImposto
  <<" e o valor do salário após o desconto do imposto é "<< salarioLiquido << endl;


    return 0;
}
