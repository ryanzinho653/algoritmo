// exercicio 3.2
#include <stdio.h>

main () {
    float x, y, z, soma, subtracao;
    
    printf("informe o valor do x, y e z:\n");
    printf("informe o valor de x:\n");
    scanf("%f", &x);
    printf("informe o valor de y:\n");
    scanf("%f", &y);
    printf("informe o valor de z:\n");
    scanf("%f", &z);

    soma = x + y + z;

    printf("o resultado da soma entre os valores atribuido a x, y e z foi: %f", soma);
    printf("\n");

    subtracao = x - 1;

    printf("conforme proposto o valor de x passa de: %f", x);
    printf(" para %f", subtracao);
    
    return 0;    
}