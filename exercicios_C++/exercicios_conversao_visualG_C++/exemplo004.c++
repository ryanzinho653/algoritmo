#include <iostream>

using namespace std;
int main () {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
    string resp, resp2;

    cout << "informe 3 numeros:\n";
    cout << "informe o primeiro numero:\n";
    cin >> num1;
    cout << "informe o segundo numero:\n";
    cin >> num2;
    cout << "informe o terceiro numero:\n";
    cin >> num3;
    cout << "\n";

    do 
    {
        if (num1 % 2 == 0){
            cout << "numero " << num1 << " e um numero PAR";
            num4 = 1;
        }else if (num1 % 2 == 1) {
            cout << "numero " << num1 << "e um numero IMPAR";
            num5 = 1;
        }

        
        if (num2 % 2 == 0){
            cout << "numero " << num2 << " e um numero PAR";
            num6 = 1;    
        }else if (num2 % 2 == 1) {
            cout << "numero " << num2 << "e um numero IMPAR";
            num7 = 1;
        }

        
        if (num3 % 2 == 0){
            cout << "numero " << num3 << " e um numero PAR";
            num8 = 1;
        }else if (num3 % 2 == 1) {
            cout << "numero " << num3 << "e um numero IMPAR";
            num9 = 1;
        }

        num10 = num4 + num6 + num8;
        num11 = num5 + num7 + num9;

        cout << "quantidade final de numero pares e impares:";
        cout << "tem " << num10 << " numeros par/es";
        cout << "tem " << num11 << " numero impar/es";

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

}