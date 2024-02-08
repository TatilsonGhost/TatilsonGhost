#include <stdio.h>
#include<stdlib.h>
int main()
{
    int matriz[5][5], simetrica = 1; // Inicializa simetrica como verdadeiro (1)
    
    // Leitura da matriz
    printf("Insira os valores da matriz:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%i", &matriz[i][j]);
        }
    }
    
    // Verifica se a matriz � sim�trica
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){ // Apenas percorre elementos acima da diagonal principal
            if(matriz[i][j] != matriz[j][i]){ // Verifica se o elemento oposto � igual
                simetrica = 0; // Se n�o for igual, matriz n�o � sim�trica
                break;
            }
        }
        if(!simetrica) break; // Se j� foi identificado que a matriz n�o � sim�trica, interrompe o loop
    }
    
    // Imprime resultado
    if(simetrica){
        printf("A matriz � sim�trica.\n");
    }else{
        printf("A matriz n�o � sim�trica.\n");
    }
    
    return 0;
}

