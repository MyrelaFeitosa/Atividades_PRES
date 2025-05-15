#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    //A função trcat é sada para unir duas strings.
    //Sua sintaxe é:  strcat(destino, origem).

    char palavra1[20], palavra2[20];

    cout << "Digite a palavra 1: " << endl;
    cin >> palavra1;

    cout << "Digite a palavra 2: " << endl;
    cin >> palavra2;

    cout << "Unindo a Palavra 1 a Palavra 2, temos = " << strcat (palavra1, palavra2) << endl;

    return 0;
}
