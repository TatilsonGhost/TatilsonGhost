#include <stdio.h>
#include <stdlib.h>
int main() {
    int A[5] = {2, 4, 6, 8, 10};
    int B[8] = {1, 3, 5, 7, 8, 9, 10, 11};
    int i, j, count = 0;

    printf("Elementos comuns aos vetores A e B:\n");

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 8; j++) {
            if (A[i] == B[j]) {
                printf("%d ", A[i]);
                count++;
                break;
            }
        }
    }

    if (count == 0) {
        printf("Não há elementos em comum.");
    }
   
    return 0;
}

