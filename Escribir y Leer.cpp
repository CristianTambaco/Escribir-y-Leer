#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void actualizar(string ruta,string texto)
{
	//Actualiza un archivo o lo crea si no existe
	fstream archivo(ruta,ios::app);
	
	if (archivo.is_open())
	{
		archivo.seekp(0,ios::end);
		archivo << texto;
		archivo.close(); //Cerrar el archivo
		cout<<"Linea agregada exitosamente"<<endl;
	} else {
		cerr << "No se pudo abrir el archivo para escritura."<< endl;
	}
}

int main()
{
	string texto = "Hola clase!\nEstan listos para vacaciones?.";
	actualizar("C:/Users/PROGRAMACION/Desktop/escritura.txt",texto); //cambiar la palabra: PROGRAMACION
	
	return 0;
}
