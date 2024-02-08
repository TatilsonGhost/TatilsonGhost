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

        printf("Digite a operação desejada (+, -, *, /): ");
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
                    printf("Erro: divisão por zero.\n");
                }
                break;
            default:
                printf("Operação inválida.\n");
        }

          printf("Deseja fazer outro cálculo? (S/N): ");
          scanf(" %c", &resp);
      } while (resp == 'S' || resp == 's');

  
}

