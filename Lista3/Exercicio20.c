#include <stdio.h>
#include <stdlib.h>
int main() {
    int D[5][5], i, j, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;

    // Lê os valores e preenche a matriz
    printf("Digite os valores para preencher a matriz D 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%i", &D[i][j]);
        }
    }

    // Soma os valores da diagonal principal e secundária
    for (i = 0; i < 5; i++) {
        somaDiagonalPrincipal += D[i][i];
        somaDiagonalSecundaria += D[i][4-i];
    }

    // Imprime a matriz e as somas
    printf("\nMatriz D 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%i ", D[i][j]);
        }
        printf("\n");
    }
    printf("\nSoma da diagonal principal: %d\n", somaDiagonalPrincipal);
    printf("Soma da diagonal secundaria: %d\n", somaDiagonalSecundaria);

    return 0;
}

