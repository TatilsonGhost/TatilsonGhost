#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    int i, numero, soma = 0;
    printf("Digite 10 n�meros:\n");
    for (i = 1; i <= 10; i++) {
        printf("N�mero %d: ", i);
        scanf("%d", &numero);
        if (numero < 40) {
            soma += numero;
        }
    }
    printf("\nValor final da soma dos n�meros inferiores a 40: %d\n", soma);
}

