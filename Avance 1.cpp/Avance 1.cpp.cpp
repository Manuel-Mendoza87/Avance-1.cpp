#include <iostream>
#include <math.h>
#include <conio.h> 
#include <stdio.h>
using  namespace std;

int main()
{
	char articulo[20], clasificacion[20];
	int n1;
	int desicion, opcion;

	printf("Bienvenido a Gameplanet : \n");
	cout << "\t Menu de Opciones: " << endl;
	cout << " 1.- Agregar Articulos " << endl;
	cout << " 2.- Modificar Articulos " << endl;
	cout << " 3.- Eliminar Articulos " << endl;
	cout << " 4.- Lista de Articulos " << endl;
	cout << " 5.- Limpiar Pantalla " << endl;
	cout << " 6.- Salir " << endl;
	cin >> opcion;

	switch (opcion)
	{
	case 1: //Agregar Articulos..
		cout << "Ingrese el Articulo: " << endl;
		cin >> articulo;
		cout << "Ingrese la Clasificacion: " << endl;
		cin >> clasificacion;
		cout << "Ingrese el Numero de Unidades: " << endl;
		cin >> n1;
		cout << "Ingrese el Articulo: " << endl;
		cin >> articulo;
		cout << "Ingrese la Clasificacion: " << endl;
		cin >> clasificacion;
		cout << "Ingrese el Numero de Unidades: " << endl;
		cin >> n1;
		cout << "Ingrese el Articulo: " << endl;
		cin >> articulo;
		cout << "Ingrese la Clasificacion: " << endl;
		cin >> clasificacion;
		cout << "Ingrese el Numero de Unidades: " << endl;
		cin >> n1;

		//Regresar al Menu
		cout << " desea regresar al menu principal?: " << endl;
		cout << " 1.-Si, 2.-No " << endl;
		cin >> desicion;
		if (desicion == 1)
		{
			return main();
		}
		cout << "Gracias" << endl;
		break;
	case 2: //Modificar Articulos
		break;

	case 3: //Eliminar Articulos
		break;

	case 4: //Lista de Articulos
		break;

	case 5: //Limpiar Pantalla
		cout << "Presione cualquier tecla para limpiar la pantalla: " << endl;
		system("cls");
		return main();
		break;

	case 6: //Salir
		exit(1);
		break;
	}
}
