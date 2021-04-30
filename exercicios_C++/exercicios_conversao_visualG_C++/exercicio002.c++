#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int num1, num2, resp, soma, subtra, mult;
    float div, resu;
    string resp2, resp3;

    do{
        num1 = 0;
        num2 = 0;
        resp = 0;
        soma, subtra, mult, div, resp = 0;
        resp2, resp3 = "a";

        cout << "=== Informe dois numeros inteiros: ===\n";
        cout << "Informe o primeiro valor:\n";
        cin >> num1;
        cout << "Informe o segundo valor:\n";
        cin >> num2;
        cout << "======================================\n";
        system("cls");

        do{
            cout << "====== Escolha ======\n";
            cout << " Soma = 1\n";
            cout << " Subtração =2\n";
            cout << " Multiplicação = 3\n";
            cout << " Divisão = 4\n";
            cout << "=====================\n";
            cin >> resp;
        } while (resp > 4 && resp < 0);

        
        cout;
        if (resp == 1){
        
            soma = num1+ num2;
            resu = soma;

            cout << "Voce escolheu a soma então: " << num1 << "+" << num2 << " sera: " << soma << "\n";
        
        }else if (resp == 2){
      
            subtra = num1 - num2;
            resu = subtra; 

            cout << "Voce escolheu a subtração então: " << num1 << "-" << num2 << " sera: " << subtra << "\n";
      
        }else if (resp == 3){
            
            mult = num1 * num2;
            resu = mult;

            cout << "Voce escolheu a multiplicação então: " << num1 << "*" << num2 << " sera: " << mult << "\n";
        
        }else
        {
            div = num1 / num2;
            resu = div;

            cout << "Voce escolheu a divisão entao: " << num1 << "/" << num2 << " sera: " << div << "\n";

        }
        cout;
        cout << "Deseja continuar S/N";
        cin >> resp2;
        
        if((resp2 == "s") && (resp2 == "S")){
            
            resp3 = "S";   

        }else if ((resp2 == "n") && (resp2 == "N")){
            
            resp3 = "N";
        
        }
    } while(resp3 == "S");
    
    return 0;
}