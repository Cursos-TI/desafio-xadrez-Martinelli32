#include <stdio.h>

int main() {
    // Variáveis para armazenar a quantidade de movimentos de cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 4;

    printf("=== DESAFIO DE XADREZ: MOVIMENTAÇÃO ===\n\n");

    // --- MOVIMENTAÇÃO DA TORRE ---
    // Usamos o FOR porque sabemos exatamente que são 5 repetições.
    printf("Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); // Pula linha para organizar a saída

    // --- MOVIMENTAÇÃO DO BISPO ---
    // Usamos o WHILE para simular o movimento na diagonal (Cima e Direita).
    printf("Bispo:\n");
    int b = 1; // Contador para o While
    while (b <= casasBispo) {
        printf("Cima, Direita\n");
        b++; // Incremento manual da variável de controle
    }
    printf("\n");

    // --- MOVIMENTAÇÃO DA RAINHA ---
    // Usamos o DO-WHILE para mover a peça para a esquerda.
    printf("Rainha:\n");
    int r = 1; // Contador para o Do-While
    do {
        printf("Esquerda\n");
        r++; // Incremento manual
    } while (r <= casasRainha);
    printf("\n"); // pula linha para organizar a saida
    { 
    
     // --- MOVIMENTAÇÃO DO CAVALO (LOOP ANINHADO OU COMBINADO) ---
    // O Cavalo move-se 2 casas para Baixo e 1 para a Esquerda.
    printf("Cavalo:\n");
    
    // Para o Cavalo, podemos usar um loop para a parte mais longa (Baixo)
    // E um comando direto para a virada (Esquerda)
    for (int c = 1; c <= 1; c++) {
        int baixo = 1;
        while (baixo <= 2) {
            printf("Baixo\n");
            baixo++;
        }
        printf("Esquerda\n");
    }

    return 0;
}   
    }