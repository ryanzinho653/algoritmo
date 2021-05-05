#include <iostream>

using namespace std;

int main () {
    int fim, conte, calculo, comeco;
    comeco = 1;
    //fim = 0;
    //conte = 0;
    do
    {   
        //conte = conte + 1;
        //fim = fim + 1;
        //comeco = comeco + 1;
        fim = comeco + fim;
        cout << fim << " + " << comeco << " = " << calculo << ", ";

    } while (conte <= 99);

    return 0;
}