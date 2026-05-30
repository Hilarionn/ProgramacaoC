#include <stdio.h>
#include <string.h>



// -------- Inclusão das constantes globais
#define MAX_PAISES 5

// -------- Função para limpar o buffer de entrada
void LimparBufferEntrada (){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}


// ------------- Definindo as Structs

struct TERRITORIO {
    char nome[30];
    char cor[10];
    int tropas;
};

// ------------- Função principal

int main (){

int escolha;
struct TERRITORIO paises[MAX_PAISES];
// --------------- Imprimindo MENU do jogo

do {
    printf("==========================================\n");
    printf("*** BEM VINDO AO JOGO WAR***\n");
    printf("==========================================\n");
// ---------------- Escolhendo as opções

printf("Digite a opção desejada: \n");
printf("1. CADASTRAR PAÍSES\n");
printf("2. LISTAR PAÍSES\n");
printf("3. ENCERRAR PROGRAMA\n");

scanf("%d", &escolha);
LimparBufferEntrada();
switch (escolha) {
    case 1:
for(int i = 0; i < MAX_PAISES; i++){
    printf("Nome do território %d: ", i + 1);
    scanf("%s", paises[i].nome);
    LimparBufferEntrada();
    printf("Cor do exército: ");
    scanf("%s", paises[i].cor);
    LimparBufferEntrada();
    printf("Número de tropas: ");
    scanf("%d",&paises[i].tropas);
    LimparBufferEntrada();
}
    break;

    case 2:
    for (int i = 0; i < MAX_PAISES; i++){

    
  printf("País %d:\n", i + 1);
   printf("Nome: %s\n",paises[i].nome);
   printf("Cor: %s\n",paises[i].cor);
   printf("Tropas: %d\n",paises[i].tropas);
    }
    break;

    case 3:
     printf("Encerrando o programa...\n");
    break;

    default:
    
    printf("Opção inválida! Por favor, escolha uma das opções listadas:\n");
}

}
while (escolha != 3);
    return 0;
}
