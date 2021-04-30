#include <stdio.h>

main(){

    //printf("Hello Word"); -> esse print e o escreval

    /*int x=10; -> o int e a variavel
    printf ("x = %d \n",x++);
    printf ("x = %d \n",x);
    printf ("x = %d\n", ++x);
    printf ("x = %d /n", x);

    printf("cinco e igual a %d \n", 5);*/

    int valor;
    float soma, num;
    char letra;

    printf ("digite um numero inteiro");
    scanf ("%d", &valor);
    printf ("digite um numero com casa decimal");
    scanf ("%f", &num);
    //printf("")
    //scan ("%c", &letra);
    
    soma = num+valor;

    printf ("resultado da soma: /n", soma);

    system ("pause"); // -> esse comando funciona para parar o comando
}
