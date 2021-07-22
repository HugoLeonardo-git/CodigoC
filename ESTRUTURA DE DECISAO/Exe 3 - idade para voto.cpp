#include<stdio.h>
#include <math.h>

int main(){
	
	int i;
	printf("Digite sua idade:");
	scanf("%d",&i);
	
	if(i<16){
		printf("Nao pode votar nem dirigir");
	}else if(i>=16&&i<18){
		printf("Voto facultativo, nao pode dirigir");
	}else if(i>=18&&i<70){
		printf("Voto obrigatorio. Pode dirigir");
	}else if(i>=70){
		printf("Voto facultativo");
	}
}
