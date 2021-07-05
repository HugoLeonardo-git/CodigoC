#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main(){
	
	int  menor, cidade_menor, maior, cidade_maior, cidade_abaixo[10], i;
	float acidente[10], porcentagens[10], media, total_acidentes;
	
	total_acidentes = 0;
	
	for(i=1; i<=10; i++){
		
		cout << "Acidentes na cidade " <<i <<": ";
		cin >> acidente[i];
		
		total_acidentes += acidente[i];
		
		if(i==1){
			
			maior = acidente[i];
			cidade_maior = i;
			menor = acidente[i];
			cidade_menor = i;
			
		}else{
		
		
			if(acidente[i]>maior){
				
				maior = acidente[i];
				cidade_maior = i;
				
			}
			
			if(acidente[i]<menor){
				
				menor = acidente[i];
				cidade_menor = i;
			
			}
		}
	}
	
	media = total_acidentes/10;
	
	for(i=1; i<=10; i++){
		
		porcentagens[i] = (acidente[i]/total_acidentes) * 100;
		
		if(acidente[i]<media){
			
			cidade_abaixo[i] = 1;
			
		}else{
			
			cidade_abaixo[i] = 0;
			
		}
		
	}
	
	
	cout<<"\n(A)Total de acidentes: "<<total_acidentes;
	cout<<"\n\n(B) A cidade com o maior numero de acidentes foi a " << cidade_maior <<", com " << maior << " acidentes";
	
	printf("\n\n(C)As cidades que tiveram numero de acidentes abaixo da media (%.2f) foram: ", media);
	
	for (i=1; i<=10; i++){
		
		if(cidade_abaixo[i]==1){
			
			cout<<"\n"<<i;
			
		}
		
	}
	
	cout<<"\n\n(D)As porcentagens de cada cidade sao:";
	
	for (i=1; i<=10; i++){
		
		printf("\nCidade %d: %.2f %%", i, porcentagens[i]);
		
	}
	
	
	
	
	
	
	
}
