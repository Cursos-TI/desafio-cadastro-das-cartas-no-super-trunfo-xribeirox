#include <stdio.h>

int main(){

  // INSERÇAO DAS VARIAVEIS;
  char nome[50];
  int populacao;
  int pontosturisticos;
  float area;
  float pib;
  
  //RECOLHIMENTO DE DADOS COM SCANF;
  printf("Qual o Nome da sua cidade?\n");
  scanf("%s", &nome);

  printf("Qual a População da cidade?\n");
  scanf("%d", &populacao);

  printf("Qual a Area em KM da cidade?\n");
  scanf("%f", &area);

  printf("Qual o PIB da cidade?\n");
  scanf("%f", &pib);

  printf("Quantos pontos turisticos?\n");
  scanf("%d", &pontosturisticos);

  //CONFIRMAÇAO DE DADOS OBTIDOS;
  printf("\nCidade cadastrada com sucesso.\n");

  //VISUALIZAÇAO DOS DADOS OBTIDOS;
  printf("\nNome: %s\n", nome);
  printf("População: %d\n", populacao);
  printf("Área em KM: %.2f\n", area);
  printf("PIB: R$%.2f\n", pib);
  printf("Pontos Turísticos: %d\n", pontosturisticos);

  return 0;

  }