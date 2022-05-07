#include<iostream>
using namespace std;

int main(){
	int i,cant,vlr,total;
	int prod;
	
	//Incializar variables
	i=0;
	
	cout<<"Cuantos elementos tendran los arreglos?: ";
	cin>>cant; //Define la medida de ambos arreglos
	
	int array1[cant]; //Se declaran ambos arreglos con la misma medida
	int array2[cant];
	int producto[cant]; //Se declara el arreglo producto
	
	cout<<"ARREGLO 1:"<<endl;
	while(i<cant){
		cout<<"Ingrese el valor "<<i<<" del primer arreglo: ";
		cin>>vlr;
		array1[i]=vlr; //almacena los valores dentro del arreglo 1
		i++;
	}
	
	i=0;
	cout<<"ARREGLO 2:"<<endl;
	while(i<cant){
		cout<<"Ingrese el valor "<<i<<" del segundo arreglo: ";
		cin>>vlr;
		array2[i]=vlr; //almacena los valores dentro del arreglo 2
		i++;
	}
	total=cant-1;
	
	i=0;
	while(i<cant){
		producto[i]=array1[i]*array2[total];
		total--;
		i++;
	}

	//Imprime ambos arreglos (1 y 2) y el producto
	i=0;
	cout<<"Arreglo1 = [";
	while(i<cant){
		cout<<array1[i]<<", ";
		i++;
	} cout<<"]"<<endl;
	
	i=0;
	cout<<"Arreglo2 = [";
	while(i<cant){
		cout<<array2[i]<<", ";
		i++;
	} cout<<"]"<<endl;
	
	i=0;
	cout<<"Producto = [";
	while(i<cant){
		cout<<producto[i]<<", ";
		i++;
	} cout<<"]"<<endl;
	
	return 0;
}