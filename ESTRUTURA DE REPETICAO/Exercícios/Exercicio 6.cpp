#include<stdio.h>
/* Um funcion�rio de uma empresa recebe um aumento salarial anual. Sabe-se que este
funcion�rio ingressou na empresa em 2005 com o sal�rio de R$ 1.000,00. No ano de 2006 ele
recebeu 1,5% de aumento e nos anos seguintes passou a receber o dobro do percentual do ano
anterior. Fa�a um programa que receba o ano atual e mostre o sal�rio atual deste funcion�rio e
mostra quantos anos ele tem de empresa.
*/
int main(){
	
	float sal,salanovo,per;
	int at,ano,tempo;
	
	tempo=at-2005;
	sal=1000;
	ano=2006;
	per=1.5;
	salanovo=sal+sal*per/100;
	
	printf("Digite o ano");
	scanf("%d",&at);
	
	for(ano=2007;ano<=at;ano++){
		per = per*2;
		salanovo= salanovo+salanovo*per/100;
	}
	printf("%f",salanovo);
}
