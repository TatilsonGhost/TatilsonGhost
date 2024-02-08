#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, dia, maior_dia, menor_dia;
    float pluv[30], soma1=0, soma2=0, media1, media2, maior=0, menor=1000;

    // Leitura dos valores pluviométricos
    for(i=0; i<30; i++)
    {
        printf("Digite o índice pluviométrico do dia %d: ", i+1);
        scanf("%f", &pluv[i]);

        // Verifica o dia que mais choveu
        if(pluv[i] > maior)
        {
            maior = pluv[i];
            maior_dia = i+1;
        }

        // Verifica o dia que menos choveu
        if(pluv[i] < menor)
        {
            menor = pluv[i];
            menor_dia = i+1;
        }

        // Soma os valores pluviométricos para cálculo das médias
        if(i<15)
        {
            soma1 += pluv[i];
        }
        else
        {
            soma2 += pluv[i];
        }
    }

    // Cálculo das médias
    media1 = soma1/15;
    media2 = soma2/15;

    // Imprime os resultados
    printf("Dia que mais choveu: %d\n", maior_dia);
    printf("Dia que menos choveu: %d\n", menor_dia);
    printf("Média pluviométrica da primeira quinzena: %.2f\n", media1);
    printf("Média pluviométrica da segunda quinzena: %.2f\n", media2);

    return 0;
}

