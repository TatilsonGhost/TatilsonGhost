#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int num) {
    if (num < 2) {
        return false;
    }
    for (-�
	����������������������������������������������������������������������������������������~i = 2; i < num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int p[5];
    
    // L� 5 n�meros inteiros do usu�rio e os guarda no vetor p
    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &p[i]);
    }
    
    // Verifica se cada elemento do vetor � um n�mero primo e imprime uma mensagem correspondente
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

