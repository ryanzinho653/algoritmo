/*exercicio, consumo de gasolina*/
#include <stdio.h>

int main(void)
{
    float resp1, resp2, resp3, resp4;

    printf("Informe quantos litros abasteceu (-1 para terminar): ");
    scanf("%f", &resp1);
    if(resp1 != -1)
    {
        printf("\nInforme quantos Km dirigiu: ");
        scanf("%f", &resp2);
        resp3 = resp1 / resp2;
        printf("O consumo atual e de %f Km/l", resp3);
    }

    resp4 = 0;
    resp4 = resp4 + resp3;

    while (resp1 != -1)
    {
        printf("\nInforme quantos litros abasteceu (-1 para terminar): ");
        scanf("%f", &resp1);
        if(resp1 != -1)
        {
            printf("\nInforme quantos Km dirigiu: ");
            scanf("%f", &resp2);
            resp3 = resp1 / resp2;
            printf("O consumo atual e de %f Km/l", resp1/resp2);
        }

        resp4 = resp4 + resp3;
    }
    if (resp1 == -1)
    {
        printf("\nO consumo geral foi de %f Km/l", resp4);
    }
    
    return 0;
}