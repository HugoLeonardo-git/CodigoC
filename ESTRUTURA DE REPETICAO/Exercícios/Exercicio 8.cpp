#include<stdio.h>
#include<stdlib.h>
/* Fa�a um programa em que o usu�rio entre com um valor maior que 10 (valide de modo que
obrigue o usu�rio a digitar um valor v�lido) e mostre todos os n�meros �MPARES at� esse n�mero,
inclusive ele mesmo, se for o caso.
*/
int main (){
	int n,i,r;
	
	do{
	
	printf("Digite um numero: ");
	scanf("%d",&n);
	
	}while(n<=10);
	
	if(n % 2 == 1){
	
		for(i=1;i<=n;i+=2){
	
			r=i;
			printf("%d\n",r);
		}
	}else{
		for(i=1;i<n;i+=2){
	
			r=i;
			printf("%d\n",r);
		}
	}
}
