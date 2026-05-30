#include <stdio.h>

int main () {

   //Definindo as variáveis da primeira carta
char Estado[30];
char Codigo[10];
char Nome_cidade[50];
int Populacao;
float Area;
float PIB;
int Pontos_turisticos;
// Definindo as variáveis da segunda carta
char Estado2[30];
char Codigo2[10];
char Nome_cidade2[50];
int Populacao2;
float Area2;
float PIB2;
int Pontos_turisticos2;
 
   

//Entrada de dados para a primeira carta

printf("Digite a letra do Estado (De A até H): ");
    scanf(" %s", Estado);  
printf("Digite o código do estado (Letra e número Ex: A01):");
    scanf(" %s", Codigo);
printf("Digite o nome da cidade:");
    scanf(" %s", Nome_cidade);
printf("Digite o PIB:");
    scanf(" %f", &PIB);
printf("Digite a área em km²: ");
    scanf("%f", &Area); 
printf("Digite a população:");
    scanf(" %d", &Populacao);
printf("Digite o número de pontos turísticos:");    
    scanf(" %d", &Pontos_turisticos);   

//Entrada de dados para a segunda carta
printf("Agora, digite os dados da segunda carta! \n");

printf("Digite a letra do Estado 2 (De A até H): ");
    scanf(" %s", Estado2);
printf("Digite o código do estado 2(Letra e número Ex: A01):");
    scanf(" %s", Codigo2);
printf("Digite o nome da cidade 2:"); 
    scanf(" %s", Nome_cidade2);
printf("Digite o PIB 2:");
    scanf(" %f", &PIB2);
printf("Digite a área em km² 2: ");
    scanf("%f", &Area2);
printf("Digite a população 2:");
    scanf(" %d", &Populacao2);
printf("Digite o número de pontos turísticos 2:");
    scanf(" %d", &Pontos_turisticos2);
// Comparando os dados


 // Calculando PIB per capita e densidade populacional
float PIB_per_capita = PIB / Populacao;
float Densidade_populacional = Populacao / Area;
float PIB_per_capita2 = PIB2 / Populacao2;
float Densidade_populacional2 = Populacao2 / Area2;



 if (Populacao > Populacao2) {
    printf("A primeira carta tem maior população.\n");
} else if (Populacao2 > Populacao) {
    printf("A segunda carta tem maior população.\n");
} else {
    printf("As duas cartas têm a mesma população.\n");
}
 if (Area > Area2) {
    printf("A primeira carta tem maior área.\n");
} else if (Area2 > Area) {          
    printf("A segunda carta tem maior área.\n");
} else {
    printf("As duas cartas têm a mesma área.\n");
}
 if (PIB > PIB2) {
    printf("A primeira carta tem maior PIB.\n");
} else if (PIB2 > PIB) {
    printf("A segunda carta tem maior PIB.\n");
} else {
    printf("As duas cartas têm o mesmo PIB.\n");
}
 if (Pontos_turisticos > Pontos_turisticos2) {
    printf("A primeira carta tem mais pontos turísticos.\n");
} else if (Pontos_turisticos2 > Pontos_turisticos) {
    printf("A segunda carta tem mais pontos turísticos.\n");
} else {
    printf("As duas cartas têm o mesmo número de pontos turísticos.\n");
}
 if (Densidade_populacional < Densidade_populacional2) {
    printf("A primeira carta tem menor densidade populacional.\n");
} else if (Densidade_populacional2 < Densidade_populacional) {
    printf("A segunda carta tem menor densidade populacional.\n");
} else {
    printf("As duas cartas têm a mesma densidade populacional.\n");
}
 if (PIB_per_capita > PIB_per_capita2) {
    printf("A primeira carta tem maior PIB per capita.\n");
} else if (PIB_per_capita2 > PIB_per_capita) {
    printf("A segunda carta tem maior PIB per capita.\n");
} else {
    printf("As duas cartas têm o mesmo PIB per capita.\n");
}   
// Definindo a carta vencedora
if ( (Populacao > Populacao2) + (Area > Area2) + (PIB > PIB2) + (Pontos_turisticos > Pontos_turisticos2) + (Densidade_populacional < Densidade_populacional2) + (PIB_per_capita > PIB_per_capita2)  >
     (Populacao2 > Populacao) + (Area2 > Area) + (PIB2 > PIB) + (Pontos_turisticos2 > Pontos_turisticos) + (Densidade_populacional2 < Densidade_populacional) + (PIB_per_capita2 > PIB_per_capita) ) {
    printf("A primeira carta é a vencedora!\n");
} else if ( (Populacao2 > Populacao) + (Area2 > Area) + (PIB2 > PIB) + (Pontos_turisticos2 > Pontos_turisticos) + (Densidade_populacional2 < Densidade_populacional) + (PIB_per_capita2 > PIB_per_capita)  >
            (Populacao > Populacao2) + (Area > Area2) + (PIB > PIB2) + (Pontos_turisticos > Pontos_turisticos2) +   (Densidade_populacional < Densidade_populacional2) + (PIB_per_capita > PIB_per_capita2) ) {
    printf("A segunda carta é a vencedora!\n");
} else {
    printf("As duas cartas empataram!\n");
  
}
 return 0;
}