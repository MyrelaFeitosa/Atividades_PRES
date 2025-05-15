#include <iostream>
#include<locale>
#include <cstring>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //A função strrchr é usada para encontrar a ultima ocorrência de um caractere em uma string.
    //Sua sintaxe é: strrchr(string, caractere).

    char texto[] = "Esse exemplo busca por determinado caracter dentro de uma string";
    char *ptr;

    cout << "Procurando por 'S' no texto: " << texto << endl << endl;
    ptr = strrchr(texto, 's');

    if (*ptr){
        cout <<"A letra 'S' apareceu pela última vez na posição: " << ptr-texto+1;
    } else{
        cout << "Letra não encontrada no texto.";
    }
    return 0;
}
