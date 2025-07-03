#include <stdio.h>

int main() {

    printf("\nDesafio Cartas super trunfo\n");
    
    char estado1, estado2; // Estados das cartas (A-H)
    char codigo1[4], codigo2[4]; // Códigos das cartas (ex: A01, B03)
    char nomeCidade1[50], nomeCidade2[50]; // Nomes das cidades
    int populacao1, populacao2; // População das cidades
    float area1, area2; // Áreas das cidades em km²
    float pib1, pib2; // PIB das cidades em bilhões de reais
    int pontosTuristicos1, pontosTuristicos2; // Pontos turísticos das cidades
    float densidadePopulacional1, densidadePopulacional2; // Densidade Populacional
    float pibPercapita1, pibPercapita2; // PIB per capita

    printf("\n----------------------\n");

    //Entrada de dados da primeira carta
    printf("\nDigite os dados da primeira carta!\n");

    printf("\nEstado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1); 
    printf("Código da carta (3 caracteres, ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPercapita1 = (pib1 * 1000000000.0) / populacao1; // Convertendo PIB de bilhões para reais

    printf("\n----------------------\n");

    //Entrada de dados da segunda carta
    printf("\nDigite os dados da segunda carta!\n");

    printf("\nEstado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2); 

    printf("Código da carta (3 caracteres, ex: A01): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPercapita2 = (pib2 * 1000000000.0) / populacao2; // Convertendo PIB de bilhões para reais

    //Exibição dos dados
    // primeira carta

    printf("\n----------------------\n");
    printf("\nCarta 1:\n");
    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibPercapita1);

    //segunda carta

    printf("\n----------------------\n");
    printf("\nCarta 2:\n");
    printf("\nEstado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibPercapita2);


    return 0;
}