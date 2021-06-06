#include <iostream>

using namespace std;
int main ()
{
    int A[5], B[5],C[5], x = 0;

    cout << "informe o valor do 1 vetor A: ";
    cin >> A[0];
    cout << "\n" << "informe o valor do 2 vetor A: ";
    cin >> A[1];
    cout << "\n" << "informe o valor do 3 vetor A: ";
    cin >> A[2];
    cout << "\n" << "informe o valor do 4 vetor A: ";
    cin >> A[3];
    cout << "\n" << "informe o valor do 5 vetor A: ";
    cin >> A[4];

    cout << "\n" << "informe o valor do 1 vetor B: ";
    cin >> B[0];
    cout << "\n" << "informe o valor do 2 vetor B: ";
    cin >> B[1];
    cout << "\n" << "informe o valor do 3 vetor B: ";
    cin >> B[2];
    cout << "\n" << "informe o valor do 4 vetor B: ";
    cin >> B[3];
    cout << "\n" << "informe o valor do 5 vetor B: ";
    cin >> B[4];

    while(x <= 4)
    {
        C[x] = A[x] * B[x];

        cout << "\n" << C[x];
        x = x + 1;
    }
    while (x >= 0)
    {
        if(x >= 1)
        {
            cout << "\n" << C[x-1];
        }
        x = x - 1;
    }
    
    //return 0;
}