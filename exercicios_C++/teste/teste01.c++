#include <iostream>

using namespace std;
int main()
{
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, j = 0, k = 0, l = 0, n = 0, aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0, aux7 = 0, resp2 = 0;
    string resp, resp1;
    do
    {
//        if(resp != "S")
//        {
            int teste1[a];
            cout << "informe um valor: \n";
            cin >> aux1;
            teste1[a] = aux1;
            cout << teste1[a] << "\n";

            b = a + 1;
            int teste2[b];
            teste2[a] = teste1[a];
            cout << teste2[a] << "\n";
            cout << "informe um valor: \n";
            cin >> aux2;
            teste2[b] = aux2;
            cout << teste2[b] << "\n";

            c = b + 1;
            int teste3[c];
            int i = 0;
            do
            {
                cout << i << "\n";
                cout << teste2[i] << "\n";
                teste3[i] = teste2[i];
                cout << teste3[i] << "e" << teste2[i] << "\n";
                i++;
            } while (i != b + 1);
            cout << "informe um valor: \n";
            cin >> aux3;
            teste3[c] = aux3;
            cout << teste3[c] << "\n";
            
            int y = 0;
            do
            {
                cout << teste3[y] << "\n";
                y++;
            }while(y != c+1);
            
            cout << "deseja continuar (S/N) ";
            cin >> resp;
            cout << "\n";
    //}    

            while (resp != "N")
            {
                cout << "jdbwjbjwebvjwebv" << "\n";

                if(resp2 != 1)
                {
                    d = c + 1;
                    h = d;
                    int teste1[h];
                    int x = 0;
                    do
                    {
                        cout << x << "\n";
                        cout << teste3[x] << "\n";
                        teste1[x] = teste3[x];
                        cout << teste1[x] << "e" << teste3[x] << "\n";
                        x++;
                    } while (x != h);

                    cout << "informe um valor: \n";
                    cin >> aux4;
                    teste1[h] = aux4;
                    cout << teste1[h] << "\n";
                }
                if(resp2 == 1)
                {
                    j = g + 1;
                    h = j;
                }

                int teste5[h];
                
                if(resp2 == 1)
                {
                    do
                    {
                        cout << n << "\n";
                        cout << teste5[n] << "\n";
                        teste5[n] = teste3[n];
                        cout << teste5[n] << " e " << teste3[n] << "\n";
                        n++;
                    } while(n != h);

                    cout << "informe um valor: \n";
                    cin >> aux7;
                    teste5[h] = aux7;
                    cout << teste5[h] << "\n";
                }
               

                e = h + 1;
                int teste2[e];
                int w = 0;
                do
                {
                    cout << w << "\n";
                    cout << teste1[w] << "\n";
                    if(resp2 != 1)
                    {
                        teste2[w] = teste1[w];
                    }else if(resp2 == 1)
                    {
                        teste2[w] = teste5[w];
                    }
                    cout << teste2[w] << "e" << teste1[w] << "\n";
                    w++;
                }while(w != d + 1);
                
                cout << "informe um valor: \n";
                cin >> aux5;
                teste2[e] = aux5;
                cout << teste2[e] << "\n";

                f = e + 1;
                int teste3[f];
                int o = 0;
                do
                {
                    cout << o << "\n";
                    cout << teste2[o] << "\n";
                    teste3[o] = teste2[o];
                    cout << teste3[o] << " e " << teste2[o] << "\n";
                    o++;
                } while (o != e + 1);
                cout << "informe um valor: \n";
                cin >> aux6;
                teste3[f] = aux6;
                cout << teste3[f] << "\n";
                
                int y = 0;
                do
                {
                    cout << teste3[y] << "\n";
                    y++;
                }while(y != e + 2);

                k = f;
                int teste4[k];
                do
                {
                    cout << l << "\n";
                    cout << teste3[l] << "\n";
                    teste4[l] = teste3[l];
                    cout << teste4[l] << " e " << teste3[l] << "\n";
                    l++;
                }while(l != f + 1);

                cout << "deseja continuar (S/N) ";
                cin >> resp;
                cout << "\n";

                if(resp == "S")
                {
                    g = f;
                    resp2 = 1;
                }
                if(resp == "N")
                    resp1 = resp;
            }
        
    } while(resp1 != "N");
    return 0;
}