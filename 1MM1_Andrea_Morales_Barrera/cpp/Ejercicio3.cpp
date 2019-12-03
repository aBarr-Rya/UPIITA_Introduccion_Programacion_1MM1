/*
Calcular el volumen y área de un cono. El usuario ingresará el radio
y la altura ( ) el programa calculará el área [en una sola línea
de código] y el volumen [en otra línea]. Para ello requerirá obtener
el lado ( y usar como una constante.

*/
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
	
	int opc;double radio,altura,area,volumen,generatriz;const double pi = 3.14159265358;char dec[10];string medida;
	
	system("CLS");
		
	cout<<"                 Hola Bienvenido      \n\nusted ha entrado a la modalidad Calculo de Volumen y area del Cono "<<endl;

	cout<<"\n-Salir [1] -Continuar [2]"<<endl;
	cin>>opc;
	
	if(opc==1){
		cout<<"saliendo del programa......"<<endl;
		exit(1);
	}
	
	do{
		
		system("CLS");
		system("COLOR ec");
		cout<<"Calculando...."<<endl;
		//pidiendo datos...
		
		cout<<"\n\nIntroduce la Altura: "<<endl;
		cin>>altura;
		cout<<"Introduce el radio del cono: "<<endl;
		cin>>radio;
		cout<<"Calculando Cono de altura  "<<altura<<" y radio  "<<radio <<" .... \n"<<endl;
		
		//calculos
		generatriz=sqrt(pow(altura,2)+pow(radio,2));
		area=(pi*generatriz*radio)+(pi*(pow(radio,2)));
		volumen=(pi*(pow(radio,2))*altura)/3;
	
		//mostrando datos ...
		
		cout<<"El Cono posee ... \n\n-una generatriz de : "<<generatriz<<"\n-un Area total de : "<<area<<"\n-un Volumen de : "<<volumen<<endl;
		
		cout<<"\n\n\n¿Desea volver a calcular otro resultado?"<<endl;
		cin>>dec;	
	
	}while(strcmp(strupr(dec),"NO"));
	cout<<"\nSaliendo del programa.......\n\n"<<endl;
	system("pause");
	return 0;
	
}
