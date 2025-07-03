#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int comparar_valores(float valor1, float valor2, int invertido) {
    if (valor1 == valor2) return 0; // empate
    if (invertido) return (valor1 < valor2) ? 1 : 2;
    else return (valor1 > valor2) ? 1 : 2;
}

int main() {
    printf("\nDesafio Cartas Super Trunfo nível Aventureiro!\n");

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPercapita1, pibPercapita2;
    float superPoder1, superPoder2;

    printf("\nDigite os dados da primeira carta:\n");
    printf("Estado (ex: SP): ");
    scanf(" %2s", estado1);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("Nome da cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidade1 = populacao1 / area1;
    pibPercapita1 = (pib1 * 1e9) / populacao1;
    superPoder1 = populacao1 + area1 + (pib1 * 10) + pontosTuristicos1 + (pibPercapita1 / 1000.0) + (1.0 / densidade1);

    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (ex: SP): ");
    scanf(" %2s", estado2);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade: ");
    getchar();
    scanf("%[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidade2 = populacao2 / area2;
    pibPercapita2 = (pib2 * 1e9) / populacao2;
    superPoder2 = populacao2 + area2 + (pib2 * 10) + pontosTuristicos2 + (pibPercapita2 / 1000.0) + (1.0 / densidade2);

    int opcao;

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR vence!)\n");
    printf("Digite a opção: ");
    scanf("%d", &opcao);

    int vencedor;
    printf("\n### RESULTADO DA COMPARAÇÃO ###\n");
    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d | %s: %d\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            vencedor = comparar_valores(populacao1, populacao2, 0);
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            vencedor = comparar_valores(area1, area2, 0);
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: R$ %.2f bi | %s: R$ %.2f bi\n", nomeCidade1, pib1, nomeCidade2, pib2);
            vencedor = comparar_valores(pib1, pib2, 0);
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            vencedor = comparar_valores(pontosTuristicos1, pontosTuristicos2, 0);
            break;
        case 5:
            printf("Atributo: Densidade Demográfica (MENOR vence!)\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", nomeCidade1, densidade1, nomeCidade2, densidade2);
            vencedor = comparar_valores(densidade1, densidade2, 1);
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    if (vencedor == 1)
        printf("\nVencedora: Carta 1 - %s\n", nomeCidade1);
    else if (vencedor == 2)
        printf("\nVencedora: Carta 2 - %s\n", nomeCidade2);
    else
        printf("\nResultado: Empate!\n");

    return 0;
}