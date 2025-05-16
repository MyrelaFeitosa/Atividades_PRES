#include <iostream>
#include <locale>
#include <cctype>
#include <stdlib.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, num, resultado;
    char opcao;


  do {
    cout << "Deseja imprimir uma tabuada? " << endl;
    cout << "(S) sim ou (N) não" << endl;
    cin >> opcao;

    opcao = toupper (opcao);

      if (opcao == 'S' && opcao != 'N'){
           cout << "Informe um número para que seja apresentado a Tabuada: ";
           cin >> num;

           if (num >=1 && num <=9){
               cout << "Tabuada do " << num << ":" << endl;
               cout << "**************" << endl;

                   for (i=1; i<=10; i++){
                   resultado = num * i;
                   cout << i << " X 8 = " << resultado << endl;
                 }

          }else {
              cout << "Número Inválido!" << endl;
        }
          cout << "**************" << endl;
       }

    }while(opcao == 'S' && opcao != 'N');
         cout << "Sistema Encerrado!" << endl;

    return 0;
}