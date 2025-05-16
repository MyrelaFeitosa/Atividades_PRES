#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    SetConsoleCP;
    SetConsoleOutputCP;

    //Elabore um algoritmo que receba números e os armazene em uma matriz M x M.
    // Imprima apenas os números da diagonal principal.

    int m;

    cout << "Digite o tamanho da Matriz quadrada: " << endl;
    cin >> m;
    cout << endl;

    int matriz [m][m];
    int i,j;

    //Preenchendo a Matriz:

    for (i=0; i < m; i++){ //linha
        for(j=0; j < m; j++){ //coluna
            cout << "Digite o valor para preenchimento da Matriz [" << i << "," << j << "]: " << endl;
            cin >> matriz [i][j];
        }
    }

   //Mostrando a Matriz na tela:
    cout << endl;
    cout << "A Matrix [" << m << "x" << m << "] formada foi: " << endl;

    for (i=0; i < m; i++){ //linha
        for (j=0; j < m; j++){ //coluna
            cout << matriz [i][j] << "\t";
        }
        cout << endl;
    }

    //Mostrando a Matriz somente com a Diagonal Principal:
    cout << endl;
    cout << "A Matriz somente com a Diagonal Principal fica: " << endl;

    for (i=0; i < m; i++){ //linha
        for (j=0; j < m; j++){ // coluna

          if (i == j){
             cout << matriz [i][j] << "\t";
          }
        }
        cout << endl;
    }

    return 0;
}