#include <stdio.h>

int main()
{
    float x;
    puts("Insira o valor da conta: ");
    scanf("%f", &x);
    printf("Valor total a ser pago: %.2f\n", x+(x*1/10)); //Adicionar 10% de taxa

    return 0;
}
