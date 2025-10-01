#include <stdio.h>

int main() {
    // Variáveis para a primeira cidade
    char letra_1;
    char codigo_1[20];
    char nome_cidade_1[50];
    int populacao_1;
    float area_km2_1;
    float pib_1;
    int pontos_turisticos_1;

    // Variáveis para a segunda cidade
    char letra_2;
    char codigo_2[20];
    char nome_cidade_2[50];
    int populacao_2;
    float area_km2_2;
    float pib_2;
    int pontos_turisticos_2;

    // Introdução
    printf("=== Bem-vindo ao jogo Super Trunfo ===\n");
    printf("Aqui você vai definir as estatísticas de duas cidades de sua escolha!\n\n");

    // Entrada de dados para a primeira cidade
    printf("--- Cidade 1 ---\n");
    printf("Digite a letra do Estado (De A até H): ");
    scanf(" %c", &letra_1);

    printf("Digite o código da cidade(Letra + Número ex: A01): ");
    scanf("%s", codigo_1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade_1);

    printf("Digite a população: ");
    scanf("%d", &populacao_1);

    printf("Digite a área em km²: ");
    scanf("%f", &area_km2_1);

    printf("Digite o PIB: ");
    scanf("%f", &pib_1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_1);

    printf("\n");

    // Entrada de dados para a segunda cidade
    printf("--- Cidade 2 ---\n");
    printf("Digite a letra do Estado (De A até H): ");
    scanf(" %c", &letra_2);

    printf("Digite o código da cidade(Letra+Número ex: A01): ");
    scanf("%s", codigo_2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", nome_cidade_2);

    printf("Digite a população: ");
    scanf("%d", &populacao_2);

    printf("Digite a área em km²: ");
    scanf("%f", &area_km2_2);

    printf("Digite o PIB: ");
    scanf("%f", &pib_2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_2);

    // Exibir os dados
    printf("\n=== Dados das Cidades ===\n");

    printf("\nCidade 1: %s\n", nome_cidade_1);
    printf("Letra: %c\n", letra_1);
    printf("Código: %s\n", codigo_1);
    printf("População: %d Habitantes\n", populacao_1);
    printf("Área: %.2f km²\n", area_km2_1);
    printf("PIB: %.2f\n", pib_1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_1);

    printf("\nCidade 2: %s\n", nome_cidade_2);
    printf("Letra: %c\n", letra_2);
    printf("Código: %s\n", codigo_2);
    printf("População: %d Habitantes\n", populacao_2);
    printf("Área: %.2f km²\n", area_km2_2);
    printf("PIB: %.2f\n", pib_2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos_2);

    return 0;
}
