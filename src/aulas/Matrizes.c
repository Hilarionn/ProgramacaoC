#include <stdio.h>
 
int main() {
    int matriz[3][3] = {  
        
        //Sua matriz não pode mudar no decorrer da criação, nossa matriz assim como os vetores tem tamanho fixo e o acesso
        //Sempre será pelo Índice. Os dois valores serão apontados dentro da matriz, como se fossem coordenadas X e Y. 
        //Todos os elementos devem possuir o mesmo tipo (Caracteres, decimais, inteiros...)
        
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    // Acessando elementos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][2]);
 
    return 0;
}