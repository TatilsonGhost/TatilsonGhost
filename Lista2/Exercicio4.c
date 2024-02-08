#include<stdlib.h>
#include<stdio.h>

 main(){
 int x,n,i,p=0,v=1;
 
 printf("Digite o numero base: ");
 scanf("%i",&x);
  printf("Digite o numero do expoente: ");
 scanf("%i",&n);
 
 
 if(n==1){
 	printf("%i",x);
 }
 	
  else if (n==0){
 		printf("\n%i elevado a %i = %i",x,n,v);
    }
  else if(n<0){
  printf("\nDigite um numero maior ou igual a %i",p);
  } 
 
 for(i=0;i<n;i++){
 	p=x*x;
 }
 
 printf("%i elevado a %i = %i",x,n,p);
 }

