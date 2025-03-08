#include <stdio.h>

#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

// Função recursiva para movimentação do Bispo
void moverBispo(int movimentos) {
    if (movimentos == 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispo(movimentos - 1);
}

int main() {
    // Movimentação do Bispo - 5 casas na diagonal superior direita (Recursão)
    printf("Movimentação do Bispo:\n");
    moverBispo(MOV_BISPO);
    
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

    // Movimentação do Cavalo - 1 vez em "L" para cima e para a direita
    printf("\nMovimentação do Cavalo:\n");
    for (int x = 0, y = 0; x < 2 || y < 1; x++) {
        if (x < 2) {
            printf("Cima\n");
        }
        if (x == 1 && y < 1) {
            printf("Direita\n");
            break; // Sai do loop assim que a movimentação do "L" for concluída
        }
    }

    printf("\n");
    return 0;
}
