#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main() {
    int mat1[SIZE][SIZE], mat2[SIZE][SIZE];
    int i, j, equal = 1;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // Preenche as matrizes com valores aleatórios
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            mat1[i][j] = rand() % 2;
            mat2[i][j] = rand() % 2;
        }
    }

    // Compara as matrizes
    for(i = 0; i < SIZE; i++) {
        for(j = 0; j < SIZE; j++) {
            if(mat1[i][j] != mat2[i][j]) {
                equal = 0;
                break;
            }
        }
        if(!equal) {
            break;
        }
    }

    // Imprime o resultado
    if(equal) {
        printf("As matrizes sao iguais.\n");
    } else {
        printf("As matrizes sao diferentes.\n");
    }

    return 0;
}

