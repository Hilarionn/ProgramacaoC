#include <stdio.h>

void MoverTorre(int casas){
    if (casas < 5){
        printf("Direita\n");
        MoverTorre(casas + 1);
    }
}

int main(){

MoverTorre(0);


    return 0;
}