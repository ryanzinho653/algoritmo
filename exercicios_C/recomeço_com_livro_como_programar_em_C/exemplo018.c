/* Saida tabular*/
#include <stdio.h>

int main(void)
{
    int contador = 1, primeiro = 0, segundo = 0, terceiro = 0;

    printf("N     10*N       100*N      1000*N\n");
    while(contador <= 10)
    {
        primeiro = 10 * contador;
        segundo = 100 * contador;
        terceiro = 1000 * contador;
        if(contador <= 9)
        {
            printf("%d     %d         %d        %d\n", contador, primeiro, segundo, terceiro);
        }
        if(contador == 10)
        {
            printf("%d    %d        %d       %d\n", contador, primeiro, segundo, terceiro);
        }
        contador++;
    }
    return 0;
}