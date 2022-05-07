#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int i,oth,vlr,cant,j,m,men,may;
	float sum,prom;
	
	//Inicialización de variables
	oth=1;
	i=1;
	j=1; //contador para los numeros menores
	m=1; //contador para los numeros mayores
	cant=0; //Cuenta la cantidad de elemento del arreglo
	men=0;
	may=0;
	int inicial[i]; //Arreglo inicial con una medida de 1 
	int menores[j]; //Arreglo de numeros menores con una medida inicial de 1
	int mayores[m]; //Arreglo de numeros menores con una medida incial de 1
	
	while(oth==1){
		cant=cant+1; //Lleva la cantidad de elementos del arreglo
		int incial[cant]; //El arreglo inicial aumentará su medida ajustandose a la cantidad de elementos que contenga
		cout<<endl<<"Ingrese el valor numero "<<i<<": ";
		cin>>vlr; //Ingresa cada volor dentro del arreglo
		cout<<"i-1= "<<i-1<<endl;
		inicial[i-1]=vlr; //Almacena el valor ingresado en una pocición del arreglo iniciando desde la pocición 0
		
		i++; //Aumenta la medida del arreglo
		
		cout<<endl<<"Quiere ingresar un nuevo numero?: "<<endl<<"1.Si"<<endl<<"2.No"<<endl<<"Opcion: ";
		cin>>oth; //Permite que el bucle se repita y se puedan seguir ingresando numeros 
	}
	
	cout<<"Cant= "<<cant;
	
	i=0; //se reutiliza el contador (ahorrar variables) 
	while(i<cant){
		sum=sum+inicial[i]; //Suma todos los valores del arreglo iniciando desde la posición 0
		i++;  
	}
	cout<<"Sum= "<<sum<<endl;
	
	prom=sum/cant; //Calcula el valor del promedio 
	
	cout<<"El promedio de los "<<cant<<" numeros es: "<<prom<<endl; //Imprime el promedio

	i=0; //se reutiliza el contador (ahorrar variables) 
	j=0; //se inicia j en 0 para guardar elementos en el arreglo menores desde la posición 0
	m=0; //se inicia m en 0 para guardar elementos en el arreglo mayores desde la posición 0
	while(i<cant){
		if(inicial[i]<=prom){
			menores[j]=inicial[i]; //Guarda el valor del arreglo incial correspondiente dentro del arreglo de numeros menores
			men=men+1; //Lleva la cuenta de cuantos numeros menores van
			menores[men]; //Reajusta la medida del arreglo 
			j++; 
		} else { //mismo procedimientos del if pero con valores mayores al promedio
			mayores[m]=inicial[i];
			may=may+1;
			mayores[may];
			m++;
		}
		i++;
	}
	
	//Resultado
	i=0; //se reutiliza el contador (ahorrar variables)
	cout<<"Se ingresaron "<<men<<" numeros menores o iguales al promedio y son: ";
	while(i<men) {
		cout<<menores[i]<<", ";
		i++;
	}
	
	i=0;
	cout<<endl<<"Se ingresaron "<<may<<" numeros mayores al promedio y son: ";
	while(i<may){
		cout<<mayores[i]<<", ";
		i++;
	}
	
	getch();
	return 0;
}