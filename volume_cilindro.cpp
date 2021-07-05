#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

int main(){
	
	float raio, altura, volume;
	
	cout<<"Raio do cilindro:";
	cin>>raio;
	
	
	cout<<"Altura do cilindro:";
	cin>>altura;
	
	volume = pow(raio,2)*3.14*altura;
	
	cout<<"Volume = "<<volume;
	
	
}
