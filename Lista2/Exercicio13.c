#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
     int totaluno,menor10=0,entre10_e_15=0,maior15=0,i,aluno[100];
     float permenor10,perentre10_e_15,permaior15;
    printf("Digite número total de alunos: ");
    scanf("%i",&totaluno);
    for(i=0;i<=totaluno;i++){
        printf("Digite a frequencia do %iº aluno no refeitório",i+1);	
        scanf("%i",aluno[i])
        if(aluno[i]<10){
        	menor10++;
		}
		else if(aluno[i]>=10&&aluno[i]<=15){
			entre10_e_15++;
		}
		else
		maior15++;
	}
       permenor10=menor10/totaluno*100;
	   perentre10_e_15=entre10_e_15/totaluno*100;
	   permaior15=maior15/totaluno*100;
       printf("\n");
       printf("a) Percentagem de alunos que utilizaram menos que 10 vezes: %.2f%%\n", permenor10);
       printf("b) Percentagem de alunos que utilizaram entre 10 e 15 vezes: %.2f%%\n", perentre10_e_15);
       printf("c) Percentagem de alunos que utilizaram acima de 15 vezes: %.2f%%\n", permaior15);

 }

