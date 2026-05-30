#include <stdio.h>
int main() {

    int numero = 180048, resultado;
    resultado = numero % 2;

    if (resultado == 0) {

printf("O número é par\n");
    }
    else { 
        printf("O número é Ímpar");
    }
    return 0;
}
// 10 % 2 = 0 → porque 10 ÷ 2 = 5 e sobra 0
//11 % 2 = 1 → porque 11 ÷ 2 = 5 e sobra 1
//Se numero % 2 der 0, o número é par
//Divisor	O que significa
//% 2	testa par ou ímpar
//% 4	testa múltiplo de 4
//% 3	testa múltiplo de 3
//% 5	testa múltiplo de 5