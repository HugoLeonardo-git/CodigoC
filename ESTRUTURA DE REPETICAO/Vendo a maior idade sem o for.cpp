#include<stdio.h>

int main(){
	int idade=0,i,midade;
	float media;
	
	i=0;
	while(idade>=0){
		if((idade>midade)||(i==0)){
    	midade=idade;
   		}
   		
		printf("Digite a idade:");
		scanf("%d",&idade);
		i++;
	}
	printf("\na maior idade eh: %d",midade);
	printf("\qtd de vezes q perguntou a idade: %d",i);
}
