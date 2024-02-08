#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>

typedef struct {
    char letra;
    int quantidade;
} TipoLetra;

int main() {
    TipoLetra v_letras[24];
    char frase[100];
    int i;

    // Preenche o vetor de letras com as letras do alfabeto e inicializa a quantidade com zero
    for (i = 0; i < 24; i++) {
        v_letras[i].letra = 'A' + i;
        v_letras[i].quantidade = 0;
    }

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    // Contabiliza a quantidade de cada letra na frase
    for (i = 0; frase[i] != '\0'; i++) {
        if (isalpha(frase[i])) {
            char letra = toupper(frase[i]);
            v_letras[letra - 'A'].quantidade++;
        }
    }

    // Apresenta o resultado
    printf("Quantidade de cada letra na frase:\n");
    for (i = 0; i < 24; i++) {
        if (v_letras[i].quantidade > 0) {
            printf("%c: %i\n", v_letras[i].letra, v_letras[i].quantidade);
        }
    }

    return 0;
}


