#include <iostream>


using namespace std;
int main () {
    int resp;
    float num1, num2, num3, num4, num5, num6, num7, num8, resu1, resu2, resu3, resu4;
    string resp2, resp3, resp4;

    resp3 = "N";

    do
    {
        do
        {
            cout << "informe qual das opcoes da calculadora deseja utilizar:\n";
            cout << "\n";
            cout << "====== Calculadora ====== \n";
            cout << " + soma = 1\n";
            cout << " - subtracao = 2\n";
            cout << " * multiplicacao = 3\n";
            cout << " / divisao = 4\n";
            cout << "=========================\n";
            cin >> resp;
            cout << "\n";
        } while (resp >= 5 || resp <= -1);

        if (resp == 1) {
            cout << "parabens voce escolheu a soma\n";
            cout << "por favor informe o primeiro valor\n";
            cin >> num1;
            cout << "por favor informe o segundo valor\n";
            cin >> num2;

            resu1 = num1 + num2;

            cout << num1 << " + " << num2 << " = " << resu1 << "\n";
        }else if (resp == 2) {
            cout << "parabens voce escolheu a subtracao\n";
            cout << "por favor informe o primeiro valor\n";
            cin >> num3;
            cout << "por favor informe o segundo valor\n";
            cin >> num4;

            resu2 = num3 - num4;

            cout << num3 << " - " << num4 << " = " << resu2 << "\n";
        }else if (resp == 3) {
            cout << "parabens voce escolheu a multiplicacao\n";
            cout << "por favor informe o primeiro valor\n";
            cin >> num5;
            cout << "por favor informe o segundo valor\n";
            cin >> num6;

            resu3 = num5 * num6;

            cout << num5 << " * " << num6 << " = " << resu3 << "\n";
        }else {
            cout << "parabens voce escolheu a soma\n";
            cout << "por favor informe o primeiro valor\n";
            cin >> num7;
            cout << "por favor informe o segundo valor\n";
            cin >> num8;

            resu4 = num7 / num8;

            cout << num7 << " / " << num8 << " = " << resu4 << "\n";
        }

        do
        {
        
            cout << "deseja fazer mais contas (S/N)";
            cin >> resp2;

        } while (resp2 != "S" && resp2 != "N" && resp2 != "s" && resp2 != "n");

        
        if (resp2 == "S" || resp2 == "s") {
            
            resp3 = "S";

        }else if (resp2 == "N" || resp2 == "n") {
            
            resp3 = "N";
        
        }

    } while (resp3 == "S");
    system ("cls");

    return 0;

}