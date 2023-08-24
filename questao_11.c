#include <stdio.h>

//Quotação do dólar no momento em que fiz isso
//R$:4.87

int main()
{
    float r, d;
    puts("Insira a quotação atual do dólar:");
    scanf("%f", &d);
    puts("Insira o valor em reais para converter:");
    scanf("%f", &r);
    printf("O valor R$:%.2f equivale a %.2f dólares\n", r, r*d);

    return 0;
}