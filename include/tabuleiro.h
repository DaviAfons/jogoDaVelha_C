#include "defs.h"

void limparTabuleiro(char tabuleiro[TAM][TAM]);
int posicaoEhValida(int linha, int coluna);
int posicaoEstaVazia(char tabuleiro[TAM][TAM], int linha, int coluna);
void marcarPosicao(char tabuleiro[TAM][TAM], int linha, int coluna, char jogador);