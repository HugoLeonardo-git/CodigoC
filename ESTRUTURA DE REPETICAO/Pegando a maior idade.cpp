#include<stdio.h>

int main(){
	
	int i,idade,total,midade,meidade;
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
    if((idade>midade)||(i==1)){
    	midade=idade;
	}
	 if((idade<meidade)||(i==1)){
    	meidade=idade;
	}
	total=total+idade;
	}
	
	media=total/10.0;                                                  
	printf("media: %.2f",media);
	
	printf("\na maior idade eh: %d",midade);
	printf("\na menor idade eh: %d",meidade);
}
