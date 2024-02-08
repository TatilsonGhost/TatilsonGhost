#include <stdio.h>
#include <stdlib.h>
int main() {
    int v[10], w[10], i, soma;

    // Preencher o vetor v com os números pares de 2 a 20
    for (i = 0; i < 10; i++) {
        v[i] = 2 * (i + 1);
    }

    // Preencher o vetor w com os números de 10 a 19
    for (i = 0; i < 10; i++) {
        w[i] = 10 + i;
    }

    // Somar os vetores v e w
    soma = 0;
    for (i = 0; i < 10; i++) {
        soma += v[i] + w[i];
    }

    // Imprimir o resultado da soma
    printf("A soma dos vetores v e w e: %d", soma);

    return 0;
}

