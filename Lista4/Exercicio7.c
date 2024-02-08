#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
 
    char frase[100];
    char caracter;
    int i, posicao = -1;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    printf("Digite um caractere: ");
    scanf("%c", &caracter);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == caracter) {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) {
        printf("O caractere '%c' está presente na frase na posição %d.\n", caracter, posicao);
    } else {
        printf("O caractere '%c' não está presente na frase.\n", caracter);
    }

 }

