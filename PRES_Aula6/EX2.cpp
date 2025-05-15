#include <iostream>
#include <locale>
#include <cstring> //A função getline vai armazenar tudo que foi escrito na linha ate 250 caracters


using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");

    string nome;

    cout << "Olá, vamos conversar?" << endl;
    //Pergunta 1:
    cout << "Qual é o seu nome?" << endl;
    getline (cin, nome);

    cout << "Nossa!, " << nome << ", que nome feio!!" << endl;
    return 0;
}
