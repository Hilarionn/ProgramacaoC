#include <stdio.h>
int main(){
 





    ///////////////////////////////////////////////////////CHAR/////////////////////////////////////////////////////




//Uso do Switch

/* char variavel;

printf("Digite um valor\n");
scanf("%c", &variavel);

    switch (variavel) {

        case 'a':
            printf("Código a ser executado se variável == a\n");
            printf("Teste do case 1");
        break;

        //O break é importante, se não o código executado não para, ele lê o case 1 e depois lê o case 2.

        case 'b':
            printf("Código a ser executado se variável == b\n;");
        break;

        default: 
            printf("Código a ser executado se a variável não for A nem B\n");





    }
*/


///////////////////////////////////////////////////////BANCO/////////////////////////////////////////////////////




/*
//Definindo variáveis
    // Definindo variáveis
    int opcao, agencia, conta;
    float saldo = 1000.0; // Inicializado com valor
    float valor;

    // MENU
    printf("--- BANCO DIGITAL ---\n");
    printf("1. Verificar Saldo\n");
    printf("2. Fazer Deposito\n");
    printf("3. Fazer Saque\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    // Switch Principal
    switch (opcao) {
        case 1:
            printf("\nO seu saldo atual e: R$ %.2f\n", saldo);
            break;

        case 2:
            printf("\nDigite o valor do deposito: R$ ");
            scanf("%f", &valor);
            printf("Digite a conta: ");
            scanf("%d", &conta);
            printf("Digite a agencia: ");
            scanf("%d", &agencia);
            
            saldo += valor; // Atualiza o saldo (opcional)
            printf("Deposito de R$ %.2f realizado com sucesso!\n", valor);
            break;

        case 3:
            printf("\nDigite o valor do saque: R$ ");
            scanf("%f", &valor);
            
            if (valor <= saldo) {
                printf("Digite a conta: ");
                scanf("%d", &conta);
                printf("Saque de R$ %.2f realizado!\n", valor);
                saldo -= valor; // Atualiza o saldo
            } else {
                printf("Saldo insuficiente!\n");
            }
            break;

        default:
            printf("\nOpcao Invalida!\n");
            break;
    }
*/


///////////////////////////////////////////////////////DIA/////////////////////////////////////////////////////

/*

int dia;
printf("Entre o valor do dia!\n");
scanf("%i", &dia);

if (dia == 1) {printf("Domingo");

} else if (dia == 2) { printf("Segunda-feira");

} else if (dia == 3) { printf("Terça-feira");

} else if (dia == 4) {printf("Quarta-feira");

} else if (dia == 5) {printf("Quinta-feira");

} else if (dia == 6) {printf("Sexta-feira");

} else {printf("Sábado");}

*/

int dia = 3;
printf("Entre o valor do dia!\n");
scanf("%i", &dia);

switch (dia){

case 1:
printf("Domingo\n");
break;

case 2:
printf("Segunda-feira\n");
break;

case 3:
printf("Terça-feira\n");
break;

case 4:
printf("Quarta-feira\n");
break;

case 5:
printf("Quinta-feira\n");
break;

case 6:
printf("Sexta-feira\n");
break;

case 7:
printf("Sábado\n");
break;

default: printf("Dia inválido!\n");




}
    return 0;
}