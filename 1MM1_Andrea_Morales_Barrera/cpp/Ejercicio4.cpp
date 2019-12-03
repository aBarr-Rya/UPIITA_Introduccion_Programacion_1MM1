/*Escribir un programa que convierte un número dado de segundos en su
equivalente de horas, minutos y segundos.*/

#include<conio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


//prototipo de funcion
void tiempo(int,int&,int&,int&);


//hilo unico y principal
int main(){
	
	//variables
	int totalSeg,horas,min,seg, opc;char dec[10];
	//comienzo
	system("CLS");
		
	cout<<"                 Hola Bienvenido      \n\nusted ha entrado al conversor de segundos a horas y minutos"<<endl;

	cout<<"\n-Salir [1] -Continuar [2]"<<endl;
	cin>>opc;
	
	if(opc==1){
		cout<<"saliendo del programa......"<<endl;
		exit(1);
	}
	
	do{
		
		system("CLS");
		system("COLOR f4");
		cout<<"Calculando...."<<endl;
		//pidiendo datos...
		
		cout<<"\n\nIntroduce el numero de segundos a convertir "<<endl;
		cin>>totalSeg;
		//pasando variables de las cuales tomar la direccion de memoria
		tiempo(totalSeg,horas,min,seg);
		//mostrando datos ...
		
			cout<<"\n\n       Horas:    "<<horas<<endl;
			cout<<"       Minutos:  "<<min<<endl;
			cout<<"       Segundos: "<<seg<<endl;
			
		cout<<"\n\n\n¿Desea volver a calcular otro resultado?"<<endl;
		cin>>dec;	
	
	}while(strcmp(strupr(dec),"NO"));
	cout<<"\nSaliendo del programa.......\n\n"<<endl;
	
	
	getch();
	return 0;
}
//funcion definida
void tiempo(int totalSeg,int& hora,int& mi,int& se){	
	hora = totalSeg/3600;
	totalSeg %= 3600;
	mi = totalSeg/60;
	se = totalSeg%60; 
}

