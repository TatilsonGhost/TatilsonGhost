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
        printf("O caractere '%c' est� presente na frase na posi��o %d.\n", caracter, posicao);
    } else {
        printf("O caractere '%c' n�o est� presente na frase.\n", caracter);
    }

 }

