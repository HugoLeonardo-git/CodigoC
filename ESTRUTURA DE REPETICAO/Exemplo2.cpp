#include<stdio.h>

int main(){
	
	int i,idade,total;
	float media;
	
	total=0;
	for(i=1;i<=10;i++){
		do{
		printf("digite a idade %d: ",i);
		scanf("%d",&idade);
		if(idade<0){
		
			printf("Idade invalida\n");
    	}
    }while(idade<0);
    
	total=total+idade;
	}
	
	media=total/10.0;                                                  
	printf("media: %.2f",media);
		
	
}
