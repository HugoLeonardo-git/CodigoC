#include<stdio.h>
/* Para que a divis�o entre 2 n�meros possa ser realizada, o divisor n�o pode ser igual a zero.
Escreva um programa para ler 2 valores e imprimir o resultado da divis�o do primeiro pelo
segundo. O programa deve validar a leitura do segundo valor. Enquanto for fornecido um valor
igual a zero a leitura deve ser repetida e o programa dever� mostrar a mensagem �Valor
inv�lido�. Fa�a 2 vers�es deste programa: uma usando o teste no in�cio e a outra usando o teste
no final.
*/
int main(){
	
	float a,b=0,r;
	
	while(b==0){
	
	printf("Digite o 1 numero:");
	scanf("%f",&a);
	printf("Digite o 2 numero:");
	scanf("%f",&b);
	}
	r = a/b;
	printf("O resultado eh: %.2f",r);

}
