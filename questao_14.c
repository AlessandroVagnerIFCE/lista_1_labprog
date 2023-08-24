#include <stdio.h>

//F = (9 * C + 160) / 5

int main()
{
    float c;
    puts("Insira o valor da temperatura em Celsius:");
    scanf("%f", &c);
    printf("Valor em Fahrenheit: %.2f\n", (9 * c + 160) / 5);

    return 0;
}