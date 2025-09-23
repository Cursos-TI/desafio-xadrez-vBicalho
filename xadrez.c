#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int i, j;
    // ==========================
    // Movimento do CAVALO 
    // ==========================
    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    while (j>i)
    {
        j=1;
        for (i = 0; i < 2; i++)
        {
            printf("Baixo(%d)\n",i+1);//Loop para fazer o movimento 2 vezes
        }
     printf("Esquerda(%d) \n",j); //usando o while para fazer o movimento para esquerda apenas uma vez  
    }
    

   
    return 0;
}