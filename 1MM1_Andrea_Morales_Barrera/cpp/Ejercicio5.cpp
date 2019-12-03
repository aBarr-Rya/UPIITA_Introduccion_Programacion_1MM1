/*
Escribir un programa que lea la temperatura en grados Celsius y convierta a
Farenheit y viceversa. El usuario ingresará el valor de los grados y una letra: la
cual indica que tipo de grados está ingresando, dicha letra puede ser una ‘c’ si los
grados ingresados son Celsius o una ‘f’ si los grados ingresados son Farenheit.
Por ejemplo puede ingresar: 25f

*/

#include<conio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;


//prototipo de funcion
void convierteaCelcius(double );
void convierteaFarenheit(double );
double farenheit,celcius;
//hilo unico y principal
int main(){
	
	//variables
	int opc,temp;char dec[10];
	//comienzo
	system("CLS");
		
	cout<<"                 Hola Bienvenido      \n\nusted ha entrado al conversor de Celcius-Farenheit && Farenheit-Celcius"<<endl;

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
		do{
		
		cout<<"\n\n ¿Que deseas convertir? \n\n  Celcius a Farenheit [1]  Farenheit a Celcius [2]"<<endl;
		cin>>temp;
		
		if(temp==1){
				cout<<"introduce los grados Celcius a convertir"<<endl;
				cin>>celcius;
				convierteaFarenheit( celcius);
				cout<<celcius<<" grados Celcius  a Farenheit son : "<<farenheit<<endl;
		}else if(temp==2){
			
				cout<<"introduce los grados Farenheit a convertir"<<endl;
				cin>>farenheit;
				convierteaCelcius( farenheit);
				cout<<farenheit<<" grados Farenheit a Celcius son : "<<celcius<<endl;
	
			
		}else{
			system("CLS");
			cout<<"No has introducido una opcion valida, intentalo de nuevo"<<endl;
			
		}
		
		}while(temp!=1 &&temp!=2);
		
					
		cout<<"\n\n\n¿Desea volver a calcular otro resultado?"<<endl;
		cin>>dec;	
	
	}while(strcmp(strupr(dec),"NO"));
	cout<<"\nSaliendo del programa.......\n\n"<<endl;
	
	
	getch();
	return 0;
}
//funcion 

void convierteaCelcius(double farenheit){	
	celcius=(5*(farenheit-32))/9;


}
void convierteaFarenheit(double celcius){
	farenheit=((9*celcius)/5)+32;
	
}



