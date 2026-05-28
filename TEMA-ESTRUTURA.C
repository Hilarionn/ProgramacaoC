#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// --- Constantes Globais ---

#define MAX_LIVROS 50
#define TAM_STRING 100


// --- Definição da Estrutura(Struct) ---

struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;

};
// --- Função para limpar o Buffer de entrada ---

void limparBufferEntrada () {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função Principal --- 

int main () {

struct Livro biblioteca[MAX_LIVROS];
int totalLivros = 0;
int opcao;

// --- Laço principal do Menu

do {

    //Exibe o Menu de opções
    printf("=================================================\n");
    printf("        BIBLIOTECA - PARTE 1\n");
    printf("=================================================\n");
    printf("1 - Cadastrar novo livro\n");
    printf("2 - Listar todos os livros\n");
    printf("3 - Sair\n");
    printf("-------------------------------------------------\n");
    printf("Escolha uma opção:\n");

    // Lê a opção do usuário
    scanf("%d", &opcao);
    limparBufferEntrada(); // Limpa o '\n' deixado pelo scanf

    // Processamento da opção

    switch (opcao) {
        case 1: //Cadastro de livro
        printf("--- Cadastro de novo livro!\n\n");

            if (totalLivros < MAX_LIVROS) {
                printf("Digite o nome do livro: \n");
                fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                
            }
    }
}

}