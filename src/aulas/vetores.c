#include <stdio.h>


void exemplo(){
int numeros[5] = {10,20,30,40,50};
    printf("O primeiro elemento é %d\n", numeros[0]);
    if (numeros[1] > numeros[0]) {
        do{ 
             printf("%d é maior que %d\n", numeros[1], numeros[0] );
             if (numeros[0] <=19) { numeros[0] ++ ; }
        //printf("%d é maior que %d\n", numeros[1], numeros[0] );
        } while (numeros[0] < numeros[1]);
    }
}






int main(){

int numeros[5] = {10,20,30,40,50};

//Acesso: Ocorre pelo índice. numeros[0] --> corresponde ao 10
//Então, em uma int [5] teremos 5 índices, mas irão do 0 ao 4. O zero conta como um valor válido na contagem.
exemplo();



    return 0;
}