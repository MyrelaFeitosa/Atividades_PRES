#include <iostream>
#include <locale>
#include <cctype>

using namespace std;

int main()
{
    //Faça um programa que deve perguntar ao usuário se ele deseja somar, subtrair, dividir, multiplicar ou sair do programa.
    //◦ Caso ele queira somar (+), deverá informar dois números e o computador informará o resultado da soma.
    //◦ Caso ele queira subtrair (-), deverá informar dois números e o computador informará o resultado da subtração.
    //◦ Caso ele queira dividir (/), deverá informar dois números e o computador informará o resultado da divisão.
    //◦ Caso ele queira multiplicar (*), deverá informar dois números e o computador informará o resultado da multiplicação.
    //◦ Se o usuário quiser sair do programa informará tal opção (S).
    //◦ Para qualquer outro caso o computador deverá informar (Opção inválida).

    setlocale(LC_ALL, "Portuguese");

     char opcao;
     float num1, num2, soma, subtracao, divisao, multiplicacao;

     cout <<"Escolha entre as opções a seguir: " << endl << endl;
     cout <<"Digite (+) para Somar!" << endl;
     cout <<"Digite (-) para Subtrair!" << endl;
     cout <<"Digite (/) para Dividir!" << endl;
     cout <<"Digite (*) para Multiplicar!" << endl;
     cout <<"Digite (S) para Sair do Programa!" << endl;

     cin >> opcao;
     opcao = toupper (opcao);

     switch (opcao){
        case '+':
          cout <<"Digite o primeiro número: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo número: "<< endl;
          cin >> num2;

          soma = num1+num2;
          cout <<"O resultado da Soma é "<< soma << endl;
        break;

      case '-':
          cout <<"Digite o primeiro número: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo número: "<< endl;
          cin >> num2;

          subtracao = num1-num2;
          cout <<"O resultado da Subtração é "<< subtracao << endl;
        break;

      case '/':
          cout <<"Digite o primeiro número: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo número: "<< endl;
          cin >> num2;

          divisao = num1/num2;
          cout <<"O resultado da Divisao é "<< divisao << endl;
        break;

    case '*':
          cout <<"Digite o primeiro número: "<< endl;
          cin >> num1;

          cout <<"Digite o segundo número: "<< endl;
          cin >> num2;

          multiplicacao = num1*num2;
          cout <<"O resultado da Multiplicação é "<< multiplicacao << endl;
        break;

    case 'S':
         cout <<"Você saiu do programa!!" << endl;
        break;

    default:
        cout <<"Opção Inválida!!!" << endl;
     }

    return 0;
}