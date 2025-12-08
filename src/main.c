#include <stdio.h>
#include "defs.h"
#include "visual.h"
#include "tabuleiro.h"
#include "regras.h"

int main() {
    char matriz[TAM][TAM];
    char jogador = 'X';
    int lin, col;
    int jogando = 1; 

    limparTabuleiro(matriz);

    printf("=== JOGO DA VELHA ===\n");

    while (jogando) {
        exibirTabuleiro(matriz);
        printf("Vez de %c. Digite Linha e Coluna (ex: 1 1): ", jogador);
        
        int leituras = scanf("%d %d", &lin, &col);

        if (leituras != 2) {
            printf("\n[!] Erro: Voce digitou letras ou caracteres invalidos.\n");
            printf("    Por favor, digite apenas dois numeros.\n");

            int c;
            while ((c = getchar()) != '\n' && c != EOF);
            
            continue; 
        }

        if (!posicaoEhValida(lin, col)) {
            printf("\n[!] Coordenada inexistente! Use numeros de 0 a 2.\n");
            continue;
        }

        if (!posicaoEstaVazia(matriz, lin, col)) {
            printf("\n[!] Lugar ocupado! Tente outra posicao.\n");
            continue;
        }

        marcarPosicao(matriz, lin, col, jogador);

        if (checarVitoria(matriz, jogador)) {
            exibirTabuleiro(matriz);
            mostrarMensagemVitoria(jogador);
            jogando = 0; 
        } 
        else if (checarVelha(matriz)) {
            exibirTabuleiro(matriz);
            mostrarMensagemEmpate();
            jogando = 0; 
        } 
        else {
            if (jogador == 'X') {
                jogador = 'O';
            } else {
                jogador = 'X';
            }
        }
    }

    return 0;
}