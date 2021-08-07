/* pre-incrementando versus pos-inclementando*/
#include <stdio.h>

int main(void)
{
    int teste = 5;

    printf("%d", teste);
    printf("\n%d", --teste);
    printf("\n%d", teste);

    printf("\n\n%d", teste);
    printf("\n%d", teste--);
    printf("\n%d", teste);

    return 0;
}