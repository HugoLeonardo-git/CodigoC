#include<stdio.h>
#include <math.h>

int main(){
	int d1,d2,ano1,mes1,dia1,ano2,mes2,dia2,d1_OK = 0, d2_OK = 0;
	
	printf("Digite a 1a data:");
	scanf("%d",&d1);
	printf("Digite a 2a data:");
	scanf("%d",&d2);
	
	ano1 = d1/10000;
	mes1 = d1/100 - (ano1*100);
	dia1 = d1 - ((d1/100)*100);
	
	ano2 = d2/10000;
	mes2 = d2/100 - (ano2*100);
	dia2 = d2 - ((d2/100)*100);

	printf ("%d\n%d\n%d\n%d\n%d\n%d\n",ano1,mes1,dia1,ano2,mes2,dia2);
	
		if(mes1>=1&&mes1<=12){
			switch(mes1)
			{
		
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
		
				if(dia1>=1&&dia1<=31){
					d1_OK = 1;
				}else{
					printf("Dia invalido");
				}
				break;
			
			case 2:
				
				if(dia1>=1&&dia1<=28){
					d1_OK = 1;
				}else{
				printf("Dia invalido");
				}
				break;
		}
			
			
			
		}
		else{
			printf("Mes invalido");
		}
	
		if(mes2>=1&&mes2<=12){
			
			switch(mes2)
			{
		
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
		
				if(dia2>=1&&dia2<=31){
					d2_OK = 1;
				}else{
					printf("Dia invalido");
				}
				break;
				
				
			case 2:
				
				if(dia1>=1&&dia1<=28){
					d1_OK = 1;
				}else{
				printf("Dia invalido");
				}
				
				break;
			
			}
		}else{
			printf("Mes invalido");
		}
		
		if(d1>d2){
			printf("\nA 1a data eh maior");
		}else{
			printf("\nA 2a data eh maior");
		}
	}
