/* Calculadora de salario */
#include <stdio.h>

int main(void)
{
    int horasTrabalhadas;
    float salarioPorHora, salario;

    printf("Digite # de horas trabalhadas (-1 para terminar): ");
    scanf("%d", &horasTrabalhadas);
    if(horasTrabalhadas != -1)
    {
        printf("Digite o salario por hora do funcionario (R$00.00): ");
        scanf("%f", &salarioPorHora);

        salario = horasTrabalhadas * salarioPorHora;
        
        printf("Salario e de R$%.2f", salario);
    }

    while(horasTrabalhadas != -1)
    {
        printf("Digite # de horas trabalhadas (-1 para terminar): ");
        scanf("%d", &horasTrabalhadas);
        if(horasTrabalhadas != -1)
        {
            printf("Digite o salario por hora do funcionario (R$00.00): ");
            scanf("%f", &salarioPorHora);

            salario = horasTrabalhadas * salarioPorHora;

            printf("Salario e de R$%.2f", salario);
        }
    }
    return 0;
}