#include <stdio.h>
#include <stdbool.h>

// Função para comparar dois valores e determinar o vencedor
void comparar_atributo(const char *atributo, float valor1, float valor2, int invertido) {
    bool resultado = invertido ? (valor1 < valor2) : (valor1 > valor2);
    printf("%s: Carta %d venceu (%d)\n", atributo, resultado ? 1 : 2, resultado);

}

int main() {
    printf("\nDesafio Cartas Super Trunfo\n");

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPercapita1, pibPercapita2;
    float superPoder1, superPoder2;

    printf("\n----------------------\n");

    // Entrada da primeira carta
    printf("\nDigite os dados da primeira carta!\n");
    printf("\nEstado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado1);
    printf("Código da carta (3 caracteres, ex: A01): ");
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da primeira carta
    densidadePopulacional1 = (float) populacao1 / area1;
    pibPercapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 10) + pontosTuristicos1 + (pibPercapita1 / 1000.0) + (1.0 / densidadePopulacional1);

    printf("\n----------------------\n");

    // Entrada da segunda carta
    printf("\nDigite os dados da segunda carta!\n");
    printf("\nEstado (letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);
    printf("Código da carta (3 caracteres, ex: A01): ");
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da segunda carta
    densidadePopulacional2 = (float) populacao2 / area2;
    pibPercapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 10) + pontosTuristicos2 + (pibPercapita2 / 1000.0) + (1.0 / densidadePopulacional2);

    //Exibição dos dados
    //primeira carta

    printf("\n----------------------\n");
    printf("\nCarta 1:\n");
    printf("\nEstado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
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
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per capita: R$ %.2f\n", pibPercapita2);


    printf("\n----------------------\n");

    // Comparação
    printf("\nComparação de Cartas:\n");

    comparar_atributo("\nPopulação", populacao1, populacao2, 0);
    comparar_atributo("Área", area1, area2, 0);
    comparar_atributo("PIB", pib1, pib2, 0);
    comparar_atributo("Pontos Turísticos", pontosTuristicos1, pontosTuristicos2, 0);
    comparar_atributo("Densidade Populacional", densidadePopulacional1, densidadePopulacional2, 1);
    comparar_atributo("PIB per Capita", pibPercapita1, pibPercapita2, 0);
    comparar_atributo("Super Poder", superPoder1, superPoder2, 0);

    return 0;
}
