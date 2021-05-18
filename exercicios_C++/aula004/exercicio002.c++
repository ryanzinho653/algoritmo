#include <iostream>

using namespace std;
int main () {
    float valor1, valor2, resu1, resu2;
    string resu;

    valor2 = 0;
    resu1 = 0;
    cout << "informe um valor: ";
    do
    {
        cin >> valor1;

        if (valor1 >= 1){
            resu = "POSITIVO";
        }
        if (valor1 <= -1){
            resu = "NEGATIVO";
        }
        
        if (valor1 > valor2){
            resu1 = valor1;
        }if (valor1 < valor2){
            resu2 = valor1;
        }
        valor2 = valor1;
        
    } while (resu == "POSITIVO");
    cout << resu1 << "\n";   
    cout << resu2;

    return 0;
}