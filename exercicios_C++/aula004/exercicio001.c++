#include <iostream>

using namespace std;
int main () {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9;
    
    num1 = 49;
    cout << "valores impares: ";
    do
    {
        num1 = num1 + 1;

        if (num1 % 2 == 0){
            num2 = num1;
            cout << num2 << " ";
            num6 = num6 + 1;
        }
        
        num4 = num2 + num4;

    } while (num1 <= 69);
    
    cout << "\n"; 
    cout <<"o resultado da soma dos valores pares foi: " << num4 << "\n";
    
    num8 = num4/num6;
 
    cout << "o resultado da media dos valores pares foi: " << num8;    


    return 0;
}