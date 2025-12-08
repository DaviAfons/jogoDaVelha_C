#include <stdio.h>
#include "visual.h"

void exibirTabuleiro(char tabuleiro[TAM][TAM]) {
    printf("\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < TAM - 1) printf("|");
        }
        printf("\n");
        if (i < TAM - 1) printf("---|---|---\n");
    }
    printf("\n");
}

void mostrarMensagemVitoria(char jogador) {
    printf("\n>>> O jogador %c VENCEU! <<<\n", jogador);
}

void mostrarMensagemEmpate() {
    printf("\n>>> DEU VELHA (Empate)! <<<\n");
}