#include <iostream>
#include <locale>

using namespace std;

int main()
{

   setlocale(LC_ALL, "Portuguese");

   int senha;

   cout << "Digite sua senha: ";
   cin >> senha;

   if (senha == 1234 ){
     cout << "Acesso Permitido! " << endl;

   }else {
      cout << "Acesso Negado! " << endl;
   }

    return 0;
}
