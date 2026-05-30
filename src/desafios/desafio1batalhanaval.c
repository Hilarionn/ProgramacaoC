#include <stdio.h>



int main(){

int tabuleiro[10][10]={
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
//NAVIO 1
for (int i = 1; i < 4; i++) {
    //for (int j = 0; j < 3; j++){

    tabuleiro[0][0+i] = 3;
  //  tabuleiro[0+j][0+5] = 3;
//}
// NAVIO 2




}
for (int i = 0; i < 10; i++) {
    for (int j = 0; j <10; j++){

//definindo posições do J

        
if (tabuleiro[5][5] == 0 && tabuleiro[6][5] == 0 && tabuleiro[7][5] == 0){

    tabuleiro[5][5] = 3;
        tabuleiro[6][5] = 3;
        tabuleiro[7][5] = 3;
}
if (tabuleiro[2][2] == 0 && tabuleiro[3][3] == 0 && tabuleiro[4][4] == 0){
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;
    tabuleiro[4][4] = 3;
}
if (tabuleiro[7][2] == 0 && tabuleiro[8][3] == 0 && tabuleiro[9][4] == 0){
    tabuleiro[7][2] = 3;
    tabuleiro[8][3] = 3;
    tabuleiro[9][4] = 3;
} 

    printf("%d\t", tabuleiro[i][j]);
    }
    printf("\n");
}


//===========================================================================================================================================
/* Neste loop, o índice 'i' é usado para percorrer as colunas na mesma linha.
Como a matriz começa em 0, ao definir 'i' de 0 até 2, o código preenche exatamente três colunas consecutivas na mesma linha.
 Ou seja, quando 'i' é 0, colocamos o valor na coluna 0; quando 'i' é 1, na coluna 1; e quando 'i' é 2, na coluna 2.
 Isso cria um navio horizontal de tamanho 3, ocupando três casas consecutivas.
 Esse padrão funciona porque o loop garante que 'i' percorra as colunas, e assim a gente preenche exatamente as três posições do navio.
 Importante notar que, apesar de o loop estar fixo, o uso do 'i' permite que o código seja escalável.
 bastando mudar a linha ou a coluna inicial para posicionar outros navios ou padrões.  */
//===========================================================================================================================================








    return 0;
}