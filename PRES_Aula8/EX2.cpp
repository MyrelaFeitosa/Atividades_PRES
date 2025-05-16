#include <iostream>
#include <windows.h>

using namespace std;

    //Exemplo função:
    //Receba 2 conjuntos de 3 valores e o maior valor de cada conjunto

    //Funcao de retorna o maior valor entre x, y e z

    int acheMaior(int a, int b, int c){
        int maior;
        maior = a; //assume inicialmente que a variável x tem o maior valor

        // somente muda o valor 'maior' se os valores em y e z forem maiores
        if (b> maior){
            maior = b;
        }

        if (c > maior ){
            maior = c;
        }
        return maior;
    }

    int main ()
    {

    SetConsoleCP (1252);
    SetConsoleOutputCP(1252);

        int primeiro, segundo, terceiro, x, y, z, maior_1, maior_2;

        //le o primeiro conjunto de tres valores
        cout << "Digite o primeiro conjunto de três números: ";
        cin >> primeiro >> segundo >> terceiro;

        //verifica o maior dos tres valores
        maior_1 = acheMaior(primeiro, segundo, terceiro);

    //Neste ponto do programa, o maior_1 contém o maior valor dentre os 3 primeiros valores informados

    //Le o segundo conjunto de 3 valores
    cout << "Digite o segundo conjunto de tres números inteiros: ";
    cin >> x>>y>>z;

    //verifica o maior dos tres valores informados

    // usa a mesma funcao, pois o procedimento para encontrar os tres valores é o mesmo

    maior_2 = acheMaior(x, y, z);

    // neste ponto do programa, maior_2 contem o maior valor dentre os 3 valores informados no 2 conjunto de entrada

    //calcula e exibe a soma solicxitada
    cout << endl << maior_1 << " + " << maior_2 << " = " << maior_1 + maior_2 << endl;

    return 0;
    }