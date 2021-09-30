/* Modificacao do jogo "craps"*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{CONTINUE, WON, LOST};

int rollDice(void);

int main(void)
{
    int sum;
    int myPoint;
    int resu = 0;
    float saldoBanca = 1000;
    float aposta = 0;

    enum Status gameStatus;

    while(resu != 1)
    {
        srand(time(NULL));

        printf("\n---------- JOGO DE CRAPS ----------");
        printf("\n");
        printf("\n- Saldo de aposta: R$%.2f", saldoBanca);
        printf("\n- Quanto deseja apostar: ");
        scanf("%f", &aposta);
    
        if(aposta > saldoBanca)
        {
            while (aposta > saldoBanca)
            {
                printf("\n- Saldo insuficiente, tente novamente: ");
                scanf("%f", &aposta);
            }
        
        }

        sum = rollDice();

        switch(sum)
        {
            case 7:
            case 11:
                gameStatus = WON;
                break;
        
            case 2:
            case 3:
            case 12:
                gameStatus = LOST;
                break;
        
            default:
                gameStatus = CONTINUE;
                myPoint = sum;
                printf("ponto e %d\n", myPoint);
                break;
        }   

        while(gameStatus == CONTINUE)
        {
            sum = rollDice();

            if(sum == myPoint)
            {
                gameStatus = WON;
            }
            else
            {
                if(sum == 7)
                {
                    gameStatus = LOST;
                }
            }
        }

        if(gameStatus == WON)
        {
            printf("Jogador vence\n");
            saldoBanca = saldoBanca + aposta;
        }
        else
        {
            printf("Jogador perde\n");
            saldoBanca = saldoBanca - aposta;
        }

        if(saldoBanca == 0)
        {
            printf("\n-----------------------------------\n");
            printf("     !!! A casa ganhou !!!");
            printf("\n-----------------------------------");
            break;
        }

        printf("Deseja continuar jogando: S/N\n");
        scanf("%d", &resu);
        
    }
    return 0;
}

int rollDice(void)
{
    int die1;
    int die2;
    int workSum;

    die1 = 1 + (rand()%6);
    die2 = 1 + (rand()%6);
    workSum = die1 + die2;

    printf("Jogador rolou %d + %d = %d\n", die1, die2, workSum);

    return workSum;
}