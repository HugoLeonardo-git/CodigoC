#include<stdio.h>

int main(){
	
	int i,idade,total;
	float media;
	
	total=0;
	for(i=1;i<=10;i++){
		printf("digite a idade %d:",i);
		scanf("%d",&idade);
		total=total+idade;
	}
	media=total/10.0;                                                   // necessario botar ".0" para n arredondar o resultado
	printf("media: %.2f",media);
}
