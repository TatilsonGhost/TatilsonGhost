#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MATRIZ 50

int main() {
    float matriz[TAMANHO_MATRIZ][TAMANHO_MATRIZ];
    float diagonal_principal[TAMANHO_MATRIZ];
    int i, j;

    // Preenchendo a matriz com valores aleatórios
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        for (j = 0; j < TAMANHO_MATRIZ; j++) {
            matriz[i][j] = (float) rand() / RAND_MAX;
        }
    }

    // Copiando a diagonal principal da matriz para o vetor
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        diagonal_principal[i] = matriz[i][i];
    }

    // Imprimindo o vetor com a diagonal principal
    printf("Diagonal principal:\n");
    for (i = 0; i < TAMANHO_MATRIZ; i++) {
        printf("%f ", diagonal_principal[i]);
    }
    printf("\n");

    return 0;
}

