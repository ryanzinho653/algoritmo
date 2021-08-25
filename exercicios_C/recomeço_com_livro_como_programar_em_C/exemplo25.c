/* Media de uma sequencia de inteiros */
#include <stdio.h>

int main (void)
{
    int x = 0, y = 0, z = 0, w = 0, i = 1;

    printf("Informe o tamanho da sequencia de numeros: ");
    scanf("%d", &x);

    while (i <= x)
    {
        printf("\nInforme um numero inteiro: ");
        scanf("%d", &y);

        z = z + y;
        i++;
    }

    i = i - 1;
    w = z / i;
    
    printf("A media dos %d foi %d", i, w);
    return 0;
}