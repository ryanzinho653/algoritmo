/* Impondo privacidade com criptografia*/
#include <stdio.h>

int main(void)
{
    int primeiro = 0, segundo = 0, terceiro = 0, quarto = 0;
    float aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 4;

    printf("Informe uma senha de quatro digitos: ");
    scanf("%d %d %d %d", &primeiro, &segundo, &terceiro, &quarto);

    aux1 = (primeiro + 7.0) / 10;
    aux2 = (segundo + 7.0) / 10;
    aux3 = (terceiro + 7.0) / 10;
    aux4 = (quarto + 7.0) / 10;

    printf("Senha codificada: %f %f %f %f", aux3, aux4, aux1, aux2);

    aux1 = (aux1 * 10) - 7;
    aux2 = (aux2 * 10) - 7;
    aux3 = (aux3 * 10) - 7;
    aux4 = (aux4 * 10) - 7;

    printf("\nSenha decodificada: %.0f %.0f %.0f %.0f", aux1, aux2, aux3, aux4);
    return 0;
}