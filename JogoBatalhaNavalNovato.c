#include <stdio.h>

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0};

    // Posicionar navio horizontal em linha 3, colunas G-I (índices: linha 2, colunas 6,7,8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][6 + i] = 3;
    }

    // Posicionar navio vertical em coluna D, linhas 6-8 (índices: linhas 5,6,7; coluna 3)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][3] = 3;
    }

    // Imprimir cabeçalho (letras das colunas)
    printf("  "); // Espaço para alinhar com os números das linhas
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    // Imprimir o tabuleiro com números nas linhas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Números das linhas (1 a 10)
        if (i + 1 < 10) printf(" "); // Ajuste de espaço para alinhamento de 1 dígito
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}










