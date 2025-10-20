#include <stdio.h>

int main() {

    int idade;

    printf("Qual é a sua idade?\n");
    scanf(" %d", &idade);


    printf(" Sua idade é: %d anos\n", idade);


    if (idade >= 16) printf("Você já pode votar!\n");
    else printf("Você ainda não pode votar!\n");

    return 0;
}
