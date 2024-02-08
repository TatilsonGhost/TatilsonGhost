#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
     int n1,n2,i;
    printf("Digite um número: ");
    scanf("%i",&n1);
    printf("Digite outro número: ");
    scanf("%i",&n2);
    if(n1<n2){
    	
    	for(i=n1;i<=n2;i++){
    		printf("%i",i);
		}
	}
    else{
    	for(i=n1;i>=n2;i--){
    		printf("%i",i);
		}
	}
	

 }

