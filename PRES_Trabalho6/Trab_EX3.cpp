#include <iostream>
#include <locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    string produto;
    int opcao;
    float valor, desconto, acrescimo, comDesconto, boleto;

    cout << "Qual é o produto? ";
    getline (cin, produto);
    cout << endl;

    cout << "Qual é o valor do produto? ";
    cin >> valor;
    cout << endl;

    cout << "De acordo com o menu abaixo, informe como deseja pagar: " << endl;
    cout << "1 - Pagamento à vista (10% de desconto)" << endl;
    cout << "2 - Pagamento com 30 dias de prazo (sem desconto)" << endl;
    cout << "3 - Pagamento em 10x(Cartão de Crédito - sem desconto - sem acréscimo)" << endl;
    cout << "4 - Pagamento em 10x(Boleto - 10% de acréscimo)" << endl;
    cin >> opcao;

    switch (opcao){
        case 1:
            desconto = (valor * 10)/100;
            comDesconto = valor - desconto;
            cout << "O valor do produto com desconto é de: " << comDesconto << " reais" << endl;
        break;

        case 2:
            cout << "O valor do produto para pagamento com 30 dias é: " << valor << " reais" << endl;
        break;

        case 3:
            cout << "O valor do produto em 10x no cartão é de: " << valor << " reais" << endl;
        break;

        case 4:
            acrescimo = (valor * 10)/100;
            boleto = valor + acrescimo;
            cout << "O valor do produto em 10x no boleto é de : " << boleto << " reais" << endl;
        break;

        default:
            cout << "Opção Inválida!" << endl;

    }

    return 0;
}