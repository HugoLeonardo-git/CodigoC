#include<stdio.h>

int main(){
	
	int n;
	
	printf("Digite o numero:");
	scanf("%d",&n);
	
	switch(n)
		{
			case 1:
				printf("sul");
			break;
			
			case 2:
				printf("Norte");
			break;
			
			case 3:
				printf("Leste");
			break;
			
			case 4:
				printf("Oeste");
			break;
			
			case 5:
				printf("Nordeste");
			break;
			
			case 6:
				printf("Nordeste");
			break;
			
			case 7:
				printf("Sudeste");
			break;
			
			case 8:
				printf("Sudeste");
			break;
			
			case 9:
				printf("Sudeste");
			break;
			
			case 10:
				printf("Centro-Oeste");
			break;
			
			case 11:
				printf("Noroeste");
			break;
				
			default:
				printf("Importado");
		}   
}
