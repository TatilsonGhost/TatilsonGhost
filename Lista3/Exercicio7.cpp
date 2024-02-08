#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, dia, maior_dia, menor_dia;
    float pluv[30], soma1=0, soma2=0, media1, media2, maior=0, menor=1000;

    // Leitura dos valores pluviom�tricos
    for(i=0; i<30; i++)
    {
        printf("Digite o �ndice pluviom�trico do dia %d: ", i+1);
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

        // Soma os valores pluviom�tricos para c�lculo das m�dias
        if(i<15)
        {
            soma1 += pluv[i];
        }
        else
        {
            soma2 += pluv[i];
        }
    }

    // C�lculo das m�dias
    media1 = soma1/15;
    media2 = soma2/15;

    // Imprime os resultados
    printf("Dia que mais choveu: %d\n", maior_dia);
    printf("Dia que menos choveu: %d\n", menor_dia);
    printf("M�dia pluviom�trica da primeira quinzena: %.2f\n", media1);
    printf("M�dia pluviom�trica da segunda quinzena: %.2f\n", media2);

    return 0;
}

