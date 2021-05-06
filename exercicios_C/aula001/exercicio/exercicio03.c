#include <stdio.h>

main () {
    int num1, num2, soma;

    printf ("informe dois valores inteiros:\n");
    printf ("informe o primeiro valor:\n");
    scanf ("%d", &num1);
    printf ("informe o segundo valor:\n");
    scanf ("%d", &num2);

    soma = num1 + num2;

    printf ("o resultado da soma entre os dois valores foi de: %d \n", soma);

    system("pause");
    return 0;
}