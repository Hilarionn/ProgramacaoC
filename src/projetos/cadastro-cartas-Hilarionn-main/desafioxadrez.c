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
    

    for (int i = 1; i <=20; i++) { //Para esse código começar a entrar em loop e funcionar, o de dentro tem que ter sido concluído
        //No caso, executado até atingir a condição proposta. No caso, j <= 10
        for (int j = 1; j <= 10; j++) { printf("%d\t", i * j); //1,2,3,4,5,6,7,8,9,10 x1 / ....10 x2 / ....10 x3 .... 
            //J coluna x I linha
        }
        printf("\n");
    }
printf("Concluiu\n");


int segundos;
   
    for (segundos = 10; segundos >= 0; segundos--) {
        printf("%d\n", segundos);
       
        // Loop aninhado para simular um atraso
        for (int i = 0; i < 1005000500; i++) {
            // Apenas para simular um atraso
        }
    }
 

    printf("Fogos de artifício!\n");


        for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }


    return 0;
}


