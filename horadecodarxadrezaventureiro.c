#include <stdio.h>
int main(){
char letra;
int i, j;
for (i = 1; i <= 5; i++) {
    letra = 'E';
    for (j = 1; j <=i; j++) {
        //printf("%c", letra);
        // letra++;
        //printf("*");

        printf("%c", letra);
        letra--;
    }
    printf("\n");
}




    return 0;
}