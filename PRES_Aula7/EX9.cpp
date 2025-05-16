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
    //Imprima a matriz sem os números da diagonal principal.

    int m;

    cout << "Digite o tamanho da matriz quadrada: " << endl;
    cin >> m;

    int matriz [m][m];
    int i,j;

    // Preenchendo a Matriz:

    for(i=0; i < m; i++){
        for(j=0; j < m; j++){
            cout << "Digite o valor para preencher a matriz [ " << i << ", " << j << "]: " << endl;
            cin >> matriz [i][j];
        }
    }

    cout << endl;

    //Mostrando a Matriz na tela:
    cout << "A Matrix [" << m << "x" << m << "] formada foi: " << endl;

    for (i=0; i < m; i++){ // linha
        for(j=0; j < m; j++){ // coluna
            cout << matriz [i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;


    // Mostrando os valores na tela:
    cout << "A Matriz sem os números da diagonal principal fica: " << endl;

    for (i=0; i < m; i++){ // linha
        for(j=0; j < m; j++){ // coluna

            if(i != j){
                cout << matriz[i][j] << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}