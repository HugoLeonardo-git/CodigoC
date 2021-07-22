#include <stdio.h>

int main(){
	int n;
	char f[25] = "Bom final de semana";
	printf("Digite o numero do dia da semana:");
	scanf("%d",&n);
	
    if(n==2){
		printf("Segunda!");	
	} 
	
	else if(n==3){
		printf("Terca!");	
	} 
	
	else if(n==4){
		printf("Quarta!");	
	} 
	
	else if(n==5){
		printf("Quinta!");	
	} 
	
	else if(n==6){
		printf("Sexta!");	
	} 
	
	else if(n==7){
		printf("Sabado!");
		printf("%s",f);
	}
		else if(n==1){	
		printf("Domingo!");
		printf("%s",f);
	}
}
