#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    int count = 0;

    while (count < 3) {
        printf("Insira dois números inteiros entre 250 e 400 e múltiplos de 10:\n");
        scanf("%i %i", &a, &b);

        if (a >= 250 && a <= 400 && b >= 250 && b <= 400 && a % 10 == 0 && b % 10 == 0) {
            break;
        }

        printf("Valores inválidos. Insira novamente.\n");
        count++;
    }

    if (count == 3) {
        printf("Número máximo de tentativas excedido. O programa será encerrado.\n");
        return 0;
    }

    printf("Escolha uma opção:\n");
    printf("1 - Soma de todos os inteiros entre %d e %d\n", a, b);
    printf("2 - Multiplicação entre %d e %d\n", a, b);
    printf("3 - Divisão %d/%d\n", a, b);

    int i,option;
    scanf("%d", &option);

    switch (option) {
        case 1:
            {
                int sum = 0;
                for (i = a; i <= b; i++) {
                    sum += i;
                }
                printf("Soma: %d\n", sum);
                break;
            }
        case 2:
            {
                int multiplication = a * b;
                printf("Multiplicação: %d\n", multiplication);
                break;
            }
        case 3:
            {
                float division = (float)a / b;
                printf("Divisão: %.3f\n", division);
                break;
            }
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}

