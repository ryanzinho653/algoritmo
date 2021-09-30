/* bubble sort*/
#include <stdio.h>
#define SIZE 10
int main (void)
{
    int a[SIZE] = {2,6,4,8,10,12,89,68,45,17};
    int pass;
    int i,y = SIZE, troca = 0, nenhTroca = 0;
    int hold;

    printf("Itens de dados na ordem original\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    for(pass = 1; pass < SIZE; pass++)
    {
        y--;
        for(i = 0; i < y; i++)
        {
            printf("%d..\n", i);
            if(a[i] > a[i + 1])
            {
                hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
                troca++;
            }
            else
            {
                nenhTroca++;
            }
        }
    }

    printf("\nItens de dados em ordem crescente\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }

    printf("\n\nHouve %d trocas", troca);
    printf("\nNao houve %d trocas", nenhTroca);
    printf("\n");

    return 0;
}