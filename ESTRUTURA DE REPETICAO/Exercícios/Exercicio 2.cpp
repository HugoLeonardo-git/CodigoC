#include<stdio.h>
#include<stdlib.h>
/* Fa�a um programa que calcule a sua m�dia bimestral, de acordo com a f�rmula utilizada em
nossa disciplina (M�dia = T1 * 0,15 + T2 * 0,15 + P1 *0,7). Lembre-se de validar as notas (n�o
podem ser menores que zero e nem maiores que 10). Em caso de notas inv�lidas, informar qual
a nota inv�lida e prosseguir somente quando o usu�rio digitar uma nota correta. Ao final,
perguntar se quer calcular outra m�dia com as op��es de resposta �S� ou �N�. Para limpar a tela
utilize o comando system(�CLS�);.
*/
int main(){
	char opc;
	float a,b,c,m;
	
	do{
		system("CLS");

		do{
			printf("Digite o 1 numero:");
			scanf("%f",&a);
			if(a<0||a>10){
			printf("1a nota invalida\n");
			}
		}while(a<0||a>10);
	
		do{
			printf("Digite o 2 numero:");
			scanf("%f",&b);
			if(b<0||b>10){
			printf("2a nota invalida\n");
			}
		}while(b<0||b>10);
	
		do{
			printf("Digite o 3 numero:");
			scanf("%f",&c);
			if(c<0||c>10){
			printf("3a nota invalida\n");
			}
		}while(c<0||c>10);
	
		m=a*0.15+b*0.15+c*0.70;
	
		printf("media: %.2f",m);
		do{
			printf("\nDeseja calcular outra media S/N?");
			scanf(" %c",&opc);	
		}while((opc != 'S')&&(opc != 's')&&(opc != 'N')&&(opc != 'n'));
	}while(opc=='s'||opc=='S');
}
