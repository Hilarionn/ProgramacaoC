#include <stdio.h>

#define TAM_TAB 10      // tamanho do tabuleiro
#define TAM_HAB 5       // tamanho das matrizes de habilidade (5x5)

int main(){

    int tabuleiro[TAM_TAB][TAM_TAB];

    // Matrizes que representam as habilidades
    int cruz[TAM_HAB][TAM_HAB];
    int cone[TAM_HAB][TAM_HAB];
    int octaedro[TAM_HAB][TAM_HAB];

    // ------------------------------
    // 1) Inicializar tabuleiro com água (0)
    // ------------------------------
    for(int i = 0; i < TAM_TAB; i++){
        for(int j = 0; j < TAM_TAB; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // ------------------------------
    // 2) Posicionar alguns navios (valor 3)
    // ------------------------------

    // Navio diagonal principal
    for(int i = 6; i < 9; i++){
        tabuleiro[i][i] = 3;
    }

    // Navio diagonal secundária
    for(int i = 3; i < 6; i++){
        tabuleiro[i][TAM_TAB - 1 - i] = 3;
    }

    // Navio vertical
    for(int i = 1; i <= 3; i++){
        tabuleiro[i][1] = 3;
    }

    // ------------------------------
    // 3) Construir matriz da CRUZ
    // ------------------------------
    for(int i = 0; i < TAM_HAB; i++){
        for(int j = 0; j < TAM_HAB; j++){

            // Linha do meio OU coluna do meio
            if(i == 2 || j == 2){
                cruz[i][j] = 1;
            }
            else{
                cruz[i][j] = 0;
            }

        }
    }

    // ------------------------------
    // 4) Construir matriz do CONE
    // ------------------------------
    for(int i = 0; i < TAM_HAB; i++){
        for(int j = 0; j < TAM_HAB; j++){

            // Expande a largura conforme desce
            if(j >= 2 - i && j <= 2 + i){
                cone[i][j] = 1;
            }
            else{
                cone[i][j] = 0;
            }

        }
    }

    // ------------------------------
    // 5) Construir matriz do OCTAEDRO (losango)
    // ------------------------------
    for(int i = 0; i < TAM_HAB; i++){
        for(int j = 0; j < TAM_HAB; j++){

            // Distância do centro formando losango
            int dist = (i - 2);
            if(dist < 0) dist = -dist;

            int dist2 = (j - 2);
            if(dist2 < 0) dist2 = -dist2;

            if(dist + dist2 <= 2){
                octaedro[i][j] = 1;
            }
            else{
                octaedro[i][j] = 0;
            }

        }
    }

    // ------------------------------
    // 6) Definir pontos de origem das habilidades
    // ------------------------------
    int origem_cruz_l = 4;
    int origem_cruz_c = 4;

    int origem_cone_l = 2;
    int origem_cone_c = 7;

    int origem_octa_l = 7;
    int origem_octa_c = 2;

    // ------------------------------
    // 7) Aplicar habilidade CRUZ
    // ------------------------------
    for(int i = 0; i < TAM_HAB; i++){
        for(int j = 0; j < TAM_HAB; j++){

            if(cruz[i][j] == 1){

                int linha = origem_cruz_l + i - 2;
                int coluna = origem_cruz_c + j - 2;

                if(linha >= 0 && linha < TAM_TAB &&
                   coluna >= 0 && coluna < TAM_TAB){

                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // ------------------------------
    // 8) Aplicar habilidade CONE
    // ------------------------------
    for(int i = 0; i < TAM_HAB; i++){
        for(int j = 0; j < TAM_HAB; j++){

            if(cone[i][j] == 1){

                int linha = origem_cone_l + i - 2;
                int coluna = origem_cone_c + j - 2;

                if(linha >= 0 && linha < TAM_TAB &&
                   coluna >= 0 && coluna < TAM_TAB){

                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // ------------------------------
    // 9) Aplicar habilidade OCTAEDRO
    // ------------------------------
    for(int i = 0; i < TAM_HAB; i++){
        for(int j = 0; j < TAM_HAB; j++){

            if(octaedro[i][j] == 1){

                int linha = origem_octa_l + i - 2;
                int coluna = origem_octa_c + j - 2;

                if(linha >= 0 && linha < TAM_TAB &&
                   coluna >= 0 && coluna < TAM_TAB){

                    tabuleiro[linha][coluna] = 5;
                }
            }
        }
    }

    // ------------------------------
    // 10) Imprimir tabuleiro
    // ------------------------------
    for(int i = 0; i < TAM_TAB; i++){
        for(int j = 0; j < TAM_TAB; j++){

            printf("%d ", tabuleiro[i][j]);

        }
        printf("\n");
    }

    return 0;
}