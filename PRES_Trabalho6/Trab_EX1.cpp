#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << "--------Hoje é um dia muito feliz...--------" << endl;
    cout << "-------------Tenho prova de PES.------------" << endl;
    cout << "--------------Vou tirar DEZ.--------------" << endl;

    return 0;
}
