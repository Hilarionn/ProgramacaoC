#include <stdio.h>

int main() {

    //declarando variáveis

    char nome[50];
    char estado[50];
    int decisao, numero, resultado;
    int maca, laranja, idade;
    float numero1, numero2, altitudegrafica;

    // atribuindo valores

maca = 5;
laranja = 5;
numero1 = 10.5;
numero2 = 20.3;
idade = 18;
altitudegrafica = 36.5;
numero = 4;

//Introdução

    printf("Bem vindo de volta, magnata!\nComo se sente hoje?\n");
    printf("Sentimos sua falta! \n");
    printf("Deixa eu ver aqui nos arquivos.........\n");
    printf("Você está bem diferente desde a última vez. Tá pronto pra aprender novamente?\n(digite 1 para sim e 2 para não)\n");
    scanf("%d", &decisao);

    //if-else

    if(decisao == 1) { printf("sua decisão foi %d!, isso significa que você quer aprender e se tornar um mestre\n da programação! ficamos contentes com isso!! ", decisao); 
    } else {printf("Poxa! Você deveria ser mais grato e se esforçar mais.\n"); }
    

    printf("Digite aqui como se sente:\n");
    scanf("%s", estado);
    printf("É bom saber que você está se sentindo assim.\nTemos muito trabalho a fazer, então vamos começar!\n");
    printf("Insira seu nome, meu caro usuário!\n");
    scanf("%s", nome);

    if(maca > laranja) {printf("Você tem mais maçãs do que laranjas\n"); } else if(maca < laranja) {printf("Você tem mais laranjas do que maçãs!\n"); } else {printf("Você tem a mesma quantidade de maçãs e de laranjas!\n");}

    if(numero1 > numero2) {printf("O número 1 é maior que o número 2\n");}
    //fora if
    printf("Fora If\n");
    //Verifique que não houve nenhuma saída deste comando IF, porquê o número 1 não é maior que o número 2, então
    // o programa pulou a linha durante a leitura.

if(idade >= 18) {printf("Você é maior de idade\n");
printf("Você pode votar!\n");}
//Verifique que a chave neste comando, ao contrário do anterior, fecha com DOIS comandos dentro.


//if else com sinais de comparação diferentes

if(altitudegrafica != 77.4) {printf("A altitude gráfica é diferente de 77.4");} else {printf("A altitude gráfica é igual a 77.4\n");}



//======================================= Conhecendo o operador percentual que calcula o resto da divisão entre dois números ====================
resultado = numero % 2;
if (numero % 2 == 0) {printf("O número é par\n");} 

    return 0;
}
