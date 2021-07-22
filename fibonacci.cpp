#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
	
    int i, n1=0, n2=1, valor;
    
    printf("Os 21 primeiros termos da sequencia de fibonacci sao: \n");
    
    for(i=1; i<=21; i++){
    	
    	if(i==1){
    		
    		valor = 0;
    		
		}else if(i==2){
			
			valor = 1;
			
		}else{
			
			valor = n1+n2;
			n1 = n2;
			n2 = valor;
			
		}
    	
    	cout << "\nTermo " <<i << " valor: " << valor;
    	
	}
    
}
