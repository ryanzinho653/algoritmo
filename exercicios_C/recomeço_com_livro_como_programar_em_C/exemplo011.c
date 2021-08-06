/* Calculadora de limite de credito */
#include <stdio.h>

int main(void)
{
    int numCont;
    float saldoInici, totalEncar, totalCred, limiCred;

    printf("Informe o numero da conta(-1 para terminar):");
    scanf("%d", &numCont);
    
    if(numCont != -1)
    {
        printf("\nInforme o saldo inicial: ");
        scanf("%f", &saldoInici);
        printf("\nInforme o total de encargo: ");
        scanf("%f", &totalEncar);
        printf("\nInforme o total de credito: ");
        scanf("%f", &totalCred);
        printf("\nInforme o limite de credito: ");
        scanf("%f", &limiCred);
        printf("\nConta: %d", numCont);
        printf("\nLimite de credito: %.2f", limiCred);
        printf("\nSaldo: %.2f", saldoInici);
        
        if (saldoInici + totalEncar - totalCred > limiCred)
        {
            printf("\nLimite de credito ultrapassado");
        }
    }
    
    while (numCont != -1)
    {
        printf("\nInforme o numero da conta(-1 para terminar):");
        scanf("%d", &numCont);
        if(numCont != -1)
        {
            printf("\nInforme o saldo inicial: ");
            scanf("%f", &saldoInici);
            printf("\nInforme o total de encargo: ");
            scanf("%f", &totalEncar);
            printf("\nInforme o total de credito: ");
            scanf("%f", &totalCred);
            printf("\nInforme o limite de credito: ");
            scanf("%f", &limiCred);
            printf("\nConta: %d", numCont);
            printf("\nLimite de credito: %.2f", limiCred);
            printf("\nSaldo: %.2f\n", saldoInici);
        
            if (saldoInici + totalEncar - totalCred > limiCred)
            {
                printf("\nLimite de credito ultrapassado");
            }
        }    

        
    }
    
    return 0;
}