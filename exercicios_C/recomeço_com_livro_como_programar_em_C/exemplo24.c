/* Soma de uma sequencia de inteiros */
#include <stdio.h>

int main (void)
{
    int x = 0, y = 0, z = 0;

    printf("informe qual sera o tamanho de sua sequencia: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++)
   {
        printf("\nInforme o %d numero: ", i);
        scanf("%d", &y);

        z = z + y;
    }

    printf("a soma dos numeros inteiros foi: %d", z);
    return 0;
}