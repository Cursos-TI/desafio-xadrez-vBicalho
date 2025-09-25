#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

/* ==========================
   Funções recursivas
   ========================== */

// Torre: move n casas para a direita
void Torre(int casas) {
    if (casas > 1)
    Torre(casas - 1); 
    printf("Direita (%d)\n", casas);
     
}

// Rainha: move n casas para a esquerda
void Rainha(int casas) {
    if (casas > 1)
    Rainha(casas - 1);
    printf("Esquerda (%d)\n", casas);
    
}


// Bispo: move n casas para diagonal cima + direita
void Bispo(int casasVerticais, int casasHorizontais) {
    for (int v = 1; v <= casasVerticais; v++) { // loop vertical
        for (int h = 1; h <= casasHorizontais; h++) { // loop horizontal
           
            if (v == h) {
            printf("Cima, Direita (%d)\n", v);
            }
        }
    }
     
}

// Cavalo : move 2 casas para cima e 1 casa para direita

void Cavalo(int casasCima, int casasDireita) {
    printf("Movimento do Cavalo (L: %d casas para cima e %d para a direita):\n",
           casasCima, casasDireita);

    // loop externo controla direção vertical, interno horizontal
    for (int i = 1, j = 0; i <= casasCima || j < casasDireita; ) {
        if (i <= casasCima) {
            printf("Cima (%d)\n", i);
            i++;
            continue; // volta ao início para imprimir as duas casas para cima
        }
        // após subir as duas casas, faz a casa à direita
        if (j < casasDireita) {
            printf("Direita (%d)\n", j + 1);
            j++;
            break; // encerra depois do movimento à direita
        }
    }
}

/* ==========================
   Função principal
   ========================== */
int main() {
    int casasTorre = 5;
    int casasRainha = 8;
    int casasBispo = 5;
    int casasCimaCavalo = 2;
    int casasDireitaCavalo = 1;

    printf("Movimento da Torre :\n");
    Torre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo :\n");
    Bispo(5,5); 
    printf("\n");

    printf("Movimento da Rainha :\n");
    Rainha(casasRainha);
    printf("\n");

    Cavalo(casasCimaCavalo, casasDireitaCavalo);

    return 0;
}
