/* O nome do array e o mesmo que o endereco de &array[0]*/
#include <stdio.h>

int main(void)
{
    char array[5];

    printf("  array = %p\n  &array[0] = %p\n  &array = %p\n", array, &array[0], &array);

    return 0;
}