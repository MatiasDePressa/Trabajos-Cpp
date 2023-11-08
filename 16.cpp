//ejercicio 16
//Di Cerbo Liam y De Pressa Matias
//6°3°
#include <iostream>
using namespace std;
int main(void)
{
	int option = 0; //inicializo la variable option
	do{
		cout<<"1: Muestra letra A \n";
		cout<<"2: Muestra letra B \n";
		cout<<"3: Final \n";
		cout<<"Seleccione una de las 3 opciones: "; //este es el menu que se les mostrara a los usuarios
		cin>>option; //ingreso uno de los 3 numeros que me sugiere el menu
		if (option==1 or option==2 or option==3){ //en caso de que se ingresen los numeros sugeridos se realizan las operaciones
			if (option==1){
				cout<<"A \n";
				cout<<"Desea volver al menu? [0 = Si , 3 = No] \n"; //pregunta si desea quedarse en el menu despues de elegir la opcion
				cin>>option;
				
			}
			else if (option==2){
				cout<<"B \n";
				cout<<"Desea volver al menu? [0 = Si , 3 = No] \n";
				cin>>option;
				
			}
		}
		
		else{ //en caso de que se ingresen numeros que no sean los sugeridos se imprime por pantalla que la opcion no es valida
			cout<<"Opcion no valida, seleccione otro numero \n";
		}
	system("cls"); //borra la operacion anterior antes de volver a imprimir el menu en la pantalla
	}
	while (option!=3); //siempre que la variable option no sea 3 se haran todas las operaciones anteriores en caso contrario se terminara el bucle
	cout<<"Fin"; //una vez finalizado el bucle se imprime FIN y se termina el codigo
}

