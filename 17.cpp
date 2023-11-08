//ejercicio 17
//Di Cerbo Liam y De Pressa Matias
//6°3°
#include <iostream>
using namespace std;
int main(void){
	int option = 0; //inicializo la variable option
	do{
		cout<<"1: Muestra letra A \n";
		cout<<"2: Muestra letra B \n";
		cout<<"3: Final \n";
		cout<<"Seleccione una de las 3 opciones: "; //este es el menu que se les mostrara a los usuarios
		cin>>option;
		
		switch(option) //el switch permirte seleccionar una de las opciones, para despues ir por el camino seleccionado
		{
			
			case 1: //en el primer caso imprimira la letra A y despues preguntara si desea terminar ahi o volver al menu
				cout<<"A \n";
				cout<<"Desea volver al menu? [0 = Si , 3 = No] \n"; //pregunta si desea quedarse en el menu despues de elegir la opcion
				cin>>option;
				break;
			
			case 2: //en el segundo caso imprimira la letra B y despues preguntara si desea terminar ahi o volver al menu
				cout<<"B \n";
				cout<<"Desea volver al menu? [0 = Si , 3 = No] \n"; // vuelve a preguntar si se desea volver al menu
				cin>>option;
				break;
			
			case 3: // en el tercer caso directamente cierra el programa
				break;
				
			default: // en el caso de que no se selccione ninguna de las 3 opciones pide seleccionar de nuevo una opcion
				cout<<"Opcion no valida, seleccione otro numero \n";
				system("pause");
		}
		system("cls"); //borra todo lo que esta en la pantalla para no sobrecargarla

	}
	while (option!=3);// termina el ciclo cuando detecte que la variable sea igual a 3
	cout<<"Fin";

}
