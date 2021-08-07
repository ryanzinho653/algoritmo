/* Ache o numero maior*/
#include <stdio.h>

int main(void)
{
    int contador = 1;
    float numero = 0, maior = 0;

    while(contador <= 10)
    {
        printf("\nInforme um numero: ");
        scanf("%f", &numero);

        if(contador == 1)
        {
            maior = numero;
            ++contador;
        }
        if(contador > 1)
        {
            if(maior >= numero)
            {
                maior = maior;
            }
            if(maior <= numero)
            {
                maior = numero;
            }

        ++contador;
        }

        printf("%f\n", maior);
    }
    printf("%f\n", maior);
    
    return 0;
}