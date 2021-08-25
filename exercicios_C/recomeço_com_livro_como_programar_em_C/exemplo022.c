/* Calculo de frequencia cardiaca*/
#include <stdio.h>

int main(void)
{
    int diaNasc = 0, mesNasc = 0, anoNasc = 0, diaAtual = 0, mesAtual = 0, anoAtual = 0, idade = 0, frequencia = 0;
    float aux1 = 0, aux2 = 0;

    printf("Informe o dia de seu nascimento: ");
    scanf("%d", &diaNasc);
    printf("Informe o mes de seu nascimento: ");
    scanf("%d", &mesNasc);
    printf("Informe o ano de seu nascimento: ");
    scanf("%d", &anoNasc);

    printf("\nVoce nasceu %d/%d/%d", diaNasc, mesNasc, anoNasc);

    printf("\nInforme o dia atual: ");
    scanf("%d", &diaAtual);
    printf("Informe o mes atual: ");
    scanf("%d", &mesAtual);
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    printf("\nEstamos no dia %d/%d/%d", diaAtual, mesAtual, anoAtual);

    idade = anoAtual - anoNasc;
    frequencia = 220 - idade;
    aux1 = frequencia * 0.05;
    aux2 = frequencia * 0.085;

    printf("\nVoce tem %d anos, sua frequencia cardiaca maxima e %d", idade, frequencia);
    printf("\nSua frequencia esta em uma faixa de 50 a 85 porcento da maxima entao numa faixa: %.2f a %.2f bpm", aux1, aux2);
 
    return 0;
}