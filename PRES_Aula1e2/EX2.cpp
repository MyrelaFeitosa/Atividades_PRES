#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int salario = 1000;
    int comissao = 5;
    int valorVendas, salarioFinal;

    cout << "Digite o valor total de vendas no mês: ";
    cin >> valorVendas;

    salarioFinal = salario + ((valorVendas * comissao)/100);

    cout << "O salário final é: \n" << salarioFinal << "Reais";

    return 0;
}
