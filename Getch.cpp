#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
	char opc,opc2;
	
	printf("Digite uma opcao: ");
	opc = getch();                                   // vai direto porém não mostra o valor digitado 
	
	printf("\nOpcao digitada: %c",opc);
	
	printf("\nDigite uma opcao: ");
	opc2 = getche();								// vai direto  porém mostra o valor digitado 
	
	printf("\nOpcao digitada: %c",opc2);
	
}
