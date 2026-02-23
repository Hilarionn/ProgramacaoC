#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    int direita_torre;
for (direita_torre = 0; direita_torre < 5; direita_torre ++ ) {
    if (direita_torre == 0) {
    printf("A torre andou uma casa para a direita!\n");
    }
    else { printf("A torre andou mais uma casa para a direita!\n");}
}
printf ("A torre concluiu o movimento, totalizando %d casas para a direita!\n", direita_torre);


int cima_bispo, direita_bispo;
for (cima_bispo = 0; cima_bispo < 5; cima_bispo ++ ) {
    if (cima_bispo == 0) {
    printf("O bispo uma casa para cima!\n");
    }
    else { printf("O bispo andou mais uma casa para cima!\n");}
}
printf ("O bispo concluiu o movimento, totalizando %d casas para cima e %d para a direita!\n", cima_bispo, direita_bispo);




    return 0;
}