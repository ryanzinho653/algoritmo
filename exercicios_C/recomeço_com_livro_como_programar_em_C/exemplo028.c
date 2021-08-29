/* Calculando o produto de inteiros impares */
#include <stdio.h>

int main(void)
{
    int i = 1, x = 15, y = 0;
    while(i <= x)
    {
        if(i % 2 != 0)
        {
            printf("%d\n", i);
            y = y + i;
        }
        i++;
    }
    printf("A soma dos numeros impares de 1 a 15 e: %d", y);
    return 0;
}