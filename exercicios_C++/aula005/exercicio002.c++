#include <iostream>

using namespace std;
int main (){
    float elementoA[20], elementoB[20];
    int i, e, w;
    
    for (i = 0; i < 20; i++)
    {
        cout << "informe o " << i << " valor do A:\n";
        cin >> elementoA[i];
    }
    e = 20;
    do
    {
        e = e - 1;
        elementoB[e] = elementoA[i];

    } while (e >= 0);
    
    
    do
    {
        w = w + 1;

        cout << "o resultado do B e: " << elementoB[w] << "\n";
        cout << "\n";

    } while (w <= 20);
    return 0;
}