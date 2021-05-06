#include <iostream>

using namespace std;
int main () {
    
    cout << "informe tres valores, para que podemos determinar qual sera o maior entre eles \n";
    cout << "informe o primeiro valor: \n";
    cin >> num1;
    cout << "informe o segundo valor: \n";
    cin >> num2;
    cout << "informe o terceiro valor: \n";
    cin >> num3;
    cout << "\n";

    if (num1 > num2 && num1 > num3){
        resu1 = "MAIOR";
    }else if (num1 < num2 && num1 > num3){
        resu2 = "MEIO";
    }else if (num1 > num2 && num1 < num3){
        resu3 = "MEIO";
    }else if (num1 < num2 && num1 < num2){
        resu4 = "MENOR";
    }else if (num2 > num1 && num2 > num3){
        resu5 = "MAIOR";
    }
    return 0;
}