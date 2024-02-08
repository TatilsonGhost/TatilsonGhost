//. Escreva um programa que preenche um vetor de carateres com as letras do abecedário. Imprima no ecrã o seu conteúdo.

#include<stdlib.h>
#include<stdio.h>

 main(){
 char ca[26];
 char i='a';
int j;
 for(j=0;j<26;j++){
 ca[j]=j+1;	
 }
 for(j=0;j<26;j++){
 	printf("%s",ca[j]);
 }
 
 
 }

