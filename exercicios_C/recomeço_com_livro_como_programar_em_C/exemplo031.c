/* Calculando limites de credito*/
#include <stdio.h>

int main(void)
{
    float y = 0, z = 0, w = 0;
    int x;
    printf("Informe o numero da conta do cliente: ");
    scanf("%d", &x);

    printf("\nInforme o limite de credito do cliente antes da recessao: R$");
    scanf("%f", &y);

    printf("\nInforme o saldo atual do cliente: R$");
    scanf("%f", &z);

    w = y / 2;

    printf("\nO novo limite de credito estabelecido e de: R$%.2f", w);

    if(z > w)
    {
        printf("\nO cliente da conta %d tem o saldo atual superior a seus novos limites ", x);
    }

    return 0;
}