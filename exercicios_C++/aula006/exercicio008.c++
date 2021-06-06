#include <iostream>

 

using namespace std;

 

int main(int argc, char** argv) {
    int y = 0;
    
    cout << "informe a quantidade de vetores que deseja colocar no vetor A";
    cin >> y;
    
    
    int vetA[y];
    int aux = 0, b = 0;

    for(int c = 0; c < y; c++)
    {
        cout << "informe o valor do vetor " << c;
        cin >> b;

        vetA[y] = b;
    }
    
    for(int i=0; i < 5; i++)
    {    
        for(int j=0; j < 4; j++)
        {
            if(vetA[j] > vetA[j+1]){
                aux = vetA[j+1];
                vetA[j+1] = vetA[j];
                vetA[j] = aux;
            }
        }
    }
    
    for(int i=0; i < 5; i++)
    {
        cout << vetA[i] << " | ";
    }    
    
    return 0;
}