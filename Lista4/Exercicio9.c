#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>
 main(){
	
 char frase[100];
 int i;
    printf("Digite a frase: ");
    fgets(frase,sizeof(frase),stdin);
    
    for(i=0;frase[i]!='\0';i++){
    	
    		if(tolower(frase[i])=='a'||tolower(frase[i])=='e'||tolower(frase[i])=='i'||tolower(frase[i])=='o'||tolower(frase[i])=='u'){
			printf("%c",frase[i]);
		}	
		}
    
	
		
	}
 
 

