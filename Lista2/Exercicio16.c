#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    int panela=0,prato=0,chaleira=0,option_invalida=0,i,option;
    printf("\nSeja ben vindo a nossa loja online\n");
    printf("\n");
    printf("\nA nossa loja possui os seguintes produtos e os codigos de aquisi��o:\n");
    printf("\n");
    printf("1-Panela\n");
    printf("2-Chaleira\n");
    printf("3-Prato\n");
    printf("\n");
    printf("Para comprar digite os c�digos dos produtos acima mensionados\n");
    printf("\n");
    printf("\n");
    for(i=1;i<=5;i++){
        printf("Digite o n�mero do produto %i�: ",i);
        scanf("%i",&option);
        switch(option){
         	case 1:
     		  panela++;
     		break;
         	case 2:
		      chaleira++;
		    break;
	    	case 3:
			  prato++;
			break;
	    	default:
		     option_invalida++;		
	 }	
	}
   
   printf("Total de vezes que cada c�digo foi digitado:\n");
    printf("1 - Panela: %d vezes\n", panela);
    printf("2 - Chaleira: %d vezes\n", chaleira);
    printf("3 - Prato: %d vezes\n", prato);
    printf("C�digos inv�lidos: %d vezes\n", option_invalida);
    printf("\n");
    printf("\n");
    printf("\n");
    printf("A sua encomenda chegar� em breve..");
 }

