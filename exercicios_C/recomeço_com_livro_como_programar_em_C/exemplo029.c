/* Fatorias*/
#include <stdio.h>

int main(void)
{
    int i = 1, x = 20, y = 1, z = 20;

    while(i <= x)
    {
        if(i > 1)
        {
            z = z - 1;
        }
        i++;
        while(y <= z)
        {
            printf("%d ", y);
            y++;
        }
        y = 1;
        printf("\n");
    }

    i = 1, x = 20, y = 1, z = 20;

    while(i <= x)
    {
        if(i > 1)
        {
            z = z - 5;
        }
        i++;
        while(y <= z)
        {
            printf("%d ", y);
            y++;
        }
        y = 1;
        printf("\n");
    }
    return 0;
}