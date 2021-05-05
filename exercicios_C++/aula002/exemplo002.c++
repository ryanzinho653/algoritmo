#include <iostream>

using namespace std;

int main () {
    int fim, calculo;

    fim = 14;
    do
    {   
        fim = fim + 1;
        calculo = fim * fim;
        cout << fim << " ^ 2=" << calculo << ", ";

    } while (fim <= 199);
    
    return 0;
}