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

    //Movimentação do Cavalo - 2 casas para baixo e 1 casa para esquerda
    printf("\nMovimentação do Cavalo:\n");

     // Loop externo para mover 2 casas para baixo
     for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        // Loop interno para mover 1 casa para a esquerda (apenas na última iteração)
        int contador = 1;
        while (contador > 0) {
            if (i == 1) { // Só move para a esquerda depois da segunda descida
                printf("Esquerda\n");
            }
            contador--;
        }
    }

    printf("\n");
    
    return 0;
}