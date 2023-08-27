#include <stdio.h>

//Precisa pegar o resto da divisão de n por 10 e somar ao número inverso multiplicado por 10
//Depois disso, divide n por 10 para pegar o próximo dígito e repete
//Por ser um inteiro, não vai haver a casa decimal

int main()
{
    unsigned short int n;
    unsigned short int inverso = 0;
    puts("Insira um número natural de 3 dígitos: ");
    scanf("%hu", &n);

    //Repetir o processo até não houver mais dígitos
    while (n > 0) {
        //O resto da divisão sempre vai ser o último dígito de n
        //Isso desloca o número para a esquerda e da espaço pro próximo dígito
        inverso = inverso * 10 + (n % 10);
        //Remover o último dígito (n é um inteiro, então oq tiver depois da vírgula não existe)
        n = n/10; //Pq o último dígito já foi adicionado
    }

    //Imprimir o número já invertido
    printf("%d\n", inverso);

    return 0;
}