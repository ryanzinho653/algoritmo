/* Tratando array de carctere simples*/
#include <stdio.h>
int main(void)
{
    char string1[20];
    char string2[] = {"String Literal"};
    int i;

    printf("Digite uma string: ");
    scanf("%s", string1);

    printf("String1 e: %s\nString2 e: %s\nString1 com espacos entre caracteres e: \n", string1, string2);

    for(i = 0; string1[i] != '\0';i++)
    {
        printf("%c ", string1[i]);
    }

    printf("\n");

    return 0;
}