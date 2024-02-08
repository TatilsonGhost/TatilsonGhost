#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, m, i, j, menor, linha_menor;

    printf("Digite o número de linhas e colunas da matriz:\n");
    scanf("%d %d", &n, &m);

    int matriz[n][m];

    printf("Digite os elementos da matriz:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    menor = matriz[0][0];
    linha_menor = 0;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
            }
        }
    }

    printf("A linha do menor elemento da matriz é: %d", linha_menor + 1);

    return 0;
}

 
 
