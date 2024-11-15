#include <stdio.h>

int main() {
    int tabuleiro[5][5] = {0}; // Inicializa o tabuleiro com 0 (posições vazias).
    int linha, coluna;

    printf("Bem-vindo ao modo Novato - Batalha Naval!\n");

    // Posicionando um navio horizontal
    printf("Posicione o navio horizontal (3 casas consecutivas):\n");
    printf("Digite a linha (0 a 4) e a coluna inicial (0 a 2): ");
    scanf("%d %d", &linha, &coluna);

    // Validações básicas
    if (linha >= 0 && linha < 5 && coluna >= 0 && coluna <= 2) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha][coluna + i] = 3;
        }
    } else {
        printf("Posição inválida. Navio não pode ser posicionado fora do tabuleiro.\n");
        return 1;
    }

    // Posicionando um navio vertical
    printf("Posicione o navio vertical (3 casas consecutivas):\n");
    printf("Digite a coluna (0 a 4) e a linha inicial (0 a 2): ");
    scanf("%d %d", &coluna, &linha);

    // Validações básicas
    if (coluna >= 0 && coluna < 5 && linha >= 0 && linha <= 2) {
        for (int i = 0; i < 3; i++) {
            tabuleiro[linha + i][coluna] = 3;
        }
    } else {
        printf("Posição inválida. Navio não pode ser posicionado fora do tabuleiro.\n");
        return 1;
    }

    // Exibindo as coordenadas dos navios
    printf("Navios posicionados com sucesso!\n");
    printf("Coordenadas dos navios:\n");
    printf("Navio horizontal:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("(%d,%d) ", i, j);
            }
        }
    }
    printf("\n");

    // Exibindo o tabuleiro
    printf("Tabuleiro final:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
