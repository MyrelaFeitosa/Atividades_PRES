#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i, num, resultado;

    cout << "Informe um número para que seja apresentado a Tabuada: ";
    cin >> num;

    cout << "Tabuada do " << num << ":" << endl;
    cout << "**************" << endl;

    for (i=1; i<=10; i++){

        resultado = num * i;
        cout << i << " X 8 = " << resultado << endl;
    }

      cout << "**************" << endl;

    return 0;
}