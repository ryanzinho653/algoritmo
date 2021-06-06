#include <iostream>

using namespace std;
int main ()
{
    int A[1], B[1], C[1];

    cout << "informe o valor do vetor A: ";
    cin >> A[0];

    cout << "\n" << "informe o valor do vetor B: ";
    cin >> B[0];

    C[0] = A[0] + B[0];

    cout << "\n" << "o resultado da soma entre os vetores A e B foi escrito no vetor C: " << C[0];   
    return 0;
}