#include <iostream>



using namespace std;

int main () {

    

    int fim, valor;



    fim = 0;

    do

    {   

        fim = fim + 1;

        valor = fim;

        if (valor % 4 == 0){



            cout << valor << "\n";

        }

        



    } while (fim <= 199);



    return 0;

}