#include <stdio.h>
int main() {
    int primeira_nota, segunda_nota, terceira_nota;
    float media;


        printf("***Programa de Cálculo de Média*** \n");


        printf("Digite a sua primeira nota: \n");
        scanf("%d", &primeira_nota);

        printf("Digite a sua segunda nota: \n");
        scanf("%d", &segunda_nota);

        printf("Digite a sua terceira nota: \n");
        scanf("%d", &terceira_nota);

        media = (float) (primeira_nota + segunda_nota + terceira_nota) /3;

        printf("A média das suas notas é: %.3f", media);

        


    return 0;
}