#include <iostream>

using namespace std;
int main ()
{
    int x = 0, y = 0, z = 1, contagem = 0, sequencia = 0;

    cout << "escolha ate onde voce deseja que a sequencia de fibonacci va: ";
    cin >> sequencia;

    cout << "\n";
    cout << y;
    cout << "\n";
    cout << z;

    while(contagem <= sequencia)
    {
        contagem = contagem + 1;
        
        if(y <= 2)
        {
            y = y + z;
            cout << "\n";
            cout << y;
            if(y == 3)
            {
                z = 2;
                x = y + z;
                cout << "\n";
                cout << x;
            }
        }else if(x >= 5)
        {
            z = y;
            y = x;

            x = y + z;

            cout << "\n";
            cout << x;
        }
    }
    return 0;
}
