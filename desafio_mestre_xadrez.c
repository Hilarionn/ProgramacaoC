#include <stdio.h>

/* TORRE - Recursiva */
void MoverTorre(int atual, int limite){
    if (atual < limite){
        printf("Direita\n");
        MoverTorre(atual + 1, limite);
    }
}

/* RAINHA - Recursiva */
void MoverRainha(int atual, int limite){
    if (atual < limite){
        printf("Cima\n");
        MoverRainha(atual + 1, limite);
    }
}

/* BISPO - Recursivo + loops aninhados */
void MoverBispo(int atual, int limite){
    if (atual < limite){

        for (int v = 0; v < 1; v++){
            for (int h = 0; h < 1; h++){
                printf("Cima\n");
                printf("Direita\n");
            }
        }

        MoverBispo(atual + 1, limite);
    }
}

/* CAVALO - loops complexos */
void MoverCavalo(){

    int cima = 0;
    int direita = 0;

    while (cima < 2){

        cima++;
        printf("Cima\n");

        if (cima == 2){

            while (direita < 1){
                direita++;
                printf("Direita\n");
            }
        }
    }
}

int main(){

    int casas_torre = 5;
    int casas_rainha = 3;
    int casas_bispo = 2;

    MoverTorre(0, casas_torre);
    printf("\n");

    MoverRainha(0, casas_rainha);
    printf("\n");

    MoverBispo(0, casas_bispo);
    printf("\n");

    MoverCavalo();
    printf("\n");

    return 0;
}