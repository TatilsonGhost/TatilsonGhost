#include <stdio.h>
#include <stdlib.h>
int main() {
    int vetor[50], i, pares = 0, multiplos_5 = 0;

    printf("Digite os 50 numeros do vetor:\n");
    for(i = 0; i < 50; i++) {
        scanf("%d", &vetor[i]);
        
        // verificando se o número é par
        if(vetor[i] % 2 == 0) {
            pares++;
        }
        
        // verificando se o número é múltiplo de 5
        if(vetor[i] % 5 == 0) {
            multiplos_5++;
        }
    }
    
    printf("Quantidade de numeros pares: %d\n", pares);
    printf("Quantidade de numeros multiplos de 5: %d\n", multiplos_5);

    return 0;
}

