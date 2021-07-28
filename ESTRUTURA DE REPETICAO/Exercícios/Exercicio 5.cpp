#include<stdio.h>

int main(){
/* Faça um programa que calcule e mostre os 20 primeiros elementos da sequência de Fibonacci,
usando estrutura de repetição: 0 - 1 - 1 - 2 - 3 - 5 - 8 - 13 - 21 - 34 - 55 - 89 - 144 - 233 - 377 - 610
- 987 - 1597 - 2584 – 4181
*/
	int n1,n2,res,i;
	
	n1=0;
	n2=1;
	
	printf("escreva n1:");
	scanf("%d",&n1);
	printf("escreva n2:");
	scanf("%d",&n2);
	
	for (i=3;i<=20;i++){
		
		res=n1+n2;
		printf("%d",res);
		n1=n2;
		n2=res;
	}
}
