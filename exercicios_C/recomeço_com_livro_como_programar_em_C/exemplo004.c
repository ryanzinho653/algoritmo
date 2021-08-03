/* Programa de adicao */
#include <stdio.h>

int main(void)
{
    int inteiro1;
    int inteiro2;
    int soma;

    printf("Digite o primeiro inteiro \n");
    scanf("%d", &inteiro1);

    printf("Digite o segundo inteiro \n");
    scanf("%d", &inteiro2);

    soma = inteiro1 + inteiro2;

    printf("A soma e %d\n", soma);
    return 0;
}