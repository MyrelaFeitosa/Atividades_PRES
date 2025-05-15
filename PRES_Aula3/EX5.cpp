#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float media;

    cout << "Digite a media do aluno: " << endl;
    cin >> media;

    if(media >= 0 && media <=10){
        cout <<"A média é válida!" << endl;
        if(media >= 6){
            cout <<"Aluno foi aprovado com média " << media << endl;
        }
        else{
            cout << "Aluno foi re4provado com média: " << media << endl;
        }
    }
    else{
        cout << "A média é inválida!" << endl;
    }

    return 0;
}
