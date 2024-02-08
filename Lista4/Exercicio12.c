//12.Implemente um programa que receba uma string e informe:
//a) número de palavras,
//b) número de caracteres,
//c) número de caracteres em maiúscula,
//d) número de caracteres em minúscula,
//e) quantidade de caracteres numéricos

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<locale.h>
 main(){
	setlocale(LC_ALL,"Portuguese");
     char frase[100];
     int i,ma=0,mi=0,di=0,q,pa;
    printf("Digite a frase: ");
    scanf(frase,100,stdin);
    pa=0;
    while(frase[pa]!='\0'&&frase[pa]!='\n'){
    	pa++;
	}
 q=strlen(frase);
 for(i=0;frase[i]!='\0';i++){
 	if(islower(frase[i]))
 	mi++;
 	if(isupper(frase[i]))
 	ma++;
 	if(isdigit(frase[i]))
 	di++;
 }
  
 printf("A frase tem %i palavras %i caracteres %i minuscula e %i maiusculas e %i numeros",pa,q,mi,ma,di);
 }

