#include <stdio.h>
int main(){
 
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

//Definindo variáveis
int opcao, agencia, conta;
float saldo, valor;
saldo = 1000;
//MENU

printf("Escolha uma opção:\n");
printf("1. Verificar Saldo\n");
printf("2. Fazer Depósito\n");
printf("3. Fazer Saque\n");
scanf("%d", &opcao);


//Switchs



switch (opcao)
{
case 1:
    printf("O seu saldo é R$ %2.f\n", saldo);
break;

case 2:
    printf("Digite o valor que deseja depositar:\n");
        scanf("%.2f", &valor);
    printf("Digite a conta que você deseja depositar:\n");
        scanf("%d", &conta);
    printf("Digite agência que você deseja depositar:\n");
        scanf("%i", &agencia);
    printf("Depósito de %.2f foi realizado!\n", valor);
break;

case 3: 
    printf("Digite o valor para o qual você deseja retirar:\n"); 
    scanf("%f", &valor); 

    printf("Saque de %.2f foi realizado!\n", valor);

    printf("Digite a conta que você deseja sacar:\n");
    scanf("%s", conta); 

    printf("Digite agência para a qual você deseja sacar:\n");
    scanf("%i", &agencia);

    break;
default:
printf("Opção Inválida!\n");





}

    return 0;
}