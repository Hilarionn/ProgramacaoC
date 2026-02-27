#include <stdio.h>

void movimento_cavalo(int casas) {
for(casas = 1; casas <= 2; casas++) {
    printf("O cavalo andou %d casas pra cima!\n", casas);
int casas_direita = 0;
        casas_direita ++;
    do {
        printf("O cavalo andou %d casa para a direita!\n", casas_direita);

    }
while (casas <= 2);
}

}

int main(){


    movimento_cavalo(2);



    return 0;
}