/* Pesquisa linear de um array*/
#include <stdio.h>
#define SIZE 100

int linearSearch(const int array[], int key, int size);

int main(void)
{
    int a[SIZE];
    int x;
    int searchKey;
    int element;

    for(x = 0; x < SIZE; x++)
    {
        a[x] = 2 * x;
    }

    printf("Digite chave de pesquisa de inteiro:\n");
    scanf("%d",  &searchKey);

    element = linearSearch(a, searchKey, SIZE);

    if(element != -1)
    {
        printf("Valor encontrado no elemento %d\n", element);
    }
    else
    {
        printf("Valor nao encontrado\n");
    }

    return 0;
}

int linearSearch(const int array[], int key, int size)
{
    int n;

    for(n = 0; n < SIZE; ++n)
    {
        if(array[n] == key)
        {
            return n;
        }
    }

    return -1;
}