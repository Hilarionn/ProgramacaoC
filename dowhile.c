#include <stdio.h>
int main() {
    int i = 1;

    if (i >= 9999) { printf("Você ganhou!");}
    else {

    
    do {
        printf("%d\n", i);
       // i++;
       i = i * 6;
    } while (i <=9999);
    }
/* Primeiro ele printa, depois ele verifica o valor da variável. A vantagem desse modelo é que ele imprime a informação ao menos uma vez
 Independente de se a condição for verdadeira ou falsa.*/

return 0;
}


/*

#include <stdio.h>

int main() {

    int i = 1;

    do {

        printf("%d\n", i);
        i++;

    } while (i == 5);

    return 0;
}
*/