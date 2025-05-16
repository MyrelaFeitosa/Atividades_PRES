#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale (LC_ALL, "Portuguese");
    //A prefeitura de uma cidade fez uma pesquisa entre 15 habitantes, coletando dados sobre o salário e número de filhos.
    // A prefeitura deseja saber:
    //•média do salário da população;
    //•média do número de filhos;
    //•maior salário; .

    int i, filhos;
    float salario, mediaSalario, mediaFilhos, maiorSalario;
    float somaSalario, somaFilhos;

    somaSalario = 0;
    somaFilhos = 0;
    mediaSalario = 0;
    mediaFilhos = 0;
    maiorSalario = 0;

    for (i=1; i <= 15; i++){
        cout << "Digite o salário: " << endl;
        cin >> salario;
        cout << "Digite o número de filhos: " << endl;
        cin >> filhos;

        somaSalario = somaSalario + salario;
        somaFilhos = somaFilhos + filhos;

        mediaSalario = somaSalario/15;
        mediaFilhos = somaFilhos/15;

        if (salario > maiorSalario){
            maiorSalario = salario;
        }

    }

     cout << "A média de salário da população é: " << mediaSalario << endl;
     cout << "A media de filhos é: " << mediaFilhos << endl;
     cout << "O maior salário é: " << maiorSalario << endl;
    return 0;
}