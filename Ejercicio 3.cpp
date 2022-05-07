#include<iostream>
using namespace std;

int main(){
	int i,num,divisores,primo,n;
	
	//Incialización de variables
	i=1; //Se inicia el divisor en 1
	num=2; //Se inicia el contador de números hasta 50 en 2
	divisores=0;
	primo=1;
	int primos[50]; //Vector de medida 1
	n=0;
	
	while(num<=50){ //divisor -- Va a dividir el mismo numero 50 veces 
		while(i<=50){ //Se divide el mismo numero entre los numeros entre 1 y 50
			if(num%i==0){ //Calcula los divisores del numero
				divisores++; //El numero solo puede tener 2 divisores (1 y sí mismo
			}
			i++; //Aumenta el divisor
		}
		i=1; //Reinicia el divisor en 1
		
		if(divisores==2){ //Si tiene dos divisores solamente, es primo
			primo++; //contador de numeros primos
			primos[n]=num;
			n++;
		}
		
		divisores=0; //Reinicia el contador de divisores
		num++;
	}
	
	i=0;
	cout<<"Los numeros primos entre 1 y 50 son: ";
	while(i<primo-1){
		cout<<primos[i]<<", ";
		i++;
	}
	
	return 0;
	
}