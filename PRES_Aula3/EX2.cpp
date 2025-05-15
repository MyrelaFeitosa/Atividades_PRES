#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsPalmeiras;

    cout << "\n*** Placar São Paulo x Palmeiras ***\n";
    cout << " Digite a quantidade de gols de São Paulo: \n";
    cin >> golsSaoPaulo;
    cout << "Digite a quantidade de gols do Palmeiras: \n";
    cin >> golsPalmeiras;

    if (golsSaoPaulo > golsPalmeiras){
        cout << "A festa é tricolor !!!\n";
    }
    else {
        cout << "A festa é dos porcos !!!" << endl;
        cout << "SQN! Não adianta tentar enganar o computador!!" << endl;
    }
    return 0;
}
