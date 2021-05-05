#include <iostream>
//#include <locale>

using namespace std;

int main () {

    string nome;
    int anoAtual, anoNasci, idade, parcela;
    float valorCompra, resu;

    cout << "informe o nome:\n";
    
    cin >> nome;
    
    cout << "informe o ano atual:\n";
    
    cin >> anoAtual;
    
    cout << "informe seu ano de nascimento:\n";
    cin >> anoNasci;
    cout << "informe o valor da compra:\n";
    cin >> valorCompra;

    idade = anoAtual - anoNasci;

        
    if (valorCompra >= 1000 && idade < 70)
    {
        resu = valorCompra / 12;
        parcela =12;

    }else if (valorCompra < 1000 || valorCompra == 500 && idade < 70) 
    {
        resu = valorCompra / 9;
        parcela = 9;

    }else if (valorCompra < 500 || valorCompra == 200 && idade < 70)
    {
        resu = valorCompra / 6;
        parcela = 6;

    }else if (valorCompra < 200 || valorCompra == 50)
    {
        resu = valorCompra / 3;
        parcela = 3;

    }else if (valorCompra < 50)
    { 
        
        cout << "voce nao pode fazer nenhuma prestacao, o valor final da sua compra e de R$" << valorCompra;
    }
    cout << "obrigado pela compra " << nome << ", o valor da sua compra foi de R$" << valorCompra << ", consegumos fazer em " << parcela << " parcelas de R$" << resu;
    return 0;
}