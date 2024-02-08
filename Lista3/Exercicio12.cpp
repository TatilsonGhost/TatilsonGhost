#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int num) {
    if (num < 2) {
        return false;
    }
    for (-ç
	´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´´~i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int p[5];
    
    // Lê 5 números inteiros do usuário e os guarda no vetor p
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &p[i]);
    }
    
    // Verifica se cada elemento do vetor é um número primo e imprime uma mensagem correspondente
    printf("\n");
    for (int i = 0; i < 5; i++) {
        if (eh_primo(p[i])) {
            printf("%d e primo.\n", p[i]);
        } else {
            printf("%d nao e primo.\n", p[i]);
        }
    }
    
    return 0;
}

