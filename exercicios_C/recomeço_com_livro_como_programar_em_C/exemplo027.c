/* Calcule a soma de inteiros pares */
#include <stdio.h>

int main(void)
{
    int x = 30, i = 1, y = 0;
    while(i <= x)
    {
        if(i % 2 == 0)
        {
            y = y + i;
            printf("%d \n", i);
        }
        i++;
    }

    printf("A soma dos 30 inteiros pares e: %d", y);
    
    return 0;
}