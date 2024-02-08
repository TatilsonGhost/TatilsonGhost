#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 main(){
     setlocale(LC_ALL,"Portuguese");
 int i,j,t,al;
 float me,meT,meS=0;
 printf("Digite o número de turmas: ");
 scanf("%i",&t);
 for(i=1;i<=t;i++){
 	printf("\nTurma %i\n",i);
    printf("Digite o número de alunos: ");
    scanf("%i",&al);
 for(j=1;j<=al;j++){
    printf("Digite a média do %i: ",i+1);
    scanf("%i",&me);
	meS+=me;	
 }
  meT=meS/al;
  printf("A média da turma %i é %.2f\n",i,meT);  	
 }

 }

