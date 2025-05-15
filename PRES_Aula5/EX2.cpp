#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    //Fazer um programa, para imprimir os multiplos de 3 entre 3 ate 100

    int i;
    for ( i=3; i<=100; i+=3 ) //somando de 3 em 3: (i+=3) == (i=i+3)
        cout << setw(5) << i << endl;

    return 0;
}
