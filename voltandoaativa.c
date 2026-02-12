#include <stdio.h>

int main() {

    //declarando variáveis

    char nome[50];
    char estado[50];
    int decisao, numero, resultado, nota;
    int maca, laranja, banana, idade, a, b;
    float numero1, numero2, altitudegrafica, renda;

    // atribuindo valores

maca = 5;
laranja = 5;
numero1 = 10.5;
numero2 = 20.3;
idade = 18;
altitudegrafica = 36.5;
numero = 4;
banana = 5;
a=5;
b=10;
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



//============================ Operadores Lógicos ============================
/* Os operadores lógicos são: && (E), || (OU) e ! (NÃO) 
eles funcionam das seguintes maneiras:
o && retorna verdadeiro se ambas as condições forem verdadeiras
o || retorna verdadeiro se pelo menos uma das condições for verdadeira
o ! inverte o valor lógico de uma condição, ou seja, se a condição for verdadeira
ela se torna falsa, e vice-versa. 
É como a passagem de corrente em eletrônica*/

//exemplo de código com operadores lógicos:
if (numero > 0 && numero < 10) {printf("O número é positivo e menor que 10\n");} else {printf("O número é negativo ou maior ou igual a 10\n");}
if (numero < 0 || numero > 10) {printf("O número é negativo ou maior que 10\n");} else {printf("O número é positivo e menor ou igual a 10\n");}
if (!(numero > 0)) {printf("O número não é positivo\n");} else {printf("O número é positivo\n");}  

if (a > b && numero % 2 == 0) {printf("O número é maior que b e é par\n");} else {printf("O número é menor ou igual a b ou é ímpar\n");}
if ( a > 0 && b > 0) {printf("Ambos os números são positivos\n");} else {printf("Pelo menos um dos números não é positivo\n");}
if (a > 0 || b > 0) {printf("Pelo menos um dos números é positivo\n");} else {printf("Nenhum dos números é positivo\n");}
if (!(a > 0)) {printf("a não é positivo\n");} else {printf("a é positivo\n");}
//se a variável for zero, irá inverter e ela valerá 1.






//Condição aninhada
if (banana > laranja) { if (laranja > maca) {printf("banana é maior que laranja e laranja é maior que maca\n");} else {printf("banana é maior que laranja, mas laranja não é igual a maçã\n");} } else {printf("banana não é maior que laranja\n");}


//Estruturas de condições encadeadas

printf("Digita sua idade\n");
scanf("%d", &idade);
//Criança < 12 anos
//Adolescente >= 12 e < 18 anos
//Adulto >= 18 e < 60 anos
//Idoso >= 60 anos
    if(idade < 12){
        printf("Você é uma criança.\n");
    } else if (idade >= 12 && idade < 18) {printf("Você é um adolescente!\n");}
        else if (idade >= 18 && idade < 60) { printf("Você é um adulto!\n");}
        else {printf("Você é um idoso!");}

scanf("%d" ,nota);
        if(nota >= 90) { printf("Conceito A!\n");}
            else if (nota >= 80) {printf("Conceito B!\n");}
            else if (nota >= 70) {printf("Conceito C!\n");}
            else if (nota >= 60) {printf("Conceito D!\n");}
            else {printf("Reprovado!");}




printf("Digite sua idade:\n");
scanf("%d ", &idade);
printf("Digite sua renda:\n");
scanf("%f ", &renda);


            if (idade <= 18 || idade >= 60 ) {
                printf("Aceito com relação a idade\n");
             } else {
                printf("Você não atende os critérios devido a idade!\n");
            }

              if (renda <  2000 ) { printf("Você tem direito ao desconto\n");}
              else { printf("Você não tem direito ao desconto devido a renda!\n");}
    return 0;
}
