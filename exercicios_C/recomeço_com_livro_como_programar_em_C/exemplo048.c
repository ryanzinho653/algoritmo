/* Tarifa de estacionamento*/
#include <stdio.h>

double calcularTaxas(double x);

int main(void)
{
    double horas1 = 0, horas2 = 0, horas3 = 0, taxa1 = 0, taxa2 = 0, taxa3 = 0, totalTax = 0, totalHor = 0;
    
    printf("Informe quantas horas o 1 carro ficou estacionado: ");
    scanf("%lf", &horas1);

    printf("\nInforme quantas horas o 2 carro ficou estacionado: ");
    scanf("%lf", &horas2);
        
    printf("\nInforme quantas horas o 3 carro ficou estacionado: ");
    scanf("%lf", &horas3);

    taxa1 = horas1;
    taxa2 = horas2;
    taxa3 = horas3;

    printf("\n%s%7s%6s", "Carro", "Horas", "Taxa");
    printf("\n1%7.2f%6.2f", horas1, calcularTaxas(taxa1));
    printf("\n2%7.2f%6.2f", horas2, calcularTaxas(taxa2));
    printf("\n3%7.2f%6.2f", horas3, calcularTaxas(taxa3));

    taxa1 = calcularTaxas(taxa1);
    taxa2 = calcularTaxas(taxa2);
    taxa3 = calcularTaxas(taxa3);

    totalTax = taxa1 + taxa2 + taxa3;
    totalHor = horas1 + horas2 + horas3;
    
    printf("\n%s%7.2f%6.2f", "TOTAL", totalHor, totalTax);

    return 0;
}

double calcularTaxas(double x)
{
    double h = x, a, b;

    if(h == 24)
    {
        return 10;
    }
    if(h <= 3)
    {
        return 2;
    }
    if(h > 3)
    {
        a = h - 3;
        a = a * 0.5;
        b = a + 2;
        return b;
    }
}