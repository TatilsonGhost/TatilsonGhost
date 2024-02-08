#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, i, j, coluna_maior_soma;
    printf("");
    scanf("%i %i", &n, &m);

    int matriz[n][m];

    // Ler os elementos da matriz
    printf("Digite os elementos da matriz");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calcular a soma de cada coluna e encontrar a de maior soma
    int maior_soma = 0;
    for (j = 0; j < m; j++) {
        int soma_coluna = 0;
        for (i = 0; i < n; i++) {
            soma_coluna += matriz[i][j];
        }
        if (soma_coluna > maior_soma) {
            maior_soma = soma_coluna;
            coluna_maior_soma = j;
        }
    }

    printf("%i\n", coluna_maior_soma);

    return 0;
}

