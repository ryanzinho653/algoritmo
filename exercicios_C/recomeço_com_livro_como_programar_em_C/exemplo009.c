/* Pre-inclemento e pos-inclemento*/
#include <stdio.h>

int main(void)
{
    int c;

    c = 5;
    printf("%d\n", c);
    printf("%d\n", c++);
    printf("%d\n", c);

    c = 5;
    printf("%d\n", c);
    printf("%d\n", ++c);
    printf("%d\n", c);
    return 0;
}