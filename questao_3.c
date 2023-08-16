#include <stdio.h>

int main()
{
    float n;
    puts("Digite um valor real: ");
    scanf("%f", &n);
    printf("Valor com apenas uma casa decimal: %.1f\n", n);

    return 0;
}