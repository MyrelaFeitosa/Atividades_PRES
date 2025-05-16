#include <iostream>
#include <locale>

using namespace std;

int main()
{
     setlocale (LC_ALL, "Portuguese");
    //Escrever um programa que lê o número de identificação de um aluno (matrícula), 3 notas (0 até 10) obtidas nas atividades
    //da disciplina. Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2 * 2 + N3 *3)/6
    //O programa deve escrever o número do aluno (matrícula), suas notas, a média de aproveitamento e o conceito correspondente.
    // De acordo com o conceito exiba a mensagem: APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.

    int n1, n2, n3, identificacao;
    float mediaAproveitamento;
    char conceito;

    cout <<"Digite o número de identificação do aluno: " << endl;
    cin >> identificacao;

    cout << "Digite a primeira nota (0 a 10): " << endl;
    cin >> n1;
    cout << "Digite a segunda nota(0 a 10) : " << endl;
    cin >> n2;
    cout << "Digite a terceira nota (0 a 10): " << endl;
    cin >> n3;
    cout << endl;

    mediaAproveitamento = (n1 + n2 * 2 + n3 *3)/6;

    if (mediaAproveitamento <= 10){

        if(mediaAproveitamento >= 9){
            conceito = 'A';

        } if (mediaAproveitamento < 9 && mediaAproveitamento >= 7.5 ){
            conceito = 'B';

        }if (mediaAproveitamento < 7.5 && mediaAproveitamento >= 6 ){
            conceito = 'C';

        }if (mediaAproveitamento < 6 && mediaAproveitamento >= 4 ){
            conceito = 'D';

        }if (mediaAproveitamento < 4 ){
            conceito = 'E';
        }


              if (conceito == 'A' || conceito == 'B' || conceito == 'C'){

        cout << "Número de matrícula do aluno: " << identificacao << endl << endl;
        cout << "Notas do aluno: " << endl;
        cout << "Nota 1:" << n1 << endl;
        cout << "Nota 2:" << n2 << endl;
        cout << "Nota 3:" << n3 << endl << endl;
        cout << "Média de Aproveitamento: " << mediaAproveitamento << endl << endl;
        cout << "Conceito: " << conceito << endl << endl;;
        cout << "Situação Final: APROVADO!!" << endl;

      }else{
        cout << "Número de matrícula do aluno: " << identificacao << endl << endl;
        cout << "Notas do aluno: " << endl;
        cout << "Nota 1: " << n1 << endl;
        cout << "Nota 2: " << n2 << endl;
        cout << "Nota 3: " << n3 << endl << endl;
        cout << "Média de Aproveitamento: " << mediaAproveitamento << endl << endl;
        cout << "Conceito: " << conceito << endl << endl;;
        cout << "Situação Final: REPROVADO!!" << endl;

      }

    }else{
        cout << "Você digitou uma nota errada. Tente novamente!" << endl;
    }

    return 0;
}