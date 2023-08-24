#include <stdio.h>

int main()
{
    unsigned int horas;
    float valor_hora, percentual_imposto;
    
    puts("Insira o valor da hora aula:");
    scanf("%f", &valor_hora);
    puts("Insira o valor percentual do imposto (SOMENTE O NÚMERO):");
    scanf("%f", &percentual_imposto);
    puts("Insira a quantidade de horas trabalhadas:");
    scanf("%d", &horas);

    printf("Salário bruto: %.2f\n", valor_hora * horas);

    //Na hora de descontar o imposto, multiplicar pela representação em decimal do percentual após o desconto
    //Por exemplo, se o imposto for 10%, multiplicar por 0.9
    printf("Salário líquido: %.2f\n", (valor_hora * horas) * (1 - percentual_imposto/100));

    return 0;
}