#include <stdio.h>
#include <math.h>

//Usar -lm quando compilar

int main()
{
    float x1, x2, y1, y2;

    puts("Insira as coordenadas do ponto A");
    puts("Valor de X:");
    scanf("%f", &x1);
    puts("Valor de Y:");
    scanf("%f", &y1);

    puts("Insira as coordenadas do ponto B");
    puts("Valor de X:");
    scanf("%f", &x2);
    puts("Valor de Y:");
    scanf("%f", &y2);

    printf("Distância entre A e B: %.2f\n", (float)sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)));

    return 0;
}