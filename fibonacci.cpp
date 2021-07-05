#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int i, n1=1, n2=2, valor;
    
    for(i=1; i<=21; i++){
    	
    	if(i==1){
    		
    		valor = 1;
    		
		}else if(i==2){
			
			valor = 2;
			
		}else{
			
			valor = n1+n2;
			n1 = n2;
			n2 = valor;
			
		}
    	
    	cout << "\nTermo" <<i << " valor: " << valor;
    	
	}
    
}
