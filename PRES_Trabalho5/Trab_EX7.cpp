#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    // Escrever um programa que leia o código do item pedido, a quantidade do item e calcule o valor a ser pago por aquele lanche.
    // Considere que a cada execução somente será calculado um item. Informe que código inválido caso seja digitado algo diferente.

    int codigo, quantidade;
    float valor;

    cout << "Cardápio da Lanchonete: " << endl << endl;;
    cout << "    Produto      | Código | Preço" << endl;
    cout << " Cachorro-Quente  | 100 | R$ 9,20 " << endl;
    cout << " Bauru Simples    | 101 | R$ 12,00 " << endl;
    cout << " Bauru com Ovo    | 102 | R$ 13,00 " << endl;
    cout << " Hamburguer       | 103 | R$ 10,00 " << endl;
    cout << " Chesseburguer    | 104 | R$ 12,00 " << endl;
    cout << " Refrigerante Lata| 105 | R$ 5,00 " << endl;
    cout << " Água             | 106 | R$ 3,00 " << endl << endl;

    cout << "Para fazer seu pedido digite: " << endl;
    cout << "O código do produto: " << endl;
    cin >> codigo;

    cout << fixed << setprecision(2);

    switch (codigo){
       case 100:
           cout << "Digite a quantidade: " << endl;
           cin >> quantidade;
           valor = quantidade * 9.20;
           cout << "Pedido: " << quantidade << " Cachorro-quente. Valor R$ " << valor << endl;
       break;

       case 101:
           cout << "Digite a quantidade: " << endl;
           cin >> quantidade;
           valor = quantidade * 12.00;
           cout << "Pedido: " << quantidade << " Bauru(s) Simples. Valor R$ " << valor << endl;
       break;

       case 102:
           cout << "Digite a quantidade: " << endl;
           cin >> quantidade;
           valor = quantidade * 13.00;
           cout << "Pedido: " << quantidade << " Bauru(s) com Ovo. Valor R$ " << valor << endl;
       break;

       case 103:
           cout << "Digite a quantidade: " << endl;
           cin >> quantidade;
           valor = quantidade * 10.00;
           cout << "Pedido: " << quantidade << " Hamburguer(s). Valor R$ " << valor << endl;
       break;

       case 104:
           cout << "Digite a quantidade: " << endl;
           cin >> quantidade;
           valor = quantidade * 12.00;
           cout << "Pedido: " << quantidade << " Chesseburguer(s). Valor R$ " << valor << endl;
       break;

       case 105:
           cout << "Digite a quantidade: " << endl;
           cin >> quantidade;
           valor = quantidade * 5.00;
           cout << "Pedido: " << quantidade << " Refrigerante Lata. Valor R$ " << valor << endl;
       break;

       case 106:
           cout << "Digite a quantidade: " << endl;
           cin >> quantidade;
           valor = quantidade * 3.00;
           cout << "Pedido: " << quantidade << " água. Valor R$ " << valor << endl;
       break;

    default:
         cout << "Código inválido!!!" << endl;

    }

    return 0;
}
