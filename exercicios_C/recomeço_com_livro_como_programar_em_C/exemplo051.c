/* Comisao de vendas */
#include <stdio.h>

void comisao(float x[], int y);

int main(void)
{
    int quantPes;
    int x;
    float y;

    printf("Informe quantos funcionarios residem na sua empresa: ");
    scanf("%d", &quantPes);

    float totalVendas[quantPes];

    for(x = 0; x < quantPes; x++)
    {
        printf("\nInforme o total vendido em uma semana pelo vendedor %d: R$", x+1);
        scanf("%f", &y);
        totalVendas[x] = y;
    }

    comisao(totalVendas, quantPes);

    for(x = 0; x < quantPes; x++)
    {
        printf("%.2f\n", totalVendas[x]);
    }

    return 0;
}

void comisao(float x[], int y)
{
    int i;

    for(i = 0; i < y; i++)
    {
        printf("%d", i);
        printf("O total recebido foi: R$%.2f\n", x[i]);
    }
    
    for(i = 0; i < y; i++)
    {
        x[i] = (x[i] * 0.09 ) + 200;
    }
}