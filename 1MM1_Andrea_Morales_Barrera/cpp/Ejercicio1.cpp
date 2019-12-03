/*Escribir un programa que resuelva la siguiente expresión:

                    (x+y)^2 * (a-b)

*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <math.h>

using namespace std;

int main(){
	
	int opc, x,y,a,b,res;char dec[10] ;
	
	do{
		system("CLS");
		
	cout<<"Hola Bienvenido, \n\nusted ha entrado a la modalidad calcular la expresion :\n\n                    (x+y)^2 * (a-b)  "<<endl;
	
	cout<<"\n-Si desea salir pulse 1 -Si desea continuar pulse 2"<<endl;
	cin>>opc;
	
	if(opc==1){
		cout<<"saliendo del programa"<<endl;
		exit(1);
	}else{
		system("CLS");
		system("COLOR 4f");
		cout<<"Calculando...."<<endl;
		cout<<"\n\nIntroduce el valor de x :"<<endl;
		cin>>x;
		cout<<"Introduce el valor de y :"<<endl;
		cin>>y;
		cout<<"Introduce el valor de a :"<<endl;
		cin>>a;
		cout<<"Introduce el valor de b :"<<endl;
		cin>>b;
		
		res=(pow((x+y),2)) * (a-b);
		cout<<"El resultado de ("<<x<<" + "<<y<<")^2 * ("<<a<<" - "<<b<<") es :"<<res<<endl;
		cout<<"\n\n\n¿Desea volver a calcular otro resultado?"<<endl;
		cin>>dec;
		
		
	}
		
	}while(strcmp(strupr(dec),"NO"));
	cout<<"\nSaliendo del programa.......\n\n"<<endl;
	system("pause");
	return 0;
	
}
