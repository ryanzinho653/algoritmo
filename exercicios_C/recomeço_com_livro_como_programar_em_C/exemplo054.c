/* Inicializa um array com uma lista inicializadora*/
#include <stdio.h>

int main(void)
{
    int n[10] = {32,27,64,18,94,14,90,70,60,37};
    int i;

    printf("%s%13s\n", "Elemento", "Valor");

    for(i = 0; i < 10; i++)
    {
        printf("%7d%13d\n", i, n[i]);
    }

    return 0;
}