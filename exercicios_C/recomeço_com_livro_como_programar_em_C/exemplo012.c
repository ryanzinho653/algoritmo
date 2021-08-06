/*calculadora de comisao de venda*/
#include <stdio.h>

int main(void)
{
    float valorVenda = 0, valorComi, resu1 = 0, resu2 = 0, resu3 = 0;
    printf("Informe a venda em reais (-1 para terminar): ");
    scanf("%f", &valorVenda);
    
    if(valorVenda != -1)
    {
        resu1 = (valorVenda * 9) / 100;
        resu2 = resu1 + 200;
        printf("O pagamento e de: %.2f", resu2);
    }

    while(valorVenda != -1)
    {
        printf("\nInforme a venda em reais (-1 para terminar): ");
        scanf("%f", &valorVenda);

        if(valorVenda != -1)
        {
            resu1 = (valorVenda * 9) / 100;
            resu2 = resu1 + 200;
            printf("O pagamento e de: %.2f\n", resu2);
        }
    }
    return 0;
}