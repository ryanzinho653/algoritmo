/* Programa de juros compostos modificado*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    double valor;
    double principal = 1000.0;
    double taxa = 0.05;
    int ano;

    printf("%4s%21s\n", "Ano", "Valor na conta");

    for(ano = 1; ano <= 10; ano++)
    {
        if(ano > 1)
        {
            taxa = taxa + 0.01;
        }
        valor = principal * pow(1.0 + taxa, ano);

        printf("%4d%21.2f\n", ano, valor);
    }
    return 0;
}