/* Implimindo numeros por um loop*/
#include <stdio.h>

int main(void)
{
    int contador;

    contador = 1;

    while(contador <= 10)
    {
        printf("%d\n", contador);
        contador = contador + 1;
    }
    return 0;
}