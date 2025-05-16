#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int irmaos, idade,nascimento;

    cout << "Qual é o seu nome? ";
    cin >> nome;
    cout << endl;

    cout << "Quantos irmãos você tem? ";
    cin >> irmaos;
    cout << endl;

    cout << "Qual é a sua idade? ";
    cin >> idade;
    cout << endl;

    nascimento = 2025- idade;

    cout << "Então você chama " << nome << ", tem " << irmaos << " irmãos, e nasceu em " << nascimento <<"?" << endl;
    return 0;
}
