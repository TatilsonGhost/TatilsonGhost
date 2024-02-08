#include <stdio.h>
#include <stdlib.h>
int main() {
    float celsius[5], fahrenheit[5];
    int i;

    // Leitura das temperaturas em Celsius
    printf("Digite as 5 temperaturas em Celsius:\n");
    for (i = 0; i < 5; i++) {
        printf("Temperatura %d: ", i+1);
        scanf("%f", &celsius[i]);
    }

    // Conversão das temperaturas para Fahrenheit
    for (i = 0; i < 5; i++) {
        fahrenheit[i] = celsius[i] * 1.8 + 32;
    }

    // Impressão dos resultados
    printf("\nCelsius\tFahrenheit\n");
    for (i = 0; i < 5; i++) {
        printf("%.2f\t%.2f\n", celsius[i], fahrenheit[i]);
    }

    return 0;
}

