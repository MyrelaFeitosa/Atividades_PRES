#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cstring>

using namespace std;

int main()
{
    fflush(stdin);
    SetConsoleCP (1252);
    SetConsoleOutputCP(1252);

    //Fazer uma struct com ao menos 6 variáveis para armazenar dados de X elementos da struct.
    //Deverá ser impresso na tela os dados de todos os elementos.

    int nCadastros;

    cout << "--- Cadastro de Livros ---" << endl << endl;
    cout << "Digite o número de elementos para cadastro: " << endl;
    cin >> nCadastros;
    cout << endl;
    fflush(stdin);

    struct cadastroLivros{
       char titulo [60];
       char autor [60];
       int paginas;
       char insb [30];
       char idioma [10];
       char genero [20];
    }strLivros[nCadastros];

    int i;
    for (i=0; i < nCadastros; i++){
        cout << "Informe o título do livro: " << endl;
        cin.getline (strLivros[i].titulo, 60);
        cout << endl;

        cout << "Informe o nome do autor(a): " << endl;
        cin.getline (strLivros[i].autor, 60);
        cout << endl;

        cout << "Informe o número de páginas: " << endl;
        cin >> (strLivros[i].paginas);
        cout << endl;

        cout << "Informe o INSB do livro: " << endl;
        cin >> (strLivros[i].insb);
        fflush(stdin);
        cout << endl;

        cout << "Informe o idioma do livro: " << endl;
        cin.getline (strLivros[i].idioma, 10);
        fflush(stdin);
        cout << endl;

        cout << "Informe o genero do livro: " << endl;
        cin.getline (strLivros[i].genero, 20);
        fflush(stdin);
        cout << endl;

        cout << endl;
        fflush(stdin);
    }

     cout << "Livros cadastrados com sucesso!" << endl << endl;

     for (i=0; i < nCadastros ; i++){
         cout << "Título: " << strLivros [i].titulo << endl;
         cout << "Autor: " << strLivros [i].autor << endl;
         cout << "Número de páginas: " << strLivros [i].paginas << endl;
         cout << "INSB: " << strLivros [i].insb << endl;
         cout << "Idioma: " << strLivros [i].idioma << endl;
         cout << "Gênero: " << strLivros [i].genero << endl;
         cout << endl;
     }

    return 0;
}
