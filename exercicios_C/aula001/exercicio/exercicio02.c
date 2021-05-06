#include <stdio.h>
#include <locale.h>

main () {
    setlocale (LC_ALL, "Portuguese");
    int num, num1;
    
    printf ("informe um numero inteiro:\n");
    scanf("%d", &num);
    num1 = num;
    printf ("o numero inteiro escolhido foi: %d \n", num1);
    system ("pause");
    return(0);
}