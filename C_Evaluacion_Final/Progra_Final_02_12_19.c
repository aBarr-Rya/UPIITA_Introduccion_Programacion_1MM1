//*********************************************************************************
// Unidad Profesional Interdisciplinaria en Ingeniería y Tecnologías Avanzadas IPN 
//                         Morales Barrera Andrea 1MM1 
//                         Programa Ing Mecatrónica
//                        Introduccion a la Programacion
//                                    Final
//*********************************************************************************
 
int f(int x, int y){
	
float q = (x-1)/2;
float Q = (2*q) + 1;
float r = x/2;
float R = r*2;

if (x < 0){
        return 0;
}
else if (y < 0){
        return 0;
      }
else if (x >= 1 && x <= 6 && y != 1 && y != 0){
        if (R == x){
                return 30;
        }
        else if (Q == x){
                return 31;
        }
      }
else if (x == 0 || x >= 9 && x <= 12){
        if (R == x){

                return 31;
        }
      }
else if (x == 0 || x >= 9 && x <= 12){
        if (R == x){
                return 31;
        }
        else if (Q == x){
                return 30;
        }
      }
else if (x >= 7 && x <= 8){
        return 31;
      }
else if (x == 2 && y == 0){
                return 28;
      }
else if (x == 2 && y == 1){
                return 29;
      }
else
             printf("No entro en ninguna de las demás opciones");
			 
}
