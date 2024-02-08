#include<stdlib.h>
#include<stdio.h>

 main(){
 int n,cont=0,impar=0;
 
 printf("Digite o numero: ");
 
 scanf("%i", &n);
 do{
 	cont++;
 	if(cont%2!=0){
 		impar++;
 		printf("%i", cont);
	 }
 }while(impar!=n);
 
 }

