#include <stdio.h>

// Função para comparar dois valores e determinar o vencedor
int comparar_valores(float valor1, float valor2, int invertido) {
    if (invertido) {
        return (valor1 < valor2);
    } else {
        return (valor1 > valor2);
    }
}

int main() {
    printf("\nDesafio Cartas Super Trunfo\n");

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadePopulacional1, densidadePopulacional2;
    float pibPercapita1, pibPercapita2;
    float superPoder1, superPoder2;



    printf("\n----------------------\n");

    // Entrada da primeira carta
    printf("\nDigite os dados da primeira carta!\n");
    printf("Estado (ex: SP): ");
    scanf(" %2s", estado1);

    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da cidade: ");
    getchar(); // limpa buffer do \n
    scanf("%[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

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
    printf("Estado (ex: SP): ");
    scanf(" %2s", estado2);

    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo2);

    printf("Nome da cidade: ");
    getchar(); // limpa buffer
    scanf("%[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

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

    printf("\n----------------------\n");

    // Exibição das cartas
    printf("\nCarta 1 - %s (%s):\n", nomeCidade1, estado1);
    printf("População: %d\n", populacao1);

    printf("\nCarta 2 - %s (%s):\n", nomeCidade2, estado2);
    printf("População: %d\n", populacao2);

    printf("\n----------------------\n");

    // Comparação de apenas um atributo: POPULAÇÃO
    printf("\nComparação de Cartas (Atributo: População): \n");

    printf("Carta 1 - %s (%s): %d habitantes.\n", nomeCidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes.\n", nomeCidade2, estado2, populacao2);

    int vencedor = comparar_valores((float) populacao1, (float) populacao2, 0);

    if (vencedor == 1) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else {
        printf("\nResultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    }

    return 0;
}