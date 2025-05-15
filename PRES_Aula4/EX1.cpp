#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    cout <<"Digite 1 para Prato do Dia!" << endl;
    cout <<"Digite 2 para Lasanha!" << endl;
    cout <<"Digite 3 para Pícanha Grelhada!" << endl;
    cout <<"Digite 4 para Salada Simples!" << endl;

    cin >> opcao;

    switch (opcao){
    case 1:
        cout <<"Prato do Dia: 17.00 reais" << endl;
    break;

    case 2:
        cout <<"Lasanha: 17.00 reais" << endl;
    break;

    case 3:
        cout <<"Picanha Grelhada: 21.90 reais" << endl;
    break;

    case 4:
        cout <<"Salada Simples: 7.90 reais" << endl;
    break;

    default:
        cout <<"Opção Inválida!" << endl;
    }

    return 0;
}
