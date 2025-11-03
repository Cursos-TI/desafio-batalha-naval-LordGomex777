#include <stdio.h>

int main(){
    // Variáveis
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];
    int i, j;

    // Inicializa o tabuleiro (Mar = 0)
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // === Navios ===
    // Cada navio ocupa 3 posições (valor 3)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    // === Coordenadas iniciais dos navios ===
    // Escolha fixa de exemplo:
    int linhaH = 2; // linha do navio horizontal (índice 2 → linha 3)
    int colH   = 4; // coluna inicial (índice 4 → letra E)
    int linhaV = 6; // linha inicial do navio vertical (índice 6 → linha 7)
    int colV   = 1; // coluna do navio vertical (índice 1 → letra B)

    // === Posiciona o navio horizontal ===
    for (i = 0; i < 3; i++){
        tabuleiro[linhaH][colH + i] = navioHorizontal[i];
    }

    // === Posiciona o navio vertical ===
    for (i = 0; i < 3; i++){
        tabuleiro[linhaV + i][colV] = navioVertical[i];
    }

    // === Imprime o tabuleiro ===
    printf(" TABULEIRO BATALHA NAVAL!\n\n");

    // Cabeçalho das colunas
    printf("   ");
    for (i = 0; i < 10; i++){
        printf("%c ", linha[i]);
    }
    printf("\n");

    // Linhas numeradas com conteúdo
    for (i = 0; i < 10; i++){
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}