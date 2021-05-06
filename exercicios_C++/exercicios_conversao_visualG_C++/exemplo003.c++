#include <iostream>

using namespace std;

int main () {

    float valorVeic;
    int anoVeic, anoAtual, anoCar, depreciacao, valorDesv, valorFinal;
    string resp, resp2;

    do
    {
        cout << "informe o valor do seu veiculo:\n";
        cin >> valorVeic;
        cout << "informe o ano do veiculo:\n";
        cin >> anoVeic;
        cout << "informe o ano que estamos:\n";
        cin >> anoAtual;
        cout << "\n";

        anoCar = anoAtual - anoVeic;
        depreciacao = anoCar * 15;
        valorDesv = (valorVeic * depreciacao) / 100;
        valorFinal = valorVeic - valorDesv;

        cout << "sabendo que por ano o seu veiculo desvaloriza 15% ao ano:\n";
        cout << "o seu veiculo tem " << anoCar << " anos\n";
        cout << "porcentagem de desvaloricao: " << depreciacao << "%\n";
        cout << "com uma perca no valor do veiculo de R$" << valorDesv << "\n";
        cout << "valor final do veiculo R$" << valorFinal << "\n";
    do
    {
     
        cout << "deseja fazer mais contas (S/N)";
        cin >> resp;

    } while (resp != "S" && resp != "N" && resp != "s" && resp != "n");

    
    if (resp == "S" || resp == "s") {
        
        resp2 = "S";

    }else if (resp == "N" || resp == "n") {
        
        resp2 = "N";
    
    }
    
    }while(resp2 == "S");
    system ("cls");
    
    return 0;
}