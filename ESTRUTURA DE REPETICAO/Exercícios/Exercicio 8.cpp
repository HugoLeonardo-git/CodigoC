#include<stdio.h>
#include<stdlib.h>
/* Faça um programa em que o usuário entre com um valor maior que 10 (valide de modo que
obrigue o usuário a digitar um valor válido) e mostre todos os números ÍMPARES até esse número,
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
