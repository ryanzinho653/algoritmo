/* saida tabular*/
#include <stdio.h>

int main(void)
{
    int contador = 1, aux = 3, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0;
    
    printf("A     A+2     A+4    A+6\n");

    while (contador <= 5)
    {
        aux2 = aux * contador;
        if(contador == 1)
        {
            aux3 = aux + 2;
            aux4 = aux + 4;
            aux5 = aux + 6;
        }
        if(contador > 1)
        {
            aux3 = aux3 + aux;
            aux4 = aux4 + aux;
            aux5 = aux5 + aux;
        }
        if(contador == 1)
        {
            printf("%d     %d       %d      %d     \n", aux2, aux3, aux4, aux5);
        }
        if(contador == 2)
        {
            printf("%d     %d       %d     %d     \n", aux2, aux3, aux4, aux5);
        }
        if(contador == 3)
        {
            printf("%d     %d      %d     %d     \n", aux2, aux3, aux4, aux5);
        }
        if(contador > 3)
        {
            printf("%d    %d      %d     %d     \n", aux2, aux3, aux4, aux5);
        }
        contador++;
    }
    
    return 0;
}