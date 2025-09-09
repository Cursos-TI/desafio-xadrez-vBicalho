#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Número de casas para cada peça (pode alterar se quiser)
    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;

    int i; 

    // ==========================
    // Movimento da TORRE (for)
    // ==========================
    printf("Movimento da Torre (%d casas para a direita):\n", Torre);
    for (i = 1; i <= Torre; i++) {
        printf("Direita (%d)\n", i);
    }
    printf("\n");

    // ==========================
    // Movimento do BISPO (while)
    // ==========================
    printf("Movimento do Bispo (%d casas na diagonal cima-direita):\n", Bispo);
    i = 1; // reinicializa
    while (i <= Bispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }
    printf("\n");

    // ==========================
    // Movimento da RAINHA (do-while)
    // ==========================
    printf("Movimento da Rainha (%d casas para a esquerda):\n", Rainha);
    i = 1; // reinicializa
    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= Rainha);
    printf("\n");

    return 0;
}