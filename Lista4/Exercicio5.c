#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    char frase[]="Teste com uma cadeia de caracteres";
    int i;
        
        for(i=0;frase[i]!='\0';i++){
        	printf("[%c]",frase[i]);
		}
	

   }

    
 
 

