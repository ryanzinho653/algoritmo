/* Usando instrucoes if, operadores relacionais e operadores de igualdade */
#include <stdio.h>

int main(void)
{
    int num1;
    int num2;

    printf("Entre com dois inteiros e eu lhe direi \n");
    printf("as relacoes que eles satisfazem: \n");

    scanf("%d%d", &num1, &num2);

    if(num1 == num2)
    {
        printf("%d e igual a %d\n", num1, num2);
    }
    if(num1 != num2)
    {
        printf("%d nao e igual a %d\n", num1, num2);
    }
    if(num1 < num2)
    {
        printf("%d e menor que %d\n", num1, num2);
    }
    if (num1 > num2)
    {
        printf("%d e maior que %d\n", num1, num2);
    }
    if(num1 <= num2)
    {
        printf("%d e menor ou igual a %d\n", num1, num2);
    }           
    if(num1 >= num2)
    {
        printf("%d e maior ou igual a %d\n", num1, num2);
    }

    return 0;
}