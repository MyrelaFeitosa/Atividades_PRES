#include <iostream>
#include <windows.h>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    SetConsoleCP (1252);
    SetConsoleOutputCP(1252);

    //Utilize o programa abaixo como exemplo e crie um programa “CHATO”.
    //Este programa deverá ter ao menos 8 perguntas e respostas.
    //Deverá ser utilizado na construção do programa ao menos os itens abaixo:
              //i.	cin ou getline;
              //ii.	cout;
              //iii.	if / else;
              //iv.	switch / case;
              //v.	Repetição.


    string nome, apelido, hobbie;
    int idade, opcaoCidade, opcaoAmizade;
    char resposta1, resposta2, resposta2a, resposta2b, resposta6, resposta6a, resposta7;

    resposta1 = toupper (resposta1);
    resposta2 = toupper (resposta2);
    resposta2a = toupper (resposta2a);
    resposta2b = toupper (resposta2b);
    resposta6 = toupper (resposta6);
    resposta6a = toupper (resposta6a);

    //Perginta 1:
    do{
       cout << "Olá!! Eu sou um programa de computador SUPER LEGAL! Vamos conversar? ( ^ v ^)" << endl;
       cout << "Responda com [S] Sim ou [N] Não: ";
       cin >> resposta1;
       cout << endl;

    }while( resposta1 != 's');

    //Pergunta 2:

    cout << "Que legal!! Você escolheu por vontade própria conversar comigo!!!" << endl << endl;
    cout << "Eu já me apresentei, mas ainda não conheço você. Qual o seu nome?" << endl;
    cin >> nome;
    cout << endl;

    cout << " ( ° 0 ° ) Uau " << nome <<" !! Com um nome desses tem certeza que seus pais gostam de você? " << endl;
    cout << "Responda com [S] Sim ou [N] Não: ";
    cin >> resposta2;
    cout << endl;

    if(resposta2 == 's'){
       cout << "Absoluta? (º - °) " << endl;
       cout << "Responda com [S] Sim ou [N] Não: ";
       cin >> resposta2a;
       cout << endl;

       if (resposta2a == 's'){
          cout << "De verdade mesmo? (º - °)" << endl;
          cout << "Responda com [S] Sim ou [N] Não: ";
          cin >> resposta2b;

          if (resposta2b == 's'){
            cout << endl;
            cout << "Eu acho que não! " << endl;
          }else{
            cout << endl;
            cout << "Eu também acho que não! " << endl;
          }

       }else{
           cout << endl;
           cout << "Eu também acho que não! " << endl;
       }

    }else{
       cout << "Que bom que você é uma pessoa consciente " << nome << "!! (@ ^ v ^ @)" << endl;
    }

   // Pergunta 3:
    cout << endl;
    cout << nome << " vamos falar de outra coisa, não quero te deixar Triste (@ ^ v ^ @)" << endl;
    cout << "Quantos anos você tem? " << endl;
    cin >> idade;
    cout << endl;

    if (idade >= 30){
        cout << "Nossa " << nome << " já encomendou sua bengala?" << endl;
        cout << "Já está em idade de pegar onibus 5 horas da manhâ e ir andar atoa no centro!!" << endl << endl;

    }else{
       cout << "Acho que sua bicicleta ainda tem rodinhas HAHAHAHA" << endl << endl;
    }

    //Pergunta 4:

    cout << "Agora que já somos muito amigos, por que não me diz um apelido para que eu possa te chamar?" << endl;
    cin >> apelido;
    cout << "   " << endl;

    //Pergunta 5:

    cout << apelido << ", me fale mais de você! Pratica algun hobbie?" << endl;

    cin.ignore(); // ignora o que esta dentro do parenteses
    getline (cin, hobbie);
    //cin >> hobbie;
    //fflush(stdin) -> limpat lixo de memoria

    cout << endl;
    cout << hobbie << " é coisa de gente desocupada " << apelido << "!!!" << endl;
    cout << "Vai lavar uma louça! ( ^ v ^) " << endl << endl;;

    //Pergunta 5:
    cout << apelido << ", de que cidade você é? " << endl << endl;
    cout << "Escolha pelo número:" << endl;
    cout << "1 - Votuporanga." << endl;
    cout << "2 - São José do Rio Preto." << endl;
    cout << "3 - Fernandópolis." << endl;
    cout << "4 - Tanabi." << endl;
    cout << "5 - Jales." << endl;

    cin >> opcaoCidade;

     switch (opcaoCidade){
        case 1:
          cout << endl;
          cout << "Já ouvi falar que o Shopping foi comprar cigarro! HAHAHAHAHA" << endl << endl;
          cout << "Muito bom essa né? " << endl; // Pergunta 6:
          cout << "Responda com [S] Sim ou [N] Não: ";
        break;

        case 2:
           cout << endl;
           cout << "O martelo veio de Rio Preto. O Machado, de Assis." << endl << endl;
           cout << "Piada boa né? Você gostou? ( - v - )" << endl; // Pergunta 6:
           cout << "Responda com [S] Sim ou [N] Não: ";
        break;

        case 3:
           cout << endl;
           cout << "Terminei com a Fernanda e fui pra longe. Agota to em Fernandópolis! " << endl << endl;
           cout << "Piada boa né? Você gostou? ( - v - )" << endl; // Pergunta 6:
           cout << "Responda com [S] Sim ou [N] Não: ";
        break;

        case 4:
            cout << endl;
            cout << "Tanabi, o nome que dá asas à imaginação!" << endl;
            cout << "Você sabia que Tanabi é o nome de uma Borboleta? HAHAHAHHA " << endl << endl;
            cout << "Gostou da piada? ( - v - )" << endl; // Pergunta 6:
            cout << "Responda com [S] Sim ou [N] Não: ";
        break;

        case 5:
            cout << endl;
            cout << "Jales, a cidade da jalera!" << endl << endl;
            cout << "Eu sou muito bom com trocadilhos né? ( - v - )" << endl; // Pergunta 6:
            cout << "Responda com [S] Sim ou [N] Não: ";
        break;

        default:
            cout << endl;
            cout << "Você não é de nenhuma dessas cidades? " << endl << endl;
            cout << "Não mora! Se esconde!" << endl;
            cout << "Piada boa né? Você gostou? ( - v - )" << endl; // Pergunta 6:
            cout << "Responda com [S] Sim ou [N] Não: ";

     }

        cin >> resposta6;

        if (resposta6 == 's'){
           cout << endl;
           cout << "Você é idiota? Não deveria está rindo dessa bosta! (=^ º 0 º ^=)" << endl;
        }else{
           cout << endl;
           cout << "Você desaprova meu senso de humor? (=^ º 0 º ^=)" << endl;
           cout << "Responda com [S] Sim ou [N] Não: ";
           cin >> resposta6a;

           if (resposta6a == 's'){
              cout << endl;
              cout << apelido << ", humor é igual cu, cada um tem o seu!" << endl << endl;
           }else{
              cout << "Sabia que você me entendia! (@ ^ v ^ @)" << endl << endl;
           }

        }


      // Pergunta 7:

      do {
      cout << endl;
      cout << apelido << ", nos damos tão bem! Eu gosto muito de você! Você também gosta de mim? " << endl;
      cout << "Responda com [S] Sim ou [N] Não: ";
      cin >> resposta7;

      }while (resposta7 != 's');


      // Pergunta 8:

      cout << endl;
      cout << "Nossa conversa foi INCRÍVEL " << apelido << ". O que acha de sermos melhores amigos para sempre? (º v º )" << endl;
      cout << "Escolha pelo número: " << endl;
      cout << "1 - SIM!" << endl;
      cout << "2 - CLARO QUE SIM!" << endl;
      cout << "3 - ÓBVIO QUE SIM!" << endl;
      cout << "4 - COMO EU PODERIA DIZER NÃO!" << endl;

      cin >> opcaoAmizade;

      switch (opcaoAmizade){
        case 1:
            cout << "Sabia que estamos destinados a estar juntos para sempre! " << endl;
            cout << "Somos almas gêmeas <3 " << endl;
            cout << "E almas gêmeas devem ficar juntas né? Te vejo em breve " << apelido << "!! ( @ v @ )" << endl;
        break;

        case 2:
            cout << "Sabia que estamos destinados a estar juntos para sempre! " << endl;
            cout << "Somos almas gêmeas <3 " << endl;
            cout << "E almas gêmeas devem ficar juntas né? Te vejo em breve " << apelido << "!! ( @ v @ )" << endl;
        break;

        case 3:
            cout << "Sabia que estamos destinados a estar juntos para sempre! " << endl;
            cout << "Somos almas gêmeas <3 " << endl;
            cout << "E almas gêmeas devem ficar juntas né? Te vejo em breve " << apelido << "!! ( @ v @ )" << endl;
        break;

        case 4:
            cout << "Sabia que estamos destinados a estar juntos para sempre! " << endl;
            cout << "Somos almas gêmeas <3 " << endl;
            cout << "E almas gêmeas devem ficar juntas né? Te vejo em breve " << apelido << "!! ( @ v @ )" << endl;
        break;

        default:
            cout << "Não existe outra opção! Seremos melhores amigos agora!" << endl;

      }

    return 0;
}
