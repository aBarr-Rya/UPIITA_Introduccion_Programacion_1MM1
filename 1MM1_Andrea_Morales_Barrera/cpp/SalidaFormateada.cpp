#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
char c = 'a' ;
int x = 12 ;
double d = 3.141592 ;
char s[30] = "hola" ;
cout << setw(4) << x ; // SALIDA: ##12
cout << setfill('0') ; // Modo Relleno Cero
cout << dec << setw(4) << x ; // SALIDA: 0012 (Decimal)
cout << hex << setw(4) << x ; // SALIDA: 000c (Hexadecimal)
cout << oct << setw(4) << x ; // SALIDA: 0014 (Octal)
cout << setfill('0' ) << dec ; // Restaura Modo (Esp + Dec)
cout << setprecision(4); // Establece Precisión 4
cout << setw(12) << d ; // SALIDA: #######3.142 (4 dígitos)
cout.setf(ios::fixed, ios::floatfield); // Modo Fijo (F)
cout << setw(12) << d ; // SALIDA: ######3.1416 (4 decimales)
cout.setf(ios::scientific, ios::floatfield);// Modo Científico (E)
cout << setw(12) << d ; // SALIDA: ##3.1416e+00 (4 decimales)
cout.unsetf(ios::floatfield); // Restaura Modo por Defecto (G)
cout.setf(ios::left, ios::adjustfield); // Modo Just. Izquierda
cout << setw(6) << s ; // SALIDA: hola## (Just. Izquierda)
cout.setf(ios::right, ios::adjustfield); // Modo Just. Derecha
cout << setw(6) << c ; // SALIDA: #####a (Just. Derecha)
cout.setf(ios::internal, ios::adjustfield); // Modo Just. Interno
cout.setf(ios::showbase); // Modo Mostrar-Base
cout << setfill('0') << hex // Modo Relleno Cero + Hex
<< setw(4) << x // SALIDA: 0x0c (Hexadecimal + Base)
<< dec << setfill(' ') ; // Restaura Modo (Esp + Dec)
cout.unsetf(ios::showbase); // Restaura Modo por Defecto
cout.unsetf(ios::adjustfield); // Restaura Modo por Defecto
cout.precision(4); // Alternativa para establecer la precisión
cout.fill('0'); // Alternativa para establecer el carácter de relleno
cout << endl;
}
