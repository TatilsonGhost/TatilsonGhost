#include <stdio.h>
#include<stdlib.h>


 main() {
    int i,codigo[5], maior_codigo=0;
    float preco[5], total=0, media, maior_preco=0;
    
    // ler o c�digo e o pre�o de cada produto
    for(i=0; i<5; i++) {
    	printf("Digite o codigo do produto %i : ",i+1);
    	scanf("%i", &codigo[i]);
    	printf( "Digite o preco do produto :");
        scanf("%f",&preco[i]);
        total += preco[i];
        
        // Verificar se o pre�o lido � o maior at� agora
        if(preco[i] > maior_preco) {
            maior_preco = preco[i];
            maior_codigo = codigo[i];
        }
    }
    
    // Calcular a m�dia dos pre�os
    media = total / 5.0;
    
    printf("CODIGO   PRECO");
    for(i=0; i<5; i++) {
    scanf("%i%f",&codigo[i] ,"        " , &preco[i] ); 
    }
    printf("------------------" );
    printf( "MAIOR PRECO: %f",maior_preco ," (Codigo: %i" ,maior_codigo , ")");
    printf("MEDIA: %f",media);
    
   
}


