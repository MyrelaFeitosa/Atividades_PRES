#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    SetConsoleCP;
    SetConsoleOutputCP;

    //Elabore um algoritmo para gerar duas matrizes MxN. Calcule e imprima a matriz soma.


    //Formando a MatrizA:
    int m,n;

    cout << "Digite o tamanho das Matrizes no formato MxN: " << endl;
    cout << "Digite o valor de M: " << endl;
    cin >> m;
    cout << "Digite o valor de N: " << endl;
    cin >> n;

    int matrizA[m][n];
    int i,j;

    //Preenchendo a MatrizA:
    cout << endl;
    for(i=0; i < m; i++){
        for (j=0; j < n; j++){
            cout << "Digite o valor para preenchimento da Matriz[A] [: " << i << "," << j << "]: " <<endl;
            cin >> matrizA [i][j];
        }
    }

    //Exibindo a MatrizA:
    cout << endl;
    cout << "A Matriz[A] [" << m << "," << n << "] formada foi: " << endl;

    for (i=0; i < m; i++){
        for (j=0; j < n; j++){
            cout << matrizA [i][j] << "\t";
        }
        cout << endl;
    }

    ///////////////////////////////////////////////////////////////////////////////////


    cout << endl;
    int matrizB[m][n];

    //Preenchendo a MatrizB:
    cout << endl;
    for(i=0; i < m; i++){
        for (j=0; j < n; j++){
            cout << "Digite o valor para preenchimento da Matriz[B] [: " << i << "," << j << "]: " <<endl;
            cin >> matrizB [i][j];
        }
    }

    //Exibindo a MatrizB:
    cout << endl;
    cout << "A Matriz[B] [" << m << "," << n << "] formada foi: " << endl;

    for (i=0; i < m; i++){
        for (j=0; j < n; j++){
            cout << matrizB [i][j] << "\t";
        }
        cout << endl;
    }

   /////////////////////////////////////////////////////////////////////////////////////


   //Somando as Matrizes A e B:
   cout << endl << endl;

   int matrizSoma[m][n];

   for (i=0; i < m; i++){
     for (j=0; j < n; j++){
        matrizSoma[i][j] = matrizA [i][j] + matrizB [i][j];
     }
   }

    cout << "A soma das Matrizes [A] e [B] é: " << endl;

    for (i=0; i < m; i++){
        for(j=0; j < n; j++){
        cout << matrizSoma[i][j] << "\t";
        }
     cout << endl;
    }


    return 0;
}