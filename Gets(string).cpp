#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char nome[20];
	
	printf("Digite seu nome: ");
	
	gets(nome);
	
	printf("\nBoa tarde, %s! ",nome);
	
}
