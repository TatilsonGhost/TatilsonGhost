#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, count;
    float nums[50], freq[50], temp;

    printf("Digite a quantidade de numeros (n): ");
    scanf("%i", &n);

    // Leitura dos números
    for(i = 0; i < n; i++) {
        printf("Digite o numero %i: ", i+1);
        scanf("%f", &nums[i]);
        freq[i] = -1; // Inicializa frequência como -1 para identificar se já foi contabilizado
    }

    // Cálculo das frequências
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i+1; j < n; j++) {
            if(nums[i] == nums[j]) {
                count++;
                freq[j] = 0; // Marca como já contabilizado
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }

    // Impressão das frequências
    printf("\nResultados:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%.2f ocorre %.0f vez(es)\n", nums[i], freq[i]);
        }
    }

    return 0;
}

