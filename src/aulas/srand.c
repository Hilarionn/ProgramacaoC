//Aqui temos a adição de novas bibliotecas, para trabalhar com números aleatórios


#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
int numero_secreto, palpite, opcao, opcao2;


printf("Menu Principal\n");
printf("1. Iniciar Jogo\n");
printf("2. Ver Regras\n");
printf("3. Sair\n");
printf("Escolha uma opção\n");
scanf("%i", &opcao);

switch (opcao)
{
    case 1:
    srand(time(0));
  numero_secreto = rand() % 10;

  
  printf("Digite um número de 0 a 9: \n")
  scanf("%i", &palpite);
  if (numero_secreto == palpite){ printf("Você acertou!"); 
        printf("Numero Secreto: %i\n", numero_secreto);}
  else { printf("Você errou!\n");
        printf("Numero Secreto: %i\n", numero_secreto);}
 //      numero_secreto = rand();  fica ilimitado o número que pode cair

    break;


    case 2:

printf("Digite a opção desejada quanto as regras\n");
printf("1. Regras de randomização\n");
printf("2. Como vencer?\n");
scanf("%i", &opcao2);

switch (opcao2) {
case 1 :
   printf("Opções de randomização:\n ");
      printf("A inclusão das bibliotecas\n'#include <stdlib.h> e #include <time.h>'\nE dos códigos \n'srand(time(0)); numero_secreto = rand() % 10;' \ngarantem a aleatoriedade dos números \n");
      break;

      case 2: 
      printf("Para ganhar, você deve escolher um número\nque será atribuido para a variavel palpite\nEntão o código irá ler seu palpite\nE verificar se você acertou o número aleatório gerado.\n");
      break;
    default: printf("Opção inválida.");
      break;
      
    }

    break;

    case 3:
    printf("Você saiu com sucesso!");
    break;

    default: 
    printf("Opção Inválida!\n");
    break;
}


return 0;
}