/*
Escribir un programa para convertir una medida dada en pies a sus equivalentes
en: yardas, pulgadas, centímetros y metros (1 pie= 12 pulgadas, 1 yarda= 3 pies, 1
pulgada = 2.54 cm, 1 m = 100 cm). Leer el número de pies e imprimir el número de
yardas, pies, pulgadas, centímetros y metros.

*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
	
	int opc;float pies,yardas,pulgadas,centimetros,metros,conver;char dec[10];string medida;
	
	
		system("CLS");
		
	cout<<"                 Hola Bienvenido      \n\nusted ha entrado a la modalidad Convertir Pies a {  -yardas\n                                                    -pulgadas\n                                                    -centimetros\n                                                    -metros\n} "<<endl;

	cout<<"\n-Salir [1] -Continuar [2]"<<endl;
	cin>>opc;
	
	if(opc==1){
		cout<<"saliendo del programa......"<<endl;
		exit(1);
	}
	
	do{
		system("CLS");
		system("COLOR 5E");
		cout<<"Calculando...."<<endl;
		cout<<"\n\nIntroduce los pies a convertir: "<<endl;
		cin>>pies;
		cout<<"A que unidad deseas convertirlos? :"<<endl;
		
		cout<<"Yardas [0] Pulgadas [1] Centimetros [2] metros [3] Todas [4]"<<endl;
		cin>>opc;
		
		switch(opc){
			case 0:
				conver=pies/3;
				medida="Yardas";
			break;
			case 1: 
				conver=pies*12;
				medida="Pulgadas";
			break;
			case 2: 
				conver=pies*30.48;
				medida="Centrimetros";
			break;
			case 3: 
				conver=pies*.3048;
				medida="Metros";
			break;
			case 4: 
				yardas=pies/3;
				pulgadas=pies*12;
				centimetros=pies*30.48;
				metros=pies*.3048;
			break;
			default: 
			cout<<"no has tecleado una opcion correcta"<<endl;
			
		}
		
		if(opc==4){
			
		cout<<pies<<" Pies  a Yardas es : "<<yardas<<endl;
		cout<<pies<<" Pies  a Pulgadas es : "<<pulgadas<<endl;
		cout<<pies<<" Pies  a Centimetros es : "<<centimetros<<endl;
		cout<<pies<<" Pies  a Metros es : "<<metros<<endl;
		
		
		}else{
			
		cout<<pies<<" Pies  a "<<medida<<" es : "<<conver<<endl;
			
		}
		
		cout<<"\n\n\n¿Desea volver a calcular otro resultado?"<<endl;
		cin>>dec;	
	
		
		
		
	
		
	}while(strcmp(strupr(dec),"NO"));
	cout<<"\nSaliendo del programa.......\n\n"<<endl;
	system("pause");
	return 0;
	
}
