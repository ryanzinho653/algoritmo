#include <iostream>
#include <locale>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");

    int op, r, n1, n2;
    do{
        r = 0;
        n1 = 0; 
        n2 = 0;
        
        cout << "================ Menu ==============\n";
        cout << "1 - Soma \n";
        cout << "2 - Subtração\n";
        cout << "3 - multiplicação";
        cout << "====================================\n";
        cout << "Escolha uma opção: ";
        cin >> op;

        switch (op){
            case 1:
                cout << "Soma \n";
                cout << "Informe o primeiro numero\n ";
                cin >> n1;
                
                cout << "Informe o segundo numero";
                cin >> n2;

                r = n1 + n2;

            break;
        
            case 2:
                cout << "Soma \n";
                cout << "Informe o primeiro numero\n ";
                cin >> n1;

                cout << "Informe o segundo numero";
                cin >> n2;
                
                r = n1 - n2;

            break;

            case 3:
                    cout << "Soma \n";
                    cout << "Informe o primeiro numero\n ";
                    cin >> n1;

                    cout << "Informe o segundo numero";
                    cin >> n2;
                    
                    r = n1 * n2;

                break;
            }
    }
    while(op != 3);

    cout << "Resultado:"<< r;

    return 0;
}