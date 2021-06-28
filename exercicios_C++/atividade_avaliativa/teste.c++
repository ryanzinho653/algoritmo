#include <iostream>

using namespace std;
int main ()
{
    string resp, nomeConv, numCel, numTel, num, pratoConv, menssagem1, menssagem2;
    int resp2 = 0, cont = 0, resp3 = 0, resp4 = 0, resp5 = 0, resp6 = 0, resp7 = 0;
    do
    {
        cont = cont + 1;

        cout << "--------- FESTA JUNINA - ETEC 2021 ---------";
        cout << "\n";
        cout << "informe quantos convidados deseja convidar: ";
        cin >> resp3;

        string convidados[resp3], telefones[resp3], pratos[resp3];

        for (int i = 0; i < resp3; i++)
        {
            if(resp4 == 1)
                i = i - 1;
            else if(resp6 == 1)
                i = i - 1;
            else if(resp7 == 1)
                i = i - 1;
            cout << "\ninforme o nome do convidado " << resp3;
            cin >> nomeConv;

            convidados[i] = nomeConv;

            int lim_inf = 0, lim_sup = i, a;
            while (convidados[a] != nomeConv && lim_inf <= lim_sup)
            {
                a = (lim_inf+lim_sup)/2;

                if(convidados[a] == nomeConv)
                {
                    cout << "\nNome do convidado ja se apresenta na lista";
                    cout << "\nResponda novamente: ";
                    cout << "\n";
                    resp4 = 1;
                    break;
                }else if(convidados[a] != nomeConv)
                    lim_inf++;
                else
                    lim_sup--;
            }

            cout << "\n";
            cout << "\n";    
            cout << "\n==== numero para contato ===";
            cout << "\n   digite 1 para celular";
            cout << "\n   digite 2 para telefone";
            cout << "\n============================";
            cout << "\n";
            cin >> resp5;

            switch (resp5)
            {
                case 1:
                    cout << "\nparabens voce escolheu por celular";
                    cout << "\ninforme seu numero entao: ";
                    cin >> numCel;
                    menssagem1 = "celular: ";
                    break;
                case 2:
                    cout << "\nparabens voce escolheu por telefone";
                    cout << "\ninforme seu numero entao: ";
                    cin >> numTel;
                    menssagem2 = "telefone: ";
                    break;
                default:
                    break;
            }
            
            num = numCel + numTel;

            telefones[i] = num;
            int lim_inf2 = 0, lim_sup2 = i, b;
            while(telefones[b] != num && lim_inf2 <= lim_sup2)
            {
                b = (lim_inf2+lim_sup2)/2;

                if(telefones[b] == num)
                {
                    cout << "\no telefone/celular ja se encontram na lista";
                    cout << "\nrepita o processo todo novamente: ";
                    cout << "\n";
                    resp6 = 1;
                    break;
                }else if(telefones[b] != num)
                    lim_inf2++;
                else
                    lim_sup2--;
            }
            
            cout << "\n";
            cout << "\n";
            cout << "\nInforme o prato que deseja levar para a festa: ";
            cin >> pratoConv;

            pratos[i] = pratoConv;
            int lim_inf3 = 0, lim_sup3 = i, c;
            while (pratos[c] != pratoConv && lim_inf3 <= lim_sup3)
            {
                c = (lim_inf3+lim_sup3)/2;

                if(pratos[c] == pratoConv)
                {
                    cout << "\n";
                    cout << "\nO prato ja se encontra na lista";
                    cout << "\nrepita o processo todo novamente";
                    cout << "\n";
                    resp7 = 1;
                    break;
                }else if(pratos[c] != pratoConv)
                    lim_inf3++;
                else
                    lim_sup3--;
            }
        }
        
        cout << "deseja encerrar a lista de convidados (S/N) ";
        cin >> resp;

        if(resp == "S" || resp == "s")
            resp = "S";
        else if(resp == "N" || resp == "n")
            resp = "N";
        else if(resp != "S" || resp != "s" || resp != "N" || resp != "n")
        {
            do
            {
                if(resp != "S" || resp != "s" || resp != "N" || resp != "n")
                    cout << "resposta incorreta";
                cout << "deseja encerrar a lista de convidados (S/N)";
                cin >> resp;
                if(resp == "S" || resp == "s")
                    resp2 = 1;
                else if(resp == "N" || resp == "n")
                {
                    resp = "N";
                    break;
                }
            } while (resp2 != 1);
            
        }
        for (int d = 0; d < resp3; d++)
        {
            cout << "\nnome: " << d << " " << convidados[d] << " ";
            if(resp5 == 1)
            cout << menssagem1;
            else if(resp5 == 2)
            cout << menssagem2;
            cout << telefones[d] << " prato: " << pratos[d]; 
        }
    } while (resp != "N");
    
    return 0;
}