#include <stdio.h>

 main() {
    char nome[50];
    int i;
    // Solicita o nome do usuário
    printf("Digite seu nome: ");
    scanf("%s", nome);

    // Imprime as 4 primeiras letras do nome
    printf("\n");
    for ( i= 0; i < 4; i++) {
        printf("%c", nome[i]);
    }

   
}


