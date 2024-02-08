#include <stdio.h>
#include <stdlib.h>
int main() {
    int v[10], v1[10], v2[10], i, j = 0, k = 0;

    // Lê 10 números inteiros e armazena em v
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }

    // Separa os números pares em v2 e os ímpares em v1
    for (i = 0; i < 10; i++) {
        if (v[i] % 2 == 0) {
            v2[j] = v[i];
            j++;
        } else {
            v1[k] = v[i];
            k++;
        }
    }

    // Imprime v1
    printf("Valores impares em v1:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");

    // Imprime v2
    printf("Valores pares em v2:\n");
    for (i = 0; i < j; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n");

    return 0;
}

