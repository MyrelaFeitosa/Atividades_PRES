#include <iostream>
#include <windows.h>
#define DIM 5

using namespace std;

int main()
{
    SetConsoleCP;
    SetConsoleOutputCP;

    int vetor[5], i;

    for(i=0; i < 5; i++){
        cout << "Digite um número para armazenar na posição " << (i) << " do vetor: "<< endl;
        cin >> vetor[i];
    }

    return 0;
}
