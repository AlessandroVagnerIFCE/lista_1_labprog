#include <stdio.h>

int main()
{
    float c; //Comprimento
    float l; //Largura
    float h; //Altura

    puts("Insira o valor do comprimento: ");
    scanf("%f", &c);

    puts("Insira o valor da largura: ");
    scanf("%f", &l);

    puts("Insira o valor da altura: ");
    scanf("%f", &h);

    printf("Volume: %.2f\n", c*l*h);

    return 0;
}