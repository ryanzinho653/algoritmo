#include <stdio.h>

main () {
    int num1, contador, resultado;

    printf ("informe um valor para realizar a tabuada:\n");
    scanf ("%d", &num1);

    for (contador = 1; contador <= 10; contador = contador + 1)
    {
        resultado = contador * num1;
        
        printf ("%d", contador);
        printf ( " X %d", num1);
        printf (" =  %d", resultado);
        printf ("\n");
    
    }
    
    system("pause");
    return 0;
}