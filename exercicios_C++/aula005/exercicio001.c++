#include <iostream>

using namespace std;
int main (){
    float elementoA[8], elementoB[8];
    float i;

    for (int i = 1; i < 9; i++)
    {
        cout << "informe o " << i << " valor do A:\n";
        cin >> elementoA[i];
        //cout << "informe o " << i << " valor do B:\n";
        elementoB[i] = elementoA[i] * 3;

        cout << "o resultado do B e:" << elementoB[i] << "\n";
        cout << "\n";

    }
    return 0;
}