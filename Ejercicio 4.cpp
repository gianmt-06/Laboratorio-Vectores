#include<iostream>
using namespace std;

int main(){
	int i,num;
	int array1[10]; //Array rellenado por el usuario
	int array2[10]; 
	
	//Inicializar variables
	i=0;
	
	while(i<10){
		cout<<"Ingrese el numero en la posicion "<<i<<": ";
		cin>>num;
		array1[i]=num;
		
		if(num%2==0){
			array2[i]=num*num; //cuadrado del número
		} else {
			array2[i]=num*num*num; //cubo del numero
		}
		i++;
	}
	
	i=0;
	cout<<"Vector 1: [";
	while(i<10){
		cout<<array1[i]<<", ";
		i++;
	}cout<<"]";
	
	i=0;
	cout<<endl<<"Vector 2: [";
	while(i<10){
		cout<<array2[i]<<", ";
		i++;
	}cout<<"]";
	
	return 0;
}