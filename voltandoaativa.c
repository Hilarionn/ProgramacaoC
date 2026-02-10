#include <stdio.h>

int main() {
    char nome[50];
    char estado[50];
    int decisao;
    int maca;
    int laranja;
maca = 5;
laranja = 3;

//Introdução
    printf("Bem vindo de volta, magnata!\nComo se sente hoje?\n");
    printf("Sentimos sua falta! \n");
    printf("Deixa eu ver aqui nos arquivos.........\n");
    printf("Você está bem diferente desde a última vez. Tá pronto pra aprender novamente?\n(digite 1 para sim e 2 para não)\n");
    scanf("%d", &decisao);

    if(decisao == 1) { printf("sua decisão foi %d!, isso significa que você quer aprender e se tornar um mestre\n da programação! ficamos contentes com isso!! ", decisao); 
    } else {printf("Poxa! Você deveria ser mais grato e se esforçar mais.\n"); }
    

    printf("Digite aqui como se sente:\n");
    scanf("%s", estado);
    printf("É bom saber que você está se sentindo assim.\nTemos muito trabalho a fazer, então vamos começar!\n");
    printf("Insira seu nome, meu caro usuário!\n");
    scanf("%s", nome);

    if(maca > laranja) {printf("Você tem mais maçãs do que laranjas"); } else if(maca < laranja) {printf("Você tem mais laranjas do que maçãs!"); } else {printf("Você tem a mesma quantidade de maçãs e de laranjas!");}

    return 0;
}