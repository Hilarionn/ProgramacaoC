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


int cima_bispo, direita_bispo, diagonal_bispo1qdt;


diagonal_bispo1qdt = (cima_bispo + direita_bispo) / 2;
cima_bispo = 5;
direita_bispo = 5;

for (diagonal_bispo1qdt = 0; diagonal_bispo1qdt < 5; diagonal_bispo1qdt ++ ) {
    if (diagonal_bispo1qdt == 0) {
    printf("O bispo uma casa para a diagonal!\n");
    }
    else { printf("O bispo andou mais uma casa para a diagonal!\n");}



}

  /*  for (direita_bispo = 0; direita_bispo < 5; direita_bispo ++ ) {
    if (direita_bispo == 0) {
    printf("O bispo uma casa para a direita!\n");
    }
    else { printf("O bispo andou mais uma casa para a direita!\n");}


}
    */
printf ("O bispo concluiu o movimento, totalizando %d casas para cima e %d para a direita! (%d casas na diagonal)!\n", cima_bispo, direita_bispo, diagonal_bispo1qdt);




    return 0;
}