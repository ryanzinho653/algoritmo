#include <iostream>
#include <locale>

using namespace std;
int main () {
    setlocale(LC_ALL, "portuguese");
    string resp1, resp2, resp3, resp4, resu1, resu2, resu3, resu4, resu5, resu6, resu7, resu8;

    do{
        cout << "Questão 1 - Qual das cinco representa a melhor comparação? \n";
        cout << "\"Água está para o gelo assim como leite está para...\"\n";
        cout << "Qual das cinco representa a melhor comparação?\n";
        cout << "\"Água está para o gelo assim como leite está para...\"\n";
        cout << "a) Mel\n";
        cout << "b) Mingau\n";
        cout << "c) café\n";
        cout << "d) Queijo\n";
        cout << "e) Biscoito\n";
        cin >> resp1;
        
        if (resp1 == "a" || resp1 == "A"){
            resp1 = "A";
        }else if (resp1 == "b" || resp1 == "B"){
            resp1 = "B";
        }else if (resp1 == "c" || resp1 == "C"){
            resp1 = "C";
        }else if (resp1 == "d" || resp1 == "D"){
            resp1 = "D";
        }else if (resp1 == "e" || resp1 == "E"){
            resp1 = "E";
        }

    }while (resp1 != "A" && resp1 != "B" && resp1 != "C" && resp1 != "D" && resp1 != "E");
    
    if (resp1 == "D"){
        cout << "CERTO";
    }else {
        resu2 = "ERRADO";
    }

    cout << "\n";
    do{
        cout << "Questão 2 – As letras \"ECHOOL\" depois de colocadas em ordem, será o nome de...\n";
        cout << "a) Um oceano\n";
        cout << "b) Um país\n";
        cout << "c) Uma cidade\n";
        cout << "d) Um animal\n";
        cout << "e) Um estado\n";
        cin >> resp2;

        if (resp2 == "a" || resp2 == "A"){
            resp2 = "A";
        }else if (resp2 == "b" || resp2 == "B"){
            resp2 = "B";
        }else if (resp2 == "c" || resp2 == "C"){
            resp2 = "C";
        }else if (resp2 == "d" || resp2 == "D"){
            resp2 = "D";
        }else if (resp2 == "e" || resp2 == "E"){
            resp2 = "E";
        }

    }while (resp2 != "A" && resp2 != "B" && resp2 != "C" && resp2 != "D" && resp2 != "E");
    
    if (resp2 == "D"){
        cout << "CERTO";
    }else {
        resu4 = "ERRADO";
    }


    cout << "\n";
    do{
        cout << "Questão 3 – Para que a frase abaixo, depois de arrumada, faça sentido, que palavra deve ser retirada?\n";
        cout << "\"A roupa tempestade roeu o rato\"\n";
        cout << "a) Tempestade.\n";
        cout << "b) Rato\n";
        cout << "c) Roeu\n";
        cout << "d) Roupa\n";
        cout << "e) Os artigos\n";
        cin >> resp3;

        if (resp3 == "a" || resp3 == "A"){
            resp3 = "A";
        }else if (resp3 == "b" || resp3 == "B"){
            resp3 = "B";
        }else if (resp3 == "c" || resp3 == "C"){
            resp3 = "C";
        }else if (resp3 == "d" || resp3 == "D"){
            resp3 = "D";
        }else if (resp3 == "e" || resp3 == "E"){
            resp3 = "E";
        }

    }while (resp3 != "A" && resp3 != "B" && resp3 != "C" && resp3 != "D" && resp3 != "E");
    
    if (resp3 == "D"){
        resu5 = "CERTO";
    }else {
        cout << "ERRADO";
    }


    cout << "\n";
    do{
        cout << "Questão 4 – Depois de doar um quarto de sua mesada ao irmão, e ganhar mais cinco reais, ele ficou com 20 reais. Qual era o valor de sua mesada?\n";
        cout << "a) 10 reais\n";
        cout << "b) 30 reais\n";
        cout << "c) 20 reais\n";
        cout << "d) 35 reais\n";
        cout << "e) 25 reais\n";
        cin >> resp4;

        if (resp4 == "a" || resp4 == "A"){
            resp4 = "A";
        }else if (resp4 == "b" || resp4 == "B"){
            resp4 = "B";
        }else if (resp4 == "c" || resp4 == "C"){
            resp4 = "C";
        }else if (resp4 == "d" || resp4 == "D"){
            resp4 = "D";
        }else if (resp4 == "e" || resp4 == "E"){
            resp4 = "E";
        }

    }while (resp4 != "A" && resp4 != "B" && resp4 != "C" && resp4 != "D" && resp4 != "E");
    
    if (resp4 == "D"){
        resu7 = "CERTO";
    }else {
        cout << "ERRADO";
    }


    return 0;

}