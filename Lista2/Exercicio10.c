#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    int i, numero, soma = 0;
    printf("Digite 10 números:\n");
    for (i = 1; i <= 10; i++) {
        printf("Número %d: ", i);
        scanf("%d", &numero);
        if (numero < 40) {
            soma += numero;
        }
    }
    printf("\nValor final da soma dos números inferiores a 40: %d\n", soma);
}

