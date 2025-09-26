#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado [2];
char codigo [4];
char cidade [50];
int população;
float area;
float PIB;
int pontosturisticos;

  // Área para entrada de dados
  printf("digite seu estado: \n");
  scanf("%s", estado);

  printf("codigo: \n");
  scanf("%s", codigo);

  printf("nome da cidade: \n");
  scanf("%s", cidade);

  printf("população: \n");
  scanf("%d", &população);

  printf("area: \n");
  scanf("%f", &area);

  printf("PIB: \n");
  scanf("%f", &PIB);

  printf("pontos turisticos: \n");
  scanf("%d", &pontosturisticos);

  // Área para exibição dos dados da cidade da carta 1
printf("Carta 1! \n");
printf("Estado: %s \n", estado);
printf("Codigo: %s \n", codigo);
printf("Cidade: %s \n", cidade);
printf("População: %d \n", população);
printf("Area: %f \n", area);
printf("PIB: %f \n", PIB);
printf("Pontos turisticos: %d \n", pontosturisticos);


// Área para entrada de dados da carta 2
printf("digite seu estado: \n");
scanf("%s", estado);
printf("codigo: \n");
scanf("%s", codigo);
printf("nome da cidade: \n");
scanf("%s", cidade);
printf("população: \n");
scanf("%d", &população);
printf("area: \n");
scanf("%f", &area);
printf("Pib: \n");
scanf("%f", &PIB);
printf("pontos turisticos: \n");
scanf("%d", &pontosturisticos);

// Área para exibição de dados da cidade da carta 2
printf("Carta 2! \n");
printf("Estado: %s \n", estado);
printf("Codigo: %s \n", codigo);
printf("Cidade: %s", cidade);
printf("%d \n", população);
printf("Area: %f \n", area);
printf("Pib: %f \n", PIB);
printf("Pontos turisticos: %d \n", pontosturisticos);

return 0; 
} 
