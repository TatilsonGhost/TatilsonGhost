#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, i, count = 0;
    int V1[50], V2[50];

    printf("Digite o tamanho dos vetores (no maximo 50): ");
    scanf("%d", &N);

    printf("Digite os elementos do vetor V1:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &V1[i]);
    }

    printf("Digite os elementos do vetor V2:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &V2[i]);
    }

    for (i = 0; i < N; i++) {
        if (V1[i] == V2[i]) {
            count++;
        }
    }

    printf("Os vetores V1 e V2 possuem %d valores identicos nas mesmas posiçoes.", count);
 
    return 0;
}

