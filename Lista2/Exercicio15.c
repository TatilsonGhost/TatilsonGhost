#include<stdlib.h>
#include<stdio.h>

#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    int n,i,soma=0;
    printf("Digite o número: ");
    scanf("%i",&n);
    for(i=1;i<n;i++){
       if(n % i == 0 ){
 	      soma+= i;
       }
	}
	     if (soma==n) {
             printf("%i é um número perfeito.\n", n);
         } else {
               printf("%i não é um número perfeito.\n", n);
    }
 }

 
