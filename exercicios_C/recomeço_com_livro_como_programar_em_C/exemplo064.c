/* passando arrays e elementos individuais do array para funcoes*/
#include <stdio.h>
#define SIZE 5

void modiFyArray(int b[], int size);
void modiFyElement(int e);

int main(void)
{
    int a[SIZE] = {0,1,2,3,4};
    int i;

    printf("Efeitos da passagem do array inteiro por referencia: \n\nOs valores o array original sao:\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\n");

    modiFyArray(a, SIZE);
    
    printf("Os valores do array modificado sao: \n");

    for(i = 0; i < SIZE; i++)
    {
        printf("%3d", a[i]);
    }

    printf("\n\n\nEfeitos de passar elemento do array por valor: \n\nO valor de a[3] e %d\n", a[3]);

    modiFyElement(a[3]);

    printf("\n\n\nO valor de a[3] e %d\n", a[3]);

    return 0;
}

void modiFyArray(int b[], int size)
{
    int j;
    
    for(j = 0; j < SIZE; j++)
    {
        b[j] *= 2;
    }
}

void modiFyElement(int e)
{
    printf("Valor em modiFyElement e %d\n", e *= 2);
}