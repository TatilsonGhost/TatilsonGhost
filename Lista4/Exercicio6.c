#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
     char frase[100];
     int q;
    printf("Digite a frase: ");
    scanf("%99[^\n]s",frase);
 
    q=strlen(frase);
   printf("A frase tem %i caracteres",q);
 }

