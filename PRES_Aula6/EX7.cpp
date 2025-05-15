#include <iostream>
#include<locale>
#include <cstring>


using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //A função strcmp é usada para verificar se duas strings são iguais.
    //Esta função retorna 0 se as strings são iguais.
    //Sua sintaxe é:  strcmp(string1,string2) .

    char palavra1[20], palavra2[20];

    cout << "Digite a palavra 1: " << endl;
    cin >> palavra1;

    cout << "Digite a palavra 2: " << endl;
    cin >> palavra2;

    if (strcmp (palavra1, palavra2)== 0){
        cout << "As palavras são iguais!" << endl;
    }else {
        cout << "As palavras são diferentes!" << endl;
    }
    return 0;
}
