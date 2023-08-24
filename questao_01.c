#include <stdio.h>

int main(){

    int x = 0;
    //Primeiro a divisão, dps a multiplicação, dps a subtração e por último a soma
    //x = 7 + 3*6/2-1; Retorna 15

    //Primeiro o mod, dps a divisão, a multiplicação, a subtração e por fim a soma
    //x = 2%2 + 2*2-2/2; Retorna 3

    /*Primeiro a divisão, dps a multiplicação no parêntese mais interno,
    dps soma 3, dps a multiplicação 3*9 e por último 27*3
    */
    //x = (3 * 9 * (3 + (9*3/(3)))); Retorna 324

    printf("%d", x);
    return 0;
}
