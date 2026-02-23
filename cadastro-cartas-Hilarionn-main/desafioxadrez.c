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


int casas_bispo, movimento_bispo;
casas_bispo = 5;
movimento_bispo = 0;
while (movimento_bispo < casas_bispo) {
         movimento_bispo ++;
    printf("O bispo andou 1 casa na diagonal (para cima e uma para a direita!)\n");

}
printf("O bispo concluiu seu movimento andando %d casas na diagonal!\n", movimento_bispo);



    int casas_rainha, movimento_rainha;
    casas_rainha = 8;
    movimento_rainha = 0;
    do {
    printf("A rainha andou 1 casa para a esquerda!\n");
movimento_rainha ++;}
 while 
(casas_rainha > movimento_rainha);

printf("A rainha concluiu seu movimento andando %d casas para a esquerda!\n", movimento_rainha);
    return 0;
}


