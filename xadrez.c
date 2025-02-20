#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código simula a movimentação de peças de xadrez utilizando estruturas de repetição.

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

int main() {
    // Movimentação do Bispo - 5 casas na diagonal superior direita
    printf("Movimentação do Bispo:\n");
    int i = 0;
    while (i < MOV_BISPO) {
        printf("Diagonal Superior Direita\n");
        i++;
    }
    
    // Movimentação da Torre - 5 casas para a direita
    printf("\nMovimentação da Torre:\n");
    for (int j = 0; j < MOV_TORRE; j++) {
        printf("Direita\n");
    }
    
    // Movimentação da Rainha - 8 casas para a esquerda
    printf("\nMovimentação da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < MOV_RAINHA);
    
    return 0;
}