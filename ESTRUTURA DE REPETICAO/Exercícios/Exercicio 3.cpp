#include<stdio.h>
#include<stdlib.h>
/* Fa�a um programa para exibir a tabuada de um n�mero inteiro qualquer. Ao final, perguntar se
o usu�rio quer exibir outra tabuada.
*/
int main (){
	char opc;
	int n,i;
	
	do{
		system("CLS");
		
			printf("Digite o numero:");
			scanf("%d",&n);
			for(i=0;i<=10;i++){
				printf("%d x %d = %d \n",n,i,n*i);
			}
		printf("Deseja fazer outra tabuada S/N?");
		scanf(" %c",&opc);
		
	}while(opc=='s'||opc=='s');
}
