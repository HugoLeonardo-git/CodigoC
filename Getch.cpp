#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char opc,opc2;
	
	printf("Digite uma opcao: ");
	opc = getch();                                   // vai direto por�m n�o mostra o valor digitado 
	
	printf("\nOpcao digitada: %c",opc);
	
	printf("\nDigite uma opcao: ");
	opc2 = getche();								// vai direto  por�m mostra o valor digitado 
	
	printf("\nOpcao digitada: %c",opc2);
	
}
