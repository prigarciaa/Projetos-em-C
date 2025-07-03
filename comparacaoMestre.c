#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int comparar_valores(float valor1, float valor2, int invertido) {
    if (valor1 == valor2) return 0; // empate
    if (invertido) return (valor1 < valor2) ? 1 : 2;
    else return (valor1 > valor2) ? 1 : 2;
}

float obter_valor(int atributo, int invertido, int carta) {
    extern int populacao1, populacao2, pontosTuristicos1, pontosTuristicos2;
    extern float area1, area2, pib1, pib2, densidade1, densidade2;

    switch (atributo) {
        case 1: return carta == 1 ? populacao1 : populacao2;
        case 2: return carta == 1 ? area1 : area2;
        case 3: return carta == 1 ? pib1 : pib2;
        case 4: return carta == 1 ? pontosTuristicos1 : pontosTuristicos2;
        case 5: return carta == 1 ? densidade1 : densidade2;
        default: return 0;
    }
}

void mostrar_nome_atributo(int atributo) {
    switch (atributo) {
        case 1: printf("População"); break;
        case 2: printf("Área"); break;
        case 3: printf("PIB"); break;
        case 4: printf("Pontos Turísticos"); break;
        case 5: printf("Densidade Demográfica"); break;
    }
}

int main() {
    
    printf("\nDesafio Final: Super Trunfo - Comparação Avançada!\n");

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidade1, densidade2;
    float pibPercapita1, pibPercapita2;
    float superPoder1, superPoder2;

    // Cadastro da primeira carta
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
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da segunda carta
    printf("\nDigite os dados da segunda carta:\n");
    printf("Estado (ex: SP): ");
    scanf(" %2s", estado2);
    printf("Código da carta (ex: A01): ");
    scanf(" %3s", codigo2);
    printf("Nome da cidade:");
    getchar();
    scanf("%[^\n]", nomeCidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    printf("\nEscolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR vence)\n");
    printf("Digite a opção: ");
    scanf("%d", &atributo1);

    // Menu dinâmico para segunda escolha
    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    for (int i = 1; i <= 5; i++) {
        if (i == atributo1) continue;
        printf("%d - ", i);
        mostrar_nome_atributo(i);
        printf("\n");
    }
    printf("Digite a opção: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2 || atributo1 < 1 || atributo1 > 5 || atributo2 < 1 || atributo2 > 5) {
        printf("\nAtributos inválidos ou repetidos!\n");
        return 1;
    }

    // Comparação dos dois atributos
    float valorA1 = obter_valor(atributo1, atributo1 == 5, 1);
    float valorA2 = obter_valor(atributo1, atributo1 == 5, 2);
    float valorB1 = obter_valor(atributo2, atributo2 == 5, 1);
    float valorB2 = obter_valor(atributo2, atributo2 == 5, 2);

    float soma1 = valorA1 + valorB1;
    float soma2 = valorA2 + valorB2;

    printf("\n### RESULTADO DA COMPARAÇÃO ###\n");
    printf("%s:\n", nomeCidade1);
    printf("- "); mostrar_nome_atributo(atributo1); printf(": %.2f\n", valorA1);
    printf("- "); mostrar_nome_atributo(atributo2); printf(": %.2f\n", valorB1);
    printf("- Soma: %.2f\n", soma1);

    printf("%s:\n", nomeCidade2);
    printf("- "); mostrar_nome_atributo(atributo1); printf(": %.2f\n", valorA2);
    printf("- "); mostrar_nome_atributo(atributo2); printf(": %.2f\n", valorB2);
    printf("- Soma: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("\nVencedora: Carta 1 - %s\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("\nVencedora: Carta 2 - %s\n", nomeCidade2);
    else
        printf("\nResultado: Empate!\n");

    return 0;
}