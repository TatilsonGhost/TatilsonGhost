#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4

int main() {
    int matriz[LIN][COL];
    int i,j;

    // Preenchimento da matriz
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            matriz[i][j] = (i + 1) * (j + 1);
        }
    }

    // Impressão da matriz
    printf("Matriz 4 x 4 com o produto da linha e da coluna:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}

