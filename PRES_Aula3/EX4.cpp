#include <locale>

using namespace std;

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Escreva um programa que receba tres números e retorne o maior deles

   int num1 , num2, num3, maior;
   maior = 0;

   cout <<"Digite o primeiro número: " << endl;
   cin >> num1;

   cout << "Digite o segundo número: " << endl;
   cin >> num2;

   cout << "Digite o terceiro número: " << endl;
   cin >> num3;

   if ((num1> num2) && (num1 > num3))
     maior = num1;

   if ((num2>num1) && (num2>num3))
     maior = num2;

   if ((num3 > num1) && (num3>num2))
    maior = num3;

   cout << " O maior número é: " << maior << endl;
    return 0;
}