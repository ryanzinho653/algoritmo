#include <stdio.h>

main () {
    int num1, num2, subtracao;

    printf ("informe dois valores inteiros:\n");
    printf ("informe o primeiro valor:\n");
    scanf ("%d", &num1);
    printf ("informe o segundo valor:\n");
    scanf ("%d", &num2);

    subtracao = num1 - num2;

    printf ("o resultado da subtracao entre os dois valores foi de: %d \n", subtracao);

    system("pause");
    return 0;
}