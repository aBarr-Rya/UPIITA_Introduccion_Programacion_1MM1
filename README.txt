
//*********************************************************************************
// Unidad Profesional Interdisciplinaria en Ingeniería y Tecnologías Avanzadas IPN 
//                         Morales Barrera Andrea 1MM1 
//                         Programa Ing Mecatrónica
//                        Introduccion a la Programación
//                          Boleta :   2020640286
//*********************************************************************************




En el documento Resultados.txt se almacenaran todos los resultados obtenidos en las diferentes modalidades del examen aleatorio.
si desea eliminar los registros puede hacerlo a partir de un reglon abajo del encabezado "Resultados" que se ve como el de abajo:

----------------------------------Resultados--------------------------------------------

Para que el cuestionario funciones bien, deberá mantener la ruta del archivo correctamente, 
incluyendo respectivas carpetas y archivos, los nombres de los archivos de deben bajo ninguna manera ser cambiados de orden, 
renombrados o eliminados o el programa no podrá encontrarlos.

ejemplo--> este segmento de codigo se encuentra en CuestionarioAleatorio.c:

FILE *f;
	char vaya[100]="E:/1MM1_Andrea_Morales_Barrera_Final/Respuestas/Pregunta",vayay[60],wu[2];strcpy(wu,numm);
	strcat(vaya,wu);
	strcat(vaya,".txt");
	
	f= fopen(vaya,"r");
	if(f==NULL){
		printf("Lo lamento pero ha ocurrido un error comunicate al servicio tecnico AndreaGoldComputingMexka@outlook.com");
		exit(1);
	}

Aquí podemos observar que la cadena que almacena la direccion del archivo apunta a la unidad E: carpeta 1MM1_Andrea_Morales_Barrera_Final etc etc, 
lo unico que debes de hacer es descargar las carpetas en el orden que ya están y cambiar la unidad en donde la almacenarás de tu computador


NOTA: Si vas a copiar y pegar mi codigo deberás cambiar las rutas de archivo, y conservar el .c al final de cada archivo ya que el codigo no está diseñado para c++ o c#


