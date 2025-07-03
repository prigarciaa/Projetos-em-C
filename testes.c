#include <stdio.h>

// Função para aplicar uma habilidade especial no tabuleiro
void aplicarHabilidade(int tabuleiro[10][10], int habilidade[3][5], int origemX, int origemY) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (habilidade[i][j] == 1) {
                int x = origemX - 1 + i;  // linha ajustada
                int y = origemY - 2 + j;  // coluna ajustada
                if (x >= 0 && x < 10 && y >= 0 && y < 10) {
                    if (tabuleiro[x][y] != 3) { // Não sobrescreve navios
                        tabuleiro[x][y] = 5;    // Marca área afetada
                    }
                }
            }
        }
    }
}

int main() {
    // Nível Novato - Tabuleiro Base
    char colunas[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10] = {0};

    // Posicionar navio horizontal (linha 3, colunas G-I)
    for (int i = 0; i < 3; i++) {
        tabuleiro[2][6 + i] = 3;
    }

    // Posicionar navio vertical (coluna D, linhas 6-8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][3] = 3;
    }

    // Nível Aventureiro - Diagonais
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;           // Diagonal principal
        tabuleiro[i][9 - i] = 3;       // Diagonal secundária
    }

    // Nível Mestre - Habilidades Especiais
    int cone[3][5] = {0};
    int cruz[3][5] = {0};
    int octaedro[3][5] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            // CONE
            if (j >= 2 - i && j <= 2 + i) {
                cone[i][j] = 1;
            }

            // CRUZ
            if (i == 1 || j == 2) {
                cruz[i][j] = 1;
            }

            // OCTAEDRO
            if ((i == 0 || i == 2) && j == 2) {
                octaedro[i][j] = 1;
            }
            if (i == 1 && j >= 1 && j <= 3) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Mostrar tabuleiro inicial
    printf("Tabuleiro com navios posicionados:\n\n");
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) printf(". ");
            else if (tabuleiro[i][j] == 3) printf("N ");
        }
        printf("\n");
    }

    // Exibir habilidades especiais
    printf("\nHabilidade CONE:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade CRUZ:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade OCTAEDRO:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    // Aplicar uma habilidade no tabuleiro
    printf("\nAplicando habilidade CRUZ na posição linha 5, coluna F...\n");
    aplicarHabilidade(tabuleiro, cruz, 4, 5);  // índices baseados em 0

    // Mostrar tabuleiro atualizado
    printf("\nTabuleiro após aplicar habilidade:\n\n");
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0) printf("0 ");
            else if (tabuleiro[i][j] == 3) printf("3 ");
            else if (tabuleiro[i][j] == 5) printf("5 ");
        }
        printf("\n");
    }

    return 0;
}