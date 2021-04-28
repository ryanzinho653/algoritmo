#include <iostream>
#include <locale>

using namespace std;

int main () {
    
    setlocale(LC_ALL, "Portuguese");

    int num1, num2;
    string nome;

    cout << "Hello Word \n" <<"Seja bem vindo \n";
    cout << "Informe seu nome:\n";
    cin >> nome;
    cout << "Seja bem vindo " << nome << "!!!\n";
    cout << "Informe dois numeros:\n";
    cout << "informe o primeiro:\n";
    cin >> num1;
    cout << "informe o segundo:\n";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "numero 1 e maior";
    }else{
        cout << "numero 2 e maior ";
    }
    return 0;
}