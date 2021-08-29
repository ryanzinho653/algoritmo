/* Repeticao controlada por contador*/
#include <stdio.h>

int main (void)
{
    int contador = 1;

    while (contador <= 10)
    {
        prinft("%d\n", contador);
        ++contador;
    }

    return 0;
}