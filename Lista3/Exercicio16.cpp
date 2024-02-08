#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, idade, soma = 0, media, maisVelhos = 0, maisNovos = 0;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &n);

    int idades[n];

    // Leitura das idades
    for (i = 0; i < n; i++) {
        printf("Digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade);
        idades[i] = idade;
        soma += idade;
    }

    // Cálculo da média
    media = soma / n;

    // Contagem de pessoas mais velhas e mais novas que a média
    for (i = 0; i < n; i++) {
        if (idades[i] > media) {
            maisVelhos++;
        } else if (idades[i] < media) {
            maisNovos++;
        }
    }

    // Impressão dos resultados
    printf("Mais velhos: %d\n", maisVelhos);
    printf("Mais novos: %d\n", maisNovos);

    return 0;
}

