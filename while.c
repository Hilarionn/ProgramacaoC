#include <stdio.h>
int main () {
    
   int i = 1;
   
   while (i <= 5) {
       
       printf("%d\n", i);
       i++; //Se comentar essa linha, vai imprimir a variável até o programa travar.
       //Pois a variável nunca vai ser maior que 1.
   }
    
    
    