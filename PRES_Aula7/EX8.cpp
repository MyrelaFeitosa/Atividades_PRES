#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    SetConsoleCP;
    SetConsoleOutputCP;

    //Preenchimento de Matriz:

    int matriz [2][3];
    int i, j;

    for(i=0; i < 2; i++){
        for(j=0; j < 3; j++){
            cout << "Digite o valor para preencher a matriz [ " << i << ", " << j << "]: " << endl;
            cin >> matriz [i][j];
        }
    }

    // Mostrando os valores na tela:


    cout << endl;

    for (i=0; i < 2; i++){ // linha
        for(j=0; j < 3; j++){ // coluna
            cout << matriz [i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
