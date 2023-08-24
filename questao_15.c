#include <stdio.h>

//R$:50.25 por dia
//d < 10 dias = sem gratificação
//10 < d < 20 = gratificação de 20%
//d > 20 = gratificação de 30%
//Sempre é descontado 10% do valor bruto como imposto de renda 

int main()
{
    unsigned int dias; //Não existe dia negativo
    float salario;
    puts("Insira a quantidade de dias trabalhados:");
    scanf("%u", &dias);

    if (dias < 10){
        salario = dias*50.25*0.9; //Valor com desconto de 10%
        printf("Salário líquido: %.2f\n", salario);
    } else if (dias <= 20) {
        salario = dias*50.25;//*0.9;

        //salario += salario*0.2; //Adicionar 20%
        //salario -= salario*0.1; //Descontar 10%

        //Adicionar 20% de gratificação e depois descontar 10% do valor bruto
        printf("Salário líquido: %.2f\n", (salario + salario*0.2) - salario*0.1);
    } else {
        salario = dias*50.25;//*0.9;

        //salario += salario*0.3; //Adicionar 30%
        //salario -= salario*0.1; //Descontar 10%

        //Adicionar 30% de gratificação e depois descontar 10% do valor bruto
        printf("Salário líquido: %.2f\n", (salario + salario*0.3) - salario*0.1);
    }

    return 0;
}