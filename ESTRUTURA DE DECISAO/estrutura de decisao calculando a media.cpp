#include <stdio.h>

int main(){
	float a,b,c,m;
	printf("Digite  nota do trabalho 1:");
	scanf("%f",&a);
	printf("Digite  nota do trabalho 2:");
	scanf("%f",&b);
	printf("Digite  nota da prova:");
	scanf("%f",&c);
	
	m = (a*0.15) + (b*0.15) + (c*0.7);
	
	if( m>=6 ){	
	printf("Voce  foi aprovado!");
	}else{	
	printf("Voce  foi reprovado!");
	}
    printf("\nVoce tirou %.2f",m);
}
