/* Ache o menor */
#include <stdio.h>

int main(void)
{
    int x = 0, i = 1, y = 0, z = 0, maior = 0;
    printf("Informe qual sera a sequencia de vezes: ");
    scanf("%d", &x);

    while(i <= x)
    {
        printf("\nInforme o %d valor: ", i);
        scanf("%d", &y);

        if(i == 1)
        {
            z = y;
        }
        if(i == 2)
        {
            if(z > y)
            {
                maior = z;
            }
            else
            {
                maior = y;
            }
        }
        if(i > 2)
        {
            if(maior > y)
            {
                maior = maior;
            }
            else
            {
                maior = y;
            }
        }
        i++;
    }

    printf("\nO maior numero da sequencia e: %d", maior);

    return 0;
}