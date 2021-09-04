/* Usando o comando break em uma estrutura for*/
#include <stdio.h>

int main (void)
{
    int x;

    for(x = 1; x <= 10; x++)
    {
        if(x == 5)
        {
            break;
        }
        printf("%d", x);
    }

    printf("\nSaiu do loop em x == %d\n", x);
    
    return 0;
}