#include<stdio.h>

int main(){
/* Fa�a um programa para calcular o fatorial de um n�mero (N!). Lembre-se de validar para que
nenhum n�mero negativo seja digitado e que o fatorial de 0 (zero) � igual a 1.
*/	
	
	int n,i,fat;
	
		printf("Digite um numero para ver seu fatorial: ");
		scanf("%d",&n);
		fat=1;
		for(i=1;i<=n;i++){
			printf("Fat: %d * %d: %d\n",fat, i, fat*i);
			fat=fat*i;						
		}
}
