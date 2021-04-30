#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

int main () {
   int num1, num2, num3, num4, num5;
    setlocale(LC_ALL, "portuguese");

    cout << "=== Informe dois numeros ===\n";
    cout << "informe o primeiro numero: \n";
    cin >> num1;
    cout << "Informe o segundo numero: \n";
    cin >> num2;
    cout << "==============================\n";
    system("cls");

    num3 = num1 * num1;
    num4 = num2 * num2 * num2;
    num5 = num4 + num3;

    cout << "O numero um de " << num1 << " se trasformara em " << num3 << " depois que foi elevado ao quadrado\n";
    cout << "O numero dois de " << num2 << " se transformara em " << num4 << " depois que foi elevado ao cubo\n";
    cout << "A soma dos dois valores equivale a: " << num5;

    return 0;
}