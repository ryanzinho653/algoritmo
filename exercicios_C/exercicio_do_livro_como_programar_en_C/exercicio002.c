#include <stdio.h>

main () {
    int inteiro, inteiro2, soma;

    printf("entre com o primeiro inteiro: \n");
    scanf("%d", &inteiro);
    printf("entre com o segundo inteiro: \n");
    scanf("%d", &inteiro2);
    
    soma = inteiro + inteiro2;

    printf("o resultado da soma foi: %d", soma);
    return 0;
}