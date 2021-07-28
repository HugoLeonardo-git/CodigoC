#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
/*
	Faça um programa para verificar se um número informado (positivo) é primo.
*/

int main(){
	
	int nprimo, i, qtddivisores = 0;
	
	printf("Digite o numero: ");
	scanf("%d",&nprimo);
	
	for(i = 1; i<=nprimo; i++){
		if(nprimo % i == 0){
			qtddivisores++;
		}
	}	
	if(qtddivisores == 2){
		printf("\nNumero primo");
	}else{
		printf("\nNao eh primo");
	}
}
