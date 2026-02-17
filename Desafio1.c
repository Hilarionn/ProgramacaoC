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
    float densidade_pop1;

    // Variáveis para a segunda cidade
    char letra_2;
    char codigo_2[20];
    char nome_cidade_2[50];
    int populacao_2;
    float area_km2_2;
    float pib_2;
    int pontos_turisticos_2;
    float densidade_pop2;
    
    
    // definindo valor da escolha do usuário
    
    
    int atributo;
    
    
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
    
    // Calculando densidade populacional    
    
    densidade_pop1 = populacao_1 / area_km2_1;
    densidade_pop2 = populacao_2 / area_km2_2;
    
    //Escolher atributos
    
    printf("Qual atributo entre as cartas você deseja escolher para a batalha?\n");
printf("1. População\n2. PIB\n3. Área em KM²\n4. Pontos turísticos\n5. Densidade Populacional\n");
    scanf("%d", &atributo);

    
    
    switch (atributo) {
    
    case 1: 
        if (populacao_1 > populacao_2) { printf("A população 1 é maior que a população 2!\n"); }
        else if (populacao_1 < populacao_2) {printf("A populacao_2 é maior que a população 1!\n");}
        else {printf("As cartas possuem o mesmo número em população!\n");}
    break;
    
    case 2:
        if (pib_1 > pib_2) { printf("O PIB 1 é maior que o PIB 2!\n"); }
        else if (pib_1 < pib_2) {printf("O PIB 1 é menor que o PIB 2!\n");}
        else {printf("As cartas possuem o mesmo número em PIB!\n");}
    break;
    
    case 3: 
        if (area_km2_1 > area_km2_2) { printf("A área 1 é maior que a área 2!\n"); }
        else if (area_km2_1 < area_km2_2) {printf("A área 1 é menor que a área 2!\n");}
        else {printf("A área das duas cartas é igual!\n");}
    break;
    
    case 4:
        if (pontos_turisticos_1 > pontos_turisticos_2) { printf("A primeira carta tem mais pontos turísticos!\n"); }
        else if (pontos_turisticos_1 < pontos_turisticos_2) {printf("A segunda carta tem mais pontos turísticos!\n");}
        else {printf("As cartas tem o mesmo número de pontos turísticos!\n");}
    break;
    
    case 5: 
        if (densidade_pop1 < densidade_pop2) {printf("A densidade populacional da primeira carta é menor do que a da segunda, logo, primeira carta vence!");}
        else if (densidade_pop1 > densidade_pop2) {printf("A densidade populacional da segunda carta é menor do que a da primeira, logo, segunda carta vence!");}
        else {printf("Opção inválida\n");}
    break;
    
    default: printf("Opção inválida!\n");
    break;
        }

    return 0;
}
