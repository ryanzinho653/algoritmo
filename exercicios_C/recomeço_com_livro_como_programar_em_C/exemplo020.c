/* Ache os dois maiores numeros*/
#include <stdio.h>

int main(void)
{
    int contador = 1;
    float numero = 0, maior = 0, menor = 0;

    while(contador <= 5)
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
                menor = numero;
                maior = maior;
                
            }
            if(maior <= numero)
            {
                menor = maior;
                maior = numero;
                
            }

        ++contador;
        }

        printf("%.2f\n", maior);
        printf("%.2f\n", menor);
    }
    printf("%.2f\n", maior);
    printf("%.2f\n", menor);

    return 0;
}