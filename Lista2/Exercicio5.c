#include <stdio.h>
#include <stdlib.h>
int main() {
    int a, b;
    int count = 0;

    while (count < 3) {
        printf("Insira dois n�meros inteiros entre 250 e 400 e m�ltiplos de 10:\n");
        scanf("%i %i", &a, &b);

        if (a >= 250 && a <= 400 && b >= 250 && b <= 400 && a % 10 == 0 && b % 10 == 0) {
            break;
        }

        printf("Valores inv�lidos. Insira novamente.\n");
        count++;
    }

    if (count == 3) {
        printf("N�mero m�ximo de tentativas excedido. O programa ser� encerrado.\n");
        return 0;
    }

    printf("Escolha uma op��o:\n");
    printf("1 - Soma de todos os inteiros entre %d e %d\n", a, b);
    printf("2 - Multiplica��o entre %d e %d\n", a, b);
    printf("3 - Divis�o %d/%d\n", a, b);

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
                printf("Multiplica��o: %d\n", multiplication);
                break;
            }
        case 3:
            {
                float division = (float)a / b;
                printf("Divis�o: %.3f\n", division);
                break;
            }
        default:
            printf("Op��o inv�lida.\n");
    }

    return 0;
}

