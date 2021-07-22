#include<stdio.h>
#include <math.h>

int main(){
	float i,r;
	int t;
	
	printf("Digite seu investimento:");
	scanf("%f",&i);
	printf("Digite o tipo de investimento(1 ou 2):");
	scanf("%d",&t);
	
	switch(t)
	{
		case 1:
			r = i*1.02;
			printf("O retorno recebido com 2%% de acrescimo eh:%.2f",r);
			printf("\nRenda fixa");
		break;
		
		case 2:
			r = i*1.03;
			printf("O retorno recebido com 3%% de acrescimo eh:%.2f",r);
			printf("\nFundo de acoes");
		break;
	}
}
