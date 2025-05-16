#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    SetConsoleCP;
    SetConsoleOutputCP;

    const int tamanho = 5;
    float notas[tamanho], media = 0.0;
    int i;

    for (i=0; i < tamanho; i++){
        cout << "Digite a nota do aluno: " << (i+1) << ": " << endl;
        cin >> notas[i];

        media += notas[i];
    }

       cout << "A média das notas é: " << (media/tamanho) << endl;

    return 0;
}
