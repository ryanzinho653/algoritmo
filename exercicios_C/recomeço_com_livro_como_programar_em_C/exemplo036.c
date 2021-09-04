/* Usando a estrutura de repeticao do/while*/
#include <stdio.h>

int main(void)
{
    int contador = 1;

    do
    {
        printf("%d", contador);
    }while(++contador <= 10);

    return 0;
}