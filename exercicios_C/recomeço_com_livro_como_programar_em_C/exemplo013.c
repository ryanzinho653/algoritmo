/* Calculadora de juros*/
#include <stdio.h>

int main(void)
{
    float teste = 0, principal = 0, taxa = 0, juros = 0;
    int dias = 0;

    printf("Informe o valor principal do emprestimo(-1 para terminar): ");
    scanf("%f", &principal);
    
    if(principal != -1)
    {
        printf("Informe a taxa de juros: ");
        scanf("%f", &taxa);
        printf("Informe o prazo do emprestimo em dias: ");
        scanf("%d", &dias);
        
        teste = (float) dias;
        juros = principal * taxa * teste / 365;

        printf("O valor dos juros e de %.2f", juros);
    }
    while(principal != -1)
    {
        printf("\nInforme o valor principal do emprestimo(-1 para terminar): ");
        scanf("%f", &principal);

        if(principal != -1)
        {
            printf("Informe a taxa de juros: ");
            scanf("%f", &taxa);
            printf("Informe o prazo do emprestimo em dias: ");
            scanf("%d", &dias);

            teste = (float) dias;
            juros = principal * taxa * teste / 365;

            printf("O valor dos juros e de %.2f", juros);
        }
    }
    return 0;
}