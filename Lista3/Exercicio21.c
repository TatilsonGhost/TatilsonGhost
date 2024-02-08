#include <stdio.h>

#define LINHAS 6
#define COLUNAS 6

void multiplica_matriz(int matriz[][COLUNAS], int valor) {
    int i, j;
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            matriz[i][j] *= valor;
        }
    }
}

void imprime_matriz(int matriz[][COLUNAS]) {
    int i, j;
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[LINHAS][COLUNAS];
    int valor, i, j;
    
    // Lê a matriz
    printf("Digite os valores da matriz %dx%d:\n", LINHAS, COLUNAS);
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    // Lê o valor a ser multiplicado
    printf("Digite um valor inteiro para multiplicar a matriz: ");
    scanf("%d", &valor);
    
    // Multiplica a matriz pelo valor lido
    multiplica_matriz(matriz, valor);
    
    // Imprime a matriz resultante
    printf("\nMatriz resultante:\n");
    imprime_matriz(matriz);
    
    return 0;
}

