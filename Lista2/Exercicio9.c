#include <stdio.h>
#include<stdlib.h>

 main() {
    char resp;
    float n1, n2, res;
    char operacao;
      do {
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);

        printf("Digite o segundo numero: ");
        scanf("%f", &n2);

        printf("Digite a opera��o desejada (+, -, *, /): ");
        scanf(" %c", &operacao);

        switch (operacao) {
            case '+':
                res = n1 + n2;
                printf("Resultado: %.2f\n", res);
                break;
            case '-':
                res = n1 - n2;
                printf("Resultado: %.2f\n", res);
                break;
            case '*':
                res = n1 * n2;
                printf("Resultado: %.2f\n", res);
                break;
            case '/':
                if (n2 != 0) {
                    res = n1 / n2;
                    printf("Resultado: %.2f\n", res);
                } else {
                    printf("Erro: divis�o por zero.\n");
                }
                break;
            default:
                printf("Opera��o inv�lida.\n");
        }

          printf("Deseja fazer outro c�lculo? (S/N): ");
          scanf(" %c", &resp);
      } while (resp == 'S' || resp == 's');

  
}

