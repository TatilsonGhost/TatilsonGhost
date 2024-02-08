#include <stdio.h>
#include <stdlib.h>
int main() {
    int v[10];
    int i, j, num, repetido;

    printf("Digite 10 numeros diferentes:\n");

    for (i = 0; i < 10; i++) {
        repetido = 1;
        while (repetido) {
            printf("Digite o numero %d: ", i+1);
            scanf("%d", &num);

            repetido = 0;
            for (j = 0; j < i; j++) {
                if (v[j] == num) {
                    repetido = 1;
                    printf("Numero repetido. Tente novamente.\n");
                    break;
                }
            }
        }
        v[i] = num;
    }

    printf("\nOs numeros digitados foram:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

