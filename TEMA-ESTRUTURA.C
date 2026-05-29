#include <stdint.h> 
#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

// --- Constantes Globais ---

#define MAX_LIVROS 50
#define TAM_STRING 100

// --- Definição da Struct ---

struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
};

// --- Função para limpar o buffer ---

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// --- Função Principal ---

int main() {

    struct Livro biblioteca[MAX_LIVROS];

    int totalLivros = 0;
    int opcao;

    // --- Menu principal ---

    do {

        printf("\n=================================================\n");
        printf("              BIBLIOTECA - PARTE 1\n");
        printf("=================================================\n");
        printf("1 - Cadastrar novo livro\n");
        printf("2 - Listar todos os livros\n");
        printf("3 - Sair\n");
        printf("-------------------------------------------------\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);
        limparBufferEntrada();

        switch(opcao) {

            // --- Cadastro ---
            case 1:

                printf("\n--- Cadastro de novo livro ---\n");

                if (totalLivros < MAX_LIVROS) {

                    printf("Digite o nome do livro: ");
                    fgets(biblioteca[totalLivros].nome, TAM_STRING, stdin);

                    printf("Digite o autor: ");
                    fgets(biblioteca[totalLivros].autor, TAM_STRING, stdin);

                    printf("Digite a editora: ");
                    fgets(biblioteca[totalLivros].editora, TAM_STRING, stdin);

                    printf("Digite a edicao: ");
                    scanf("%d", &biblioteca[totalLivros].edicao);

                    limparBufferEntrada();

                    // Remove o \n do fgets
                    biblioteca[totalLivros].nome[
                        strlen(biblioteca[totalLivros].nome) - 1
                    ] = '\0';

                    biblioteca[totalLivros].autor[
                        strlen(biblioteca[totalLivros].autor) - 1
                    ] = '\0';

                    biblioteca[totalLivros].editora[
                        strlen(biblioteca[totalLivros].editora) - 1
                    ] = '\0';

                    totalLivros++;

                    printf("\nLivro cadastrado com sucesso!\n");

                } else {
                    printf("\nLimite de livros atingido!\n");
                }

                break;

            // --- Listagem ---
            case 2:

                printf("\n--- Lista de Livros ---\n");

                if (totalLivros == 0) {

                    printf("Nenhum livro cadastrado.\n");

                } else {

                    for (int i = 0; i < totalLivros; i++) {

                        printf("\nLivro %d\n", i + 1);
                        printf("Nome: %s\n", biblioteca[i].nome);
                        printf("Autor: %s\n", biblioteca[i].autor);
                        printf("Editora: %s\n", biblioteca[i].editora);
                        printf("Edicao: %d\n", biblioteca[i].edicao);
                    }
                }

                break;

            // --- Sair ---
            case 3:
                printf("\nEncerrando o programa...\n");
                break;

            // --- Opção inválida ---
            default:
                printf("\nOpcao invalida!\n");
        }

    } while(opcao != 3);

    return 0;
}