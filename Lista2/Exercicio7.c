//A vila de konoha possui 2 candidatos para o cargo de Hokage: o candidato Naruto, do Partido do 
//Trabalho Árduo e o candidato Sasuke, do Partido do Talento. Os eleitores votam nos candidatos pelo
// número do partido. Para votar no candidato Naruto do Partido do Trabalho Árduo, precisam digitar o
// número 1. Para votar no candidato Sasuke, do Partido do Talento, precisam digitar o número 2.
// Implemente um programa que simule uma urna eletrônica. Para cada eleitor, deve ser lido o seu número
// ninja (nº inteiro) e em seguida o eleitor poderá digitar o seu voto. A eleição é encerrada quando
// for digitado um número ninja negativo. Informe quantos votos cada candidato teve e qual deles ganhou 
//a eleição.


#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    int nj,np,na=0,sa=0,i;
    printf("\nEleições para Hokague abertas\n");
    printf("Por favor respeite as regras das eleições");
    printf("\n");
    printf("\nRegras das eleições:\n");
    printf("1-Só é permitido votar uma vez\n");
    printf("2-Só é valido digitar número do partido, caso contrario seu voto não será validado\n");
    printf("3-Digitar apenas numero ninja positivo\n");
    printf("\n");
    for(i=0;i<1;i++){
    printf("Digite o seu número ninja por favor: ");
    scanf("%i",&nj);
    if(nj<0){
    	break;
	}
		system("cls");
	printf("\nAs opções são 1 e 2.\n");
    printf("Os partidos são:\n");
    printf("1-Partido do Trabalho Árduo- Naruto Uzumaki\n");
    printf("2-Partido do Talento- Sasuke Utchia \n");
    printf("Digite o número partido: ");
    scanf("%i",&np);
    if(np==1){
    	na++;
	}
	else if(np==2){
	    sa++;	
	}
	 else
	 printf("voto invalido");	
	}
   
    printf("\nResultado\n");
    printf("\n");
	printf("O candidato Naruto teve %i voto/s e o candidato Sasuke teve %i voto/s\n",na,sa);
	if(na>sa){
		printf("O vencedor foi o Naruto Uzumaki\n");
	}
	else if(na<sa){
		printf("O vencedor foi o Sasuke Utchia\n");	
	}
    else
    printf("Empate\n");
     
 printf("\nEleições encerradas\n");
 }

