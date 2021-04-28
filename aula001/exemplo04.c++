#include <iostream>
#include <locale>

using namespace std;

int main () {
    setlocale(LC_ALL, "Portuguese");

    string nome;
    int cont;

    cout << "informe o nome: ";
    cin >> nome;
    
    // eu posso declarar a variavel cont no for for (int cont .....)
    
    //para escrever de forma resumida o cont = cont + 1 -> cont++
    
    //mais so pode ser usado para contadores de um valor, entao 1

    // para soma de mais de 2 usasse o cont += 2, 3, 4.....

    for (cont = 0; cont < 10; cont = cont +1){
        cout << "seu nome e: " << nome << "\n";
    }

    return 0;
}