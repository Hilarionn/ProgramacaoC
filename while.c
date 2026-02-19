#include <stdio.h>
int main () {
    
   int i = 1;
   
   while (i <= 5) { //Enquanto i é menor ou igual a 5, executar o printf
       
       printf("%d\n", i); // Comando executado pela linha anterior
       i++; //Comando a ser executado logo em sequência do printf. Se comentar essa linha, vai imprimir a variável até o programa travar. 
       //Pois o incremento nunca acontece e a variável nunca vai ser maior que 1.


       //Você pode fazer assim: i = i + 4; ou i = i + g; (Tendo definido valor pra uma variável chamada G).
   }
    
    return 0;
}
