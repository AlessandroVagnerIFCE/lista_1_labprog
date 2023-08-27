#include <stdio.h>
#include <math.h>

//Usar -lm quando for compilar

int main()
{
    float a, b, c;
    puts("Insira um número A:");
    scanf("%f", &a);
    puts("Insira um número B:");
    scanf("%f", &b);
    puts("Insira um número C:");
    scanf("%f", &c);

    printf("Média aritmética: %.2f\n", (a+b+c)/3);
    printf("Média geométrica: %.2f\n", (float)pow(a*b*c, (float)1/3)); //Elevar a 1/3 = Raiz cúbica

    return 0;
}