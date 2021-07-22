#include <stdio.h>

int main(){
	
	int numero1,numero2;
	printf("Digite o numero a:");
	scanf("%d",&numero1);
	printf("Digite o numero b:");
	scanf("%d",&numero2);
	
	if(numero1>numero2){		
		printf("O numero a eh maior");	
	}else{
		if(numero1<numero2){
			printf("O numero b eh maior");
		}else{
			printf("Os numeros sao iguais");
		}	
	}	
}
