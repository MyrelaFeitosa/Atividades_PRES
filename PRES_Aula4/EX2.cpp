#include <iostream>
#include <locale>
#include <cctype> //biblioteca que converte a variável p/ maiusculo

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char bolo;

    cout <<"Digite uma opção do cardápio para ver o valor: " << endl;
    cout <<"Digite - C - Escolher Bolo de Chocolate!" << endl;
    cout <<"Digite - B - Escolher Bolo de Banana!" << endl;
    cout <<"Digite - A - Escolher Bolo de Amendoin!" << endl;
    cout <<"Digite - L - Escfolher Bolo de Limão!" << endl;
    cout <<"Digite - F - Escolher Bolo de Fubá!" << endl;

    cin >> bolo;
    bolo = toupper(bolo);

    switch (bolo){
       case 'C':
          cout <<"O Bolo de Chocolate custa R$ 14.00 reais" << endl;
       break;

       case 'B':
          cout <<"O Bolo de Banana custa R$ 17.00 reais" << endl;
       break;

       case 'A':
          cout <<"O Bolo de Amendoim custa R$ 13.00 reais" << endl;
       break;

       case 'L':
          cout <<"O Bolo de Limão custa R$ 15.00 reais" << endl;
       break;

       case 'F':
          cout <<"O Bolo de Fubá custa R$ 12.00 reais" << endl;
       break;

       default:
        cout <<"Opção Inválida!" << endl;
    }

    return 0;
}