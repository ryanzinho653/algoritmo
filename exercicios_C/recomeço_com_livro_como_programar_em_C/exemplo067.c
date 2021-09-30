/* Esse programa introduz o topico da analise de dados de pesquisa. 
   Ele calcula a media, a mediana e a moda dos dados*/
#include <stdio.h>
#define SIZE 99

void mean(const int answer[]);
void median(int answer[]);
void mode(int freq[], const int answer[]);
void bubbleSort(int a[]);
void printArray(const int a[]);

int main(void)
{
    int frequency[10] = {0};

    int response[SIZE] = {6,7,8,9,8,7,8,9,8,9,7,8,9,5,9,8,7,8,7,8,6,7,8,9,3,9,8,7,8,7,7,8,9,8,9,8,9,7,8,9,6,7,8,7,8,7,9,8,9,7,5,3,5,6,7,2,5,3,9,4,6,4,7,8,9,6,8,7,8,9,7,8,7,4,4,2,5,3,8,7,5,6,4,5,6,1,6,5,7,8,7};

    mean(response);
    median(response);
    mode(frequency, response);

    return 0;
}

void mean(const int answer[])
{
    int j;
    int total = 0;
    
    printf("%s\n%s\n%s\n", "********", "Media", "********");

    for(j = 0; j < SIZE; j++)
    {
        total += answer[j];
    }

    printf("A media e o valor medio dos itens de dados.\nA media e iqual ao total de todos.\nOs itens de dados divididos pelo numero\nde itens de dados (%d). O valor medio para esta\n execucao e: %d / %d = %.4f\n\n", SIZE, total, SIZE, (double) total / SIZE);
}

void median(int answer[])
{
    printf("\n%s\n%s\n%s\n%s", "********", "Mediana", "********", "O array de respostas, nao ordenado, e");

    printArray(answer);
    bubbleSort(answer);

    printf("\n\nO array ordenado e");

    printArray(answer);

    printf("\n\nA mediana e o elemento %d do\nArray ordenado de %d elemento. \nPara essa execucao, a mediana e %d\n\n", SIZE/2, SIZE, answer[SIZE / 2]);
}

void mode(int freq[], const int answer[])
{
    int rating;
    int j;
    int h;
    int largest = 0;
    int modeValue = 0;

    printf("\n%s\n%s\n%s\n", "********", "Moda", "********");

    for(rating = 1; rating <= 9; rating++)
    {
        freq[rating] = 0;
    }

    for(j = 0; j < SIZE; j++)
    {
        ++freq[answer[j]];
    }

    printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Resposta", "Frequencia", "Histograma", "1 1 2 2","5 0 5 0 5");

    for(rating = 1; rating <= 9; rating++)
    {
        printf("%8d%11d", rating, freq[rating]);

        if(freq[rating] > largest)
        {
            largest = freq[rating];
            modeValue = rating;
        }

        for(h = 1; h <= freq[rating]; h++)
        {
            printf("*");
        }

        printf("\n");
    }

    printf("A moda e o valor mais frequente.\nPara essa execucao, a moda e %d, que ocorreu %d vezes.\n", modeValue, largest);
}

void bubbleSort(int a[])
{
    int pass;
    int j;
    int hold;

    for(pass = 1; pass < SIZE; pass++)
    {
        for(j = 0; j < SIZE; j++)
        {
            if(a[j] > a[j + 1])
            {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
}

void printArray(const int a[])
{
    int j;

    for(j = 0; j < SIZE; j++)
    {
        if(j % 20 == 0)
        {
            printf("\n");
        }

        printf("%2d", a[j]);
    }
}