#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    int n,i,s=1;
    float fat=1.0;
    printf("Digite o valor de N: ");
    scanf("%i",&n);
     if(n<0){
     	printf("Digite um número positivo...");
	 }
	 for(i=1;i<=n;i++){
	     printf("S= %i+1/ ", s);	
		 fat*=1;
	 	 s+=1/ fat;
	 }
    
 }

