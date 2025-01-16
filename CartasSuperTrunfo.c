#include <stdio.h>

int main() {
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontosturisticos;

    printf("Cadastre sua Cidade com as Informações solicitadas abaixo.\n")

    printf("Qual o nome da sua Cidade?\n");
    scanf("%s", &nome);

    printf("Qual a População de sua Cidade?\n");
    scanf("%d", &populacao);
    
    printf("Qual a Área em KM² de sua Cidade?\n");
    scanf("%f", &area);

    printf("Qual o PIB em R$ de sua Cidade?\n");
    scanf("%f", &pib);

    printf("Quantos Pontos Turísticos sua Cidade possui?\n");
    scanf("%f", &pontosturisticos);

    printf("Você cadastrou a cidade: %s, Confira o cadastro abaixo!\n", nome);
    printf("Cidade Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Area KM²: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Número de Pontos Túristicos: %d\n", pontosturisticos);

    printf("\nCidade Cadastrada com Sucesso!\n");
    
    return 0;
}
