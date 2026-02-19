#include <stdio.h>
int main() {
    int i = 1;

    do {
        printf("%d\n", i);
       // i++;
       i = i + 15;
    } while (i <=5);

/* Primeiro ele printa, depois ele verifica o valor da variável. A vantagem desse modelo é que ele imprime a informação ao menos uma vez
 Independente de se a condição for verdadeira ou falsa.*/

return 0;
}