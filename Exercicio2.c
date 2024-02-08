#include<stdlib.h>
#include<stdio.h>
int  MultipRec(n1, n2){
	if(n1==0)
	return 0;
	else 
	return MultipRec(n1*n2);
}
int main(){
	int v1,v2,r;
 
    printf("Digite o 1 numero: ");
    scanf("%i",&v1);
 
    printf("Digite o 2 numero: ");
    scanf("%i",&v2);
r=MultipRec(v1, v2);
 printf("%i * %i = %i",v1,v2,r);
 return 0;
 
 }

