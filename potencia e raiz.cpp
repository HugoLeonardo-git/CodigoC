#include <stdio.h>
#include <math.h>

int main(){
	
	float a,b,x;
	
    printf("Digite um numero:");
    scanf("%f",&x);
  
	a = pow(x,4);  // numero elevado a quatro //
	b = sqrt(x);
	
	printf("A potencia eh: %.3f \nA raiz eh: %.3f",a,b);
	
}
