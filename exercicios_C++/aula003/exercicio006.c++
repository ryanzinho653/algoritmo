#include <iostream>

using namespace std;
int main () {
    int num1, num2, valor, valor2;

    cout << "informe o valor para sofrer a fatoracao: \n";
    cin >> valor;
    valor2 = valor - 1;

    num1 = 0;
    num2 = 1;
    do
    {
        num1 = num1 + 1;
        num2 = num1 * num2;
        
    } while (num1 <= valor2);
    
    cout << "o resultado da fatoracao do numero " << valor2 << " e: " << num2;

    return 0;
}