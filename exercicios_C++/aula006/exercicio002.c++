#include <iostream>

using namespace std;
int main ()
{
    int A[2], B[2];

    cout << "informe o 1 valor do vetor A: ";
    cin >> A[0];

    cout << "\n" << "informe o 2 valor do vetor A: ";
    cin >> A[1];

    cout << "\n" << "informe o 1 valor do vetor B: ";
    cin >> B[0];

    cout << "\n" << "informe o 2 valor do vetor B: ";
    cin >> B[1];

    cout << "\n" << "valor do 1 vetor A: " << A[0];
    cout << "\n" << "valor do 2 vetor A: " << A[1];
    
    cout << "\n" << "valor do 1 vetor B: " << B[0];
    cout << "\n" << "valor do 2 vetor B: " << B[1];

    return  0;
}