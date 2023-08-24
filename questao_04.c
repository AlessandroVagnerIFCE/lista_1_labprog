//OBS: Usar -lm quando compilar e precisar usar math.h

#include <math.h>
#include <stdio.h>

int main()
{
    int x;
    puts("Digite um valor inteiro: ");
    scanf("%d", &x);
    printf("O triplo do valor é: %d\n", x*3);
    printf("O quadrado do valor é: %d\n", (int)pow(x, 2)); //pow(x, 2) = x²
    printf("A metade do valor é: %.2f\n", (float)x/2);

    return 0;
}
