#include <iostream>

using namespace std;
int main ()
{
    int A[2], soma;

    cout << "informe o valor do 1 vetor A: ";
    cin >> A[0];

    cout << "\n" << "informe o valor do 2 vetor A: ";
    cin >> A[1];

    soma = A[0] + A[1];

    cout << "\n" << "o resultado da soma dos vetores A1 e A2 foi: " << soma;
    
    return 0;
}