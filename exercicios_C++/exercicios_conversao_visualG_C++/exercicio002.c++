#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main (){
    setlocale(LC_ALL, "portuguese");

    int num1, num2, resp, soma, subtra, mult;
    float div;

    //do{
        num1 = 0;
        num2 = 0;

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
        } while ((resp > 4) && (resp < 0));

        if (resp == 1){
        
            soma = num1+ num2;
        
            cout << "Voce escolheu a soma então: " << num1 << "+" << num2 << " sera: " << soma;
        
        }else if (resp == 2){
      
            subtra = num1 - num2;
      
            cout << "Voce escolheu a subtração então: " << num1 << "-" << num2 << " sera: " << subtra;
      
        }else if (resp == 3){
            
            mult = num1 * num2;
            
            cout << "Voce escolheu a multiplicação então: " << num1 << "*" << num2 << "sera: " << mult;
        
        }
        
        

    //} while();
    
    return 0;
}