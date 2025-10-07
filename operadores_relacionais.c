#include <stdio.h>

int main (){

printf("***Aula 07/10***\n");



int a = 10;
int b = 10;


printf("a > b: %d\n", a > b);
printf("a < b: %d\n", a < b);
printf("a <= b: %d\n", a <= b);
printf("a >= b: %d\n", a >= b);
printf("a == b: %d\n", a == b);
printf("a != b: %d\n", a != b);


int x = 5;
float y = 5.0;

char c = 'a';
// Quando você armazena um caracter ele armazena o valor dele na tabela ASCCI (No caso do 'a' é 97, passe o mouse em cima).

printf("x >=y: %d\n", x >=y);
printf("x ==y: %d\n", x ==y);
printf("x !=y: %d\n", x !=y);


printf("x >=c: %d\n", x>=c);
printf("O valor ASCII de %c é %d: \n", c, c);


float numero1 = 10.2;
int numero2 = 10;


printf("numero1 > numero2: %d\n", numero1 > numero2);
printf("numero1 == numero2: %d\n", numero1 == numero2);
//aqui vai ocorrer uma conversão implícita
//posso fazer ocorrer uma conversão explicita desse modo:

//printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
//declarando que numero1 que antes era float, agora é int, e a casa
//decimal vai ser desconsiderada.
    return 0;
}