#include <iostream>

using namespace std;
int main () {
    string comodo, resp;
    float area, comprimento, largura;

    area = 0;
    do
    {   
        cout << "informe qual e o comodo:\n ";
        cin >> comodo;
        cout << "informe a comprimento do comodo " << comodo << "\n";
        cin >> comprimento;
        cout << "informe a largura do comodo " << comodo << "\n";
        cin >> largura;
        
        area = comprimento * largura;
        
        cout << "a area do comodo " << comodo << " e:" << area << "\n";
        
        area = area + area;
        
        do{
            cout << "deseja continuar (S/N)";
            cin >> resp;
        }while (resp == "s" && resp == "S" && resp == "n" && resp == "N");
        
        if (resp == "s" || resp == "S"){
            resp = "S";
        }else if (resp == "n" || resp == "N"){
            resp = "N";
        }
    } while (resp == "S");

    return 0;
}