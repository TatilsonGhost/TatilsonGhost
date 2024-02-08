#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[20], i, menor, maior;

    // Ler os valores do array
    printf("Digite os 20 valores do array:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &array[i]);
    }

    // Inicializar as variáveis menor e maior com o primeiro valor do array
    menor = array[0];
    maior = array[0];

    // Percorrer o array, atualizando as variáveis menor e maior conforme necessário
    for (i = 1; i < 20; i++) {
        if (array[i] < menor) {
            menor = array[i];
        }
        if (array[i] > maior) {
            maior = array[i];
        }
    }

    // Imprimir o menor e o maior valor do array
    printf("O menor valor do array é: %d\n", menor);
    printf("O maior valor do array é: %d\n", maior);

    return 0;
}

