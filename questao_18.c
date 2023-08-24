#include <stdio.h>

//Pi = 3.14159

int main()
{
    float r;
    puts("Insira o raio da circunferência:");
    scanf("%f", &r);

    printf("Diâmetro: %f\n", 2*r);
    printf("Comprimento: %f\n", 2*3.14159*r);
    printf("Área: %f\n", 2*3.14159*(r*r));

    return 0;
}