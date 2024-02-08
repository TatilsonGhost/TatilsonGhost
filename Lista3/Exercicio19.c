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
    
    // Verifica se a matriz é simétrica
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){ // Apenas percorre elementos acima da diagonal principal
            if(matriz[i][j] != matriz[j][i]){ // Verifica se o elemento oposto é igual
                simetrica = 0; // Se não for igual, matriz não é simétrica
                break;
            }
        }
        if(!simetrica) break; // Se já foi identificado que a matriz não é simétrica, interrompe o loop
    }
    
    // Imprime resultado
    if(simetrica){
        printf("A matriz é simétrica.\n");
    }else{
        printf("A matriz não é simétrica.\n");
    }
    
    return 0;
}

