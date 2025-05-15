#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    int i;
    for ( i=10; i>=1; i--)
        cout << setw(5) << i<< setw(10) << "X6 = " << setw(15) << i*6 << endl;

    return 0;
}
