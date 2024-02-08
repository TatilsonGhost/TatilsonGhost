//Escreva um programa que recebe uma frase do utilizador e
//apresenta quantas vogais e consoantes existem na frase.

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
    char frase[100];
    char vo='a';
    char con='b';
    int i,q,vow=0,cons=0;
    printf("Digite a frase: ");
    scanf("%99[^\n]s",frase[100]);
     q=strlen(frase);
     for(i=0;i<5;i++){
     	vo+=i;
     	 if(tolower(frase[i])==vo)
		 	vow=vo;
	 }
    
     for(i=0;i<26;i++){
     	con+=i;
     	if(frase[i]==con)
     	cons++;
	 }
 printf("A frase tem %i vogais e %i consoantes.",vo,con);
 }

