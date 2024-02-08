#include <stdio.h>
#include <stdlib.h>
#define MAX_DIGITS 100

int main() {
    int n, m, i, j, carry = 0;
    int num1[MAX_DIGITS], num2[MAX_DIGITS], result[MAX_DIGITS];

    // leitura da primeira sequência de números
    printf("Digite a primeira sequencia de numeros: ");
    for (i = 0; i < MAX_DIGITS; i++) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        num1[i] = n;
    }
    int len1 = i;

    // leitura da segunda sequência de números
    printf("Digite a segunda sequencia de numeros: ");
    for (i = 0; i < MAX_DIGITS; i++) {
        scanf("%d", &n);
        if (n == -1) {
            break;
        }
        num2[i] = n;
    }
    int len2 = i;

    // realizando a soma das sequências de números
    for (i = MAX_DIGITS - 1; i >= 0; i--) {
        int sum = carry;
        if (len1 > 0) {
            sum += num1[len1 - 1];
            len1--;
        }
        if (len2 > 0) {
            sum += num2[len2 - 1];
            len2--;
        }
        carry = sum / 10;
        result[i] = sum % 10;
    }

    // impressão do resultado
    printf("Resultado da soma: ");
    for (i = 0; i < MAX_DIGITS; i++) {
        if (result[i] != 0) {
            break;
        }
    }
    for (j = i; j < MAX_DIGITS; j++) {
        printf("%d", result[j]);
    }
    printf("\n");

    return 0;
}

