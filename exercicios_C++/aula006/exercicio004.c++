#include <iostream>

using namespace std;
int main ()
{
    int B[2], soma;

    cout << "informe o valor do 1 vetor B: ";
    cin >> B[0];

    cout << "\n" << "informe o valor do 2 vetor B: ";
    cin >> B[1];

    soma = B[0] + B[1];

    cout << "\n" << "o resultado da soma dos vetores B1 e B2 foi: " << soma;
    
    return 0;
}