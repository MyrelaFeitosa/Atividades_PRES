#include <iostream>
#include <locale>

using namespace std;

int main()
{
     setlocale(LC_ALL, "Portuguese");

     int i=1, num; // variavel i iniciado em 1

     cout <<"Informe um número: " << endl;
     cin >> num;

     cout <<"Os 10 antecessores do número " << num << " são: " << endl;

     do {
        cout << num - i << endl;
        i = i + 1;

     }while (i <=10);

    return 0;
}
