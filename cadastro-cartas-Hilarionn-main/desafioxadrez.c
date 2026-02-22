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
printf ("A torre concluiu o movimento, totalizando %d casas!\n", direita_torre);


int cima_bispo, direita_bispo;
for (cima_bispo && direita_bispo == 0; direita_bispo < 5 && cima_bispo < 5; cima_bispo ++, direita_bispo ++) 
{
printf("O bispo andou %d para a direita e %d para cima.\n", direita_bispo, cima_bispo);
}





    return 0;
}