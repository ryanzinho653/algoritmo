#include <iostream>

using namespace std;
int main () {
    int num1, num2, num3;
    string resu1, resu2, resu3, resu4, resu5, resu6, resu7, resu8, resu9, resu10, resu11, resu12, resu13, resu14, resu15, resp, resp2;


    do
    {
        cout << "informe tres valores, para que podemos determinar qual sera o maior entre eles \n";
        cout << "informe o primeiro valor: \n";
        cin >> num1;
        cout << "informe o segundo valor: \n";
        cin >> num2;
        cout << "informe o terceiro valor: \n";
        cin >> num3;
        cout << "\n";

        if (num1 > num2 && num1 > num3){
            resu1 = "numero 1 maior \n";
        }else if (num2 > num1 && num2 > num3){
            resu5 = "numero 2 maior \n";
        }else if (num3 > num1 && num3 > num2){
            resu9 = "numero 3 maior \n";
        }
        if (num1 < num2 && num1 > num3){
            resu2 = "numero 1 esta no meio \n";
        }else if (num1 > num2 && num1 < num3){
            resu3 = "numero 1 esta no meio \n";
        }else if (num2 > num1 && num2 < num3){
            resu6 = "numero 2 esta no meio \n";
        }else if (num2 < num1 && num2 > num3){
            resu7 = "numero 2 esta no meio \n";
        }else if (num3 > num1 && num3 < num2){
            resu10 = "numero 3 esta no meio \n";
        }else if (num3 < num1 && num3 > num2){
            resu11 = "numero 3 esta no meio \n";
        }
        if (num1 < num2 && num1 < num2){
            resu4 = "numero 1 menor \n";
        }else if (num2 < num1 && num2 < num3){
            resu8 = "numero 2 menor \n";
        }else if (num3 < num1 && num3 < num2){
            resu12 = "numero 3 menor \n";
        }

        resu13 = resu1 + resu5 + resu9;
        resu14 = resu2 + resu3 + resu6 + resu7 + resu10 + resu11;
        resu15 = resu4 + resu8 + resu12;

        cout << "Resultado final\n";
        cout << resu15;
        cout << resu14;
        cout << resu13;

        do
        {
        
            cout << "deseja refazer o teste (S/N)";
            cin >> resp;

        } while (resp != "S" && resp != "N" && resp != "s" && resp != "n");

        
        if (resp == "S" || resp == "s") {
            
            resp2 = "S";

        }else if (resp == "N" || resp == "n") {
            
            resp2 = "N";
        
        }
        
    }while(resp2 == "S");

    return 0;
}