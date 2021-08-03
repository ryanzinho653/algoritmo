/* Analie de resultado de exames */
#include <stdio.h>

int main(void)
{
    int aprovado = 0;
    int reprovado = 0;
    int aluno = 1;
    int resultado;

    while(aluno <= 10)
    {
        printf("Forneca o resultado (1 = aprovado, 2 = reprovado):");
        scanf("%d", &resultado);

        if(resultado == 1)
        {
            aprovado = aprovado + 1;
        }
        else
        {
            reprovado = reprovado + 1;
        }
        aluno = aluno + 1;
    }

    printf("aprovados %d\n", aprovado);
    printf("reprovados %d\n", reprovado);

    if(aprovado > 8)
    {
        printf("Bonus ao instrutor!\n");
    }
    return 0;
}