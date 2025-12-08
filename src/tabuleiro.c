#include "tabuleiro.h"

void limparTabuleiro(char tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

int posicaoEhValida(int linha, int coluna) {
    if (linha >= 0 && linha < TAM && coluna >= 0 && coluna < TAM)
        return 1;
    return 0;
}

int posicaoEstaVazia(char tabuleiro[TAM][TAM], int linha, int coluna) {
    if (tabuleiro[linha][coluna] == ' ')
        return 1;
    return 0;
}

void marcarPosicao(char tabuleiro[TAM][TAM], int linha, int coluna, char jogador) {
    tabuleiro[linha][coluna] = jogador;
}