#include <stdio.h>

main () {
    int num1, num2, multiplicacao;

    printf ("informe dois valores inteiros:\n");
    printf ("informe o primeiro valor:\n");
    scanf ("%d", &num1);
    printf ("informe o segundo valor:\n");
    scanf ("%d", &num2);

    multiplicacao = num1 + num2;

    printf ("o resultado da multiplicacao entre os dois valores foi de: %d \n", multiplicacao);

    system("pause");
    return 0;
}