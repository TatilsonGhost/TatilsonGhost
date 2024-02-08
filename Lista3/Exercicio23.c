#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX_LIN 100
#define MAX_COL 100

int main() {
	setlocale(LC_ALL,"Portuguese");
    int n, m, mat[MAX_LIN][MAX_COL], i, j, qtd_lin_nulas = 0, qtd_col_nulas = 0;

    // Lê a dimensão da matriz
    printf("Digite o tamanho da  da matriz: ");
    scanf("%i %i", &n, &m);

    // Lê os elementos da matriz
    printf("Digite as dimensões da matriz (linhas) e (colunas): ");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%i", &mat[i][j]);
        }
    }

    // Conta quantas linhas e colunas nulas a matriz possui
    for (i = 0; i < n; i++) {
        int tem_elem_nao_nulo = 0;
        for (j = 0; j < m; j++) {
            if (mat[i][j] != 0) {
                tem_elem_nao_nulo = 1;
                break;
            }
        }
        if (!tem_elem_nao_nulo) {
            qtd_lin_nulas++;
        }
    }
    for (j = 0; j < m; j++) {
        int tem_elem_nao_nulo = 0;
        for (i = 0; i < n; i++) {
            if (mat[i][j] != 0) {
                tem_elem_nao_nulo = 1;
                break;
            }
        }
        if (!tem_elem_nao_nulo) {
            qtd_col_nulas++;
        }
    }

    // Imprime a quantidade de linhas e colunas nulas
    printf("%i %i\n", qtd_lin_nulas, qtd_col_nulas);

    return 0;
}

