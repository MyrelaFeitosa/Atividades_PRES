#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int contador = 0;

    while (contador >= 0){
        cout <<"Contador = " << contador << endl;
        contador = contador + 1;
    }
        cout << "Acabou !!!" << endl;

    return 0;
}
