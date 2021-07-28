#include<stdio.h>

int main(){
	
	int i,idade,total;
	float media;
	
	total=0;
	do{
		printf("digite a idade:");
		scanf("%d",&idade);
		total=total+idade;
	}while(idade<0);
	media=total/10.0;                                                  
	printf("media: %.2f",media);
}
