#include <stdio.h>

/**
 * Desafio: Batalha Naval - Nível Novato
 * Objetivo: Posicionar navios em uma matriz 10x10.
 */

int main() {
    // 1. Representando o Tabuleiro: Matriz 10x10 inicializada com 0 (água)
    int tabuleiro[10][10];
    int linha, coluna;

    // Inicialização do tabuleiro com 0s usando loops 
    for (linha = 0; linha < 10; linha++) {
        for (coluna = 0; coluna < 10; coluna++) {
            tabuleiro[linha][coluna] = 0;
        }
    }

    // 2. Posicionar os Navios: Tamanho fixo de 3 posições (valor 3)
    // Coordenadas iniciais definidas manualmente conforme simplificação do nível
    
    // NAVIO HORIZONTAL: Linha 2, Colunas 3, 4 e 5
    int navioH_linha = 2;
    int navioH_coluna_inicio = 3;
    for (int j = 0; j < 3; j++) {
        tabuleiro[navioH_linha][navioH_coluna_inicio + j] = 3;
    }

    // NAVIO VERTICAL: Coluna 8, Linhas 5, 6 e 7
    int navioV_coluna = 8;
    int navioV_linha_inicio = 5;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navioV_linha_inicio + i][navioV_coluna] = 3;
    }

    // 3. Exibir o Tabuleiro
    printf("--- TABULEIRO DE BATALHA NAVAL ---\n\n");
    
    // Cabeçalho para facilitar a leitura das colunas
    printf("    0 1 2 3 4 5 6 7 8 9\n");
    printf("    -------------------\n");

    for (linha = 0; linha < 10; linha++) {
        // Imprime o índice da linha
        printf("%d | ", linha);
        
        for (coluna = 0; coluna < 10; coluna++) {
            // Imprime o valor da posição (0 ou 3) com um espaço para organização
            printf("%d ", tabuleiro[linha][coluna]);
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz
    }

    return 0;
}