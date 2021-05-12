#include <iostream>

using namespace std;
int main () {
    int fim, valor;

    fim = 0;
    do
    {   
        fim = fim + 1;
        
        cout << "==== calculo de area total da sua casa ====/n";
        cout << "\n";
        cout << "informe o comprimento de sua sala:\n";
        cin >> compriSala;
        cout << "informe a largura de sua sala:\n";
        cin >> largSala;
        cout << "\n";
        cout << "informe o comprimento de sua cozinha:\n";
        cin >> compriCoz;
        cout << "informe a largura de sua cozinha:\n";
        cin >> largCoz;
        cout << "\n";
        cout << "informe o comprimento do seu banheiro:\n";
        cin >> compriBanh;
        cout << "informe a largura do seu banheiro\n";
        cin >> largBanh;
        cout << "\n";
        cout << "na sua casa tem quantos quartos?\n";
        cin >> resp;
        cont = 0;
        do
        {
            cont = cont + 1;
            cout << "informe o comprimento do quanto" << resp << ":\n";
            cin >> compriQuart;
            cout << "informe a largura do quarto" << resp << ":\n";
            cin >> largQuart;
            cout << "\n";
        } while (cont <= resp);
        cout << "informe o comprimento da area de servico:\n";
        cin >> compriAreaServ;
        cout << "informe a largura da area de servico:\n";
        cin >> largAreaServ;
        cout << "\n";
        cout << "informe a "

    } while (fim <= 1);

    return 0;
}