#include <stdio.h>
int main (){

/* int i = 0;

while (i <= 10){
    if(i % 2 != 0){ 
        */  /*Se o RESULTADO da divisão por 2 for 0, (Exemplo:4/2 = 2, 4-4 = 0 -> resto 0) o número é par.
         Se eu quiser alterar, colocar Ímpar eu posso colocar o exclamação antes do
     = 0, pois vai imprimir todos os números onde o resto da divisão for diferente de zero. 
     caso eu queira que seja par eu mudo o printf e o if para == em vez de !=
      printf("O número %d não é par!\n", i);
    }
    i++;
}


/*
numero      → valor da variável
&numero     → endereço onde o número fica salvo na memória

scanf precisa do & porque vai alterar o valor (precisa do endereço).
printf NÃO usa & porque só mostra o valor.
*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/* 
int numero;
do {
printf("Digite um número par para sair do programa\n");
scanf("%d", &numero);

if (numero % 2 == 0) {
    printf("Esse número (%d) é par!\n", numero);
}
else {
    printf("O número (%d) é impar!\n", numero);
}

} while (numero % 2 != 0);

printf("Você digitou um número par! Saindo do programa...\n");

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int numero, i;

printf("Digite um número para calcularmos a tabuada:\n");
scanf("%d,", &numero);
for (i = 0; i < 10; i++)
{    printf("%d x %d = %d\n", i, numero, i * numero);
}
    return 0;
}