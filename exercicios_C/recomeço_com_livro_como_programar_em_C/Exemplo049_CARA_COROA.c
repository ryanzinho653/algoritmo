/* Jogando uma moeda*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(void);

int main(void)
{
    int sum; /* soma em ingles*/
    int gameStatusCara = 0;
    int gameStatusCoroa = 0;

    srand(time(NULL));

    for(int i = 1; i <= 100; i++)
    {
        sum = flip();

        switch (sum)
        {
        case 1:
            ++gameStatusCara;
            break;
    
       case 2:
            ++gameStatusCoroa;
            break;
        }
    }

    printf("\nCara: %d", gameStatusCara);
    printf("\nCoroa: %d", gameStatusCoroa);

    return 0;
}

int flip(void)
{
    int caraCoroa;
    int resu;

    caraCoroa = 1 + (rand()%2);
    resu = caraCoroa;

    return resu;
}