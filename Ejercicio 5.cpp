#include<iostream>
using namespace std;

int main(){
	int i,kw,mes,usr,lect,consumo;
	string nombre;
	
	//Incialización de variables
	mes=0;
	string meses[13]={"error","Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre"};
	

	cout<<"Energia Para Todos"<<endl; //Título
	
	while((mes<1)||(mes>12)){ //El usuario elige el mes
	cout<<endl<<"Digite el mes actual: "<<endl;
	cout<<"1. Enero        2.Febrero"<<endl;
	cout<<"3. Marzo        4.Abril"<<endl;
	cout<<"5. Mayo         6.Junio"<<endl;
	cout<<"7. Julio        8.Agosto"<<endl;
	cout<<"9. Septiembre   10.Octubre"<<endl;
	cout<<"11.Noviembre    12.Diciembre"<<endl;
	cout<<"Mes: ";
	cin>>mes;
	}
	
	cout<<endl<<"Ingrese el valor del Kw: ";
	cin>>kw; //El usuario ingresa el valor del Kw
	
	cout<<endl<<"Con cuantos usuarios cuenta la empresa?: ";
	cin>>usr; //Se pregunta la cantidad de usuarios para definir la medida de los vectores
	string usuarios[usr]; //Almacena los nombres
	int mes_ant[usr]; 
	int mes_act[usr];
	
	cout<<endl<<"LISTA DE USUARIOS"<<endl;
	i=0;
	while(i<usr){
		cout<<"Ingrese el nombre del usuario "<<i+1<<": ";
		cin>>nombre;
		usuarios[i]=nombre; //Guarda cada uno de los nombres ingresados
		i++;
	}
	
	cout<<endl<<"CONSUMO ACTUAL"<<endl;
	i=0;
	while(i<usr){
		cout<<"Ingrese la lectura del mes actual ("<<meses[mes]<<") de "<<usuarios[i]<<": ";
		cin>>lect;
		mes_act[i]=lect; //Guarda las lecturas del mes actual del usuario
		i++;
	}
	
	switch (mes){ //Cuando el usuario ingrese el mes 1, el anterior será el mes 12
		case 1:
			mes=12;
			break;
		default:
			mes=mes-1;
			break;
	}
	
	cout<<endl<<"CONSUMO DEL MES ANTERIOR"<<endl;
	i=0;
	while(i<usr){
		cout<<"Ingrese la lectura del mes anterior ("<<meses[mes]<<") de "<<usuarios[i]<<": ";
		cin>>lect;
		while(lect>mes_act[i]){
			cout<<"La medida anterior debe ser menor o igual a la medida del mes actual"<<endl<<"Ingrese nuevamente la lectura: ";
			cin>>lect;
		}
		mes_ant[i]=lect; //Guarda las lecturas del mes anterior
		i++;
	}
	
	cout<<endl<<"FACTURACION"<<endl;
	i=0;
	while(i<usr){
		consumo=mes_act[i]-mes_ant[i];
		cout<<usuarios[i]<<"consumio "<<consumo<<"kw por un valor de $"<<consumo*kw<<endl;
		i++;
	}
	
	return 0;
}