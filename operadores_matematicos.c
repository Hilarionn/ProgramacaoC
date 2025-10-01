#include <stdio.h>
int main(){
/* 
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
*/

int numero1, numero2;
int soma, subtracao, multiplicacao, divisao;

//leitura de dados

printf("Entre com o número 1: \n");
scanf("%d", &numero1);

printf("Entre com o número 2: \n");
scanf("%d", &numero2);

//soma
soma = numero1 + numero2;

//subtracao
subtracao = numero1 - numero2;

//multiplicacao
multiplicacao = numero1 * numero2;

//divisao
divisao = numero1 / numero2;

printf("A soma é: %d \n", soma);
printf("A subtração é: %d \n", subtracao);
printf("A multiplicação é: %d \n", multiplicacao);
printf("A divisão é: %d \n", divisao);

return 0;
}