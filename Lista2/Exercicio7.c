//A vila de konoha possui 2 candidatos para o cargo de Hokage: o candidato Naruto, do Partido do 
//Trabalho �rduo e o candidato Sasuke, do Partido do Talento. Os eleitores votam nos candidatos pelo
// n�mero do partido. Para votar no candidato Naruto do Partido do Trabalho �rduo, precisam digitar o
// n�mero 1. Para votar no candidato Sasuke, do Partido do Talento, precisam digitar o n�mero 2.
// Implemente um programa que simule uma urna eletr�nica. Para cada eleitor, deve ser lido o seu n�mero
// ninja (n� inteiro) e em seguida o eleitor poder� digitar o seu voto. A elei��o � encerrada quando
// for digitado um n�mero ninja negativo. Informe quantos votos cada candidato teve e qual deles ganhou 
//a elei��o.


#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    int nj,np,na=0,sa=0,i;
    printf("\nElei��es para Hokague abertas\n");
    printf("Por favor respeite as regras das elei��es");
    printf("\n");
    printf("\nRegras das elei��es:\n");
    printf("1-S� � permitido votar uma vez\n");
    printf("2-S� � valido digitar n�mero do partido, caso contrario seu voto n�o ser� validado\n");
    printf("3-Digitar apenas numero ninja positivo\n");
    printf("\n");
    for(i=0;i<1;i++){
    printf("Digite o seu n�mero ninja por favor: ");
    scanf("%i",&nj);
    if(nj<0){
    	break;
	}
		system("cls");
	printf("\nAs op��es s�o 1 e 2.\n");
    printf("Os partidos s�o:\n");
    printf("1-Partido do Trabalho �rduo- Naruto Uzumaki\n");
    printf("2-Partido do Talento- Sasuke Utchia \n");
    printf("Digite o n�mero partido: ");
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
     
 printf("\nElei��es encerradas\n");
 }

