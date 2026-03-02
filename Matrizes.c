#include <stdio.h>
 
int main() {
    int matriz[3][3] = {
        
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    // Acessando elementos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][2]);
 
    return 0;
}