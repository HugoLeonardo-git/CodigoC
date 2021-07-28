#include<stdio.h>
#include<stdlib.h>
/* Faça um programa que calcule a sua média bimestral, de acordo com a fórmula utilizada em
nossa disciplina (Média = T1 * 0,15 + T2 * 0,15 + P1 *0,7). Lembre-se de validar as notas (não
podem ser menores que zero e nem maiores que 10). Em caso de notas inválidas, informar qual
a nota inválida e prosseguir somente quando o usuário digitar uma nota correta. Ao final,
perguntar se quer calcular outra média com as opções de resposta ‘S’ ou ‘N’. Para limpar a tela
utilize o comando system(“CLS”);.
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
