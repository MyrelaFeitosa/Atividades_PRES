#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    float soma = 0.0;
    const int max = 10;
    int i;

    cout << setprecision (2);

     for ( i=0; i < max; i++){
        cout << "Nota " << (i+1) << " = " << endl;
        float nota;
        cin >> nota;
        soma = soma + nota;
        // soma +=nota;
     }
       cout << setw(5) <<"Média = " << (soma/max) << endl;

    return 0;
}
