#include <stdio.h>
int main(){
/*
Incremento (++)
Decremento (--)
Pré-incremento ++a
Pós-incremento a++
Pré-decremento --a
Pós-decremento a--
*/

int numero1 = 1, resultado;


printf("Antes incremento: %d \n", numero1);
resultado = numero1++;
printf("Após pré incremento - numero1: %d - resultado: %d \n", numero1, resultado);
//numero1 = numero1 + 1;
//numero1 += 1;
// Pós incremento:
// Resultado = numero1;
//numero++;
numero1--;
printf("Após pós decremento - numero1: %d - resultado: %d \n", numero1, resultado);
//resultado = numero1--;

//numero1 = numero1 - 1;
//numero1 -= 1;
return 0;
}



/*#include <stdio.h>

int main() {
    int x;

    // Pré-incremento
    x = 5;
    printf("Pré-incremento (++x): %d\n", ++x);

    // Pós-incremento
    x = 5;
    printf("Pós-incremento (x++): %d\n", x++);
    printf("Depois do pós-incremento: %d\n", x);

    // Pré-decremento
    x = 5;
    printf("Pré-decremento (--x): %d\n", --x);

    // Pós-decremento
    x = 5;
    printf("Pós-decremento (x--): %d\n", x--);
    printf("Depois do pós-decremento: %d\n", x);

    return 0;
}
*/