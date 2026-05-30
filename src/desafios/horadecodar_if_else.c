#include <stdio.h>
int main(){

    float temperatura, umidade;
    int estoque;

    printf("Calculadora de valores - Frigorífico\n");
    printf("Essa calculadora permite calcular o STATUS de operação do frigorífico\nvisando a melhor qualidade dos alimentos\n");

    printf("Digite aqui a porcentagem da umidade:\n");
    scanf("%f", &umidade);

    printf("Digite a temperatura interna da máquina que aparece no visor:\n");
    scanf("%f", &temperatura);

    printf("Digite o número de estoque de produtos disponíveis:\n");
    scanf("%d", &estoque);

    if (temperatura > 30) {
        printf("A temperatura está extremamente elevada!\n");
    } else if (temperatura > 20) {
        printf("A temperatura está elevada!\n");
    } else if (temperatura == 20) {
        printf("A temperatura está no limite!\n");
    } else if (temperatura > 10) {
        printf("A temperatura está mediana!\n");
    } else {
        printf("A temperatura é ideal\n");
    }

    if (estoque < 50 ){
        printf("Estoque baixo! Favor reabastecer\n");
    } else {
        printf("Estoque ideal!\n");
    }

    if (umidade <= 60 ){ 
        printf("Umidade baixa!\n");
    } else {
        printf("Umidade excelente!\n");
    }

    return 0;
}
