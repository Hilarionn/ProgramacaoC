#include <stdio.h>
int main () {
    
   int i = 1;
   
   while (i <= 5) {
       
       printf("%d\n", i);
       i = i + 4 ; //Se comentar essa linha, vai imprimir a variável até o programa travar.
       //Pois a variável nunca vai ser maior que 1.


       //Você pode fazer assim: i = i + 4; ou i = i + g; (Tendo definido valor pra uma variável chamada G).
   }
    
    return 0;
}
    