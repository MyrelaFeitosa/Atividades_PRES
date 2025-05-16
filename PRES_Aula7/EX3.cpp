#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP;
    SetConsoleOutputCP;

    int num = 5;
    char vetor[num];

    for (int i = 0; i < num; i++){
        cout << "Digite uma letra: " << endl;
        cin >> vetor[i];
    }

    for (int i = 0; i < num; i++){
        cout << "A letra armazenada na posição " << i << " do vetor né: " << vetor[i] << endl;
    }

    cout << "O vetor armazena as letras: " << vetor << endl;
    cout << "A segunda posição do vetor armazena a letra: " << vetor[1] << endl;

    return 0;
}
