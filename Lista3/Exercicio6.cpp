#include <stdio.h>
#include <stdlib.h>
int main()
{
    int v1[10], v2[10], v3[10];
    int i, maior;

    printf("Digite os valores do vetor 1:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &v1[i]);
    }

    printf("Digite os valores do vetor 2:\n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &v2[i]);
    }

    for(i=0; i<10; i++)
    {
        if(v1[i] > v2[i])
        {
            maior = v1[i];
        }
        else
        {
            maior = v2[i];
        }

        v3[i] = maior;
    }

    printf("Vetor resultante:\n");
    for(i=0; i<10; i++)
    {
        printf("%d ", v3[i]);
    }

    return 0;
}

