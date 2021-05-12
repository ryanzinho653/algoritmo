#include <iostream>

using namespace std;
int main () {
    
    int fim, valor, calculo;
    float media;
    
    fim = 0;
    valor = 0;
    do
    {   
        fim = fim + 1;
        cout << "informe um valor para a soma: \n";
        cin >> calculo;
        valor = valor + calculo;
    } while (fim <= 9);
    
    cout << valor << "\n";
    media = valor / fim;
    cout << "a media sera: " << valor << " / " << fim << " = " << media;

    return 0;
}