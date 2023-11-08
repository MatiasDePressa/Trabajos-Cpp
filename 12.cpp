//ejercicio 12
//Di Cerbo Liam y De Pressa Matias
//6°3°
#include <iostream>
using namespace std;
int main(void){
	int num=0;
	int corte=0;
	// pide que se ingrese un numero de 3 cifras
	cout << "Agregue un numero de 3 cifras: ";
	cin >> num;
	do{
		// este while tiene dos condiciones, la primara averigua si el numero ingresado se encuentra
		//entre 100 y 999, osea, el numero mas pequeño y el mas grande de 3 cifras
		if (num > 99 & num < 1000){
		cout << num;
		corte=1;
		}
		// la segunda condicion analiza si el numero se encuentra en los numeros negativos
		// utiliza la misma logica que el primero para analizar el rango en el que se puede encontrar el numero
		else if (num < -99 & num > -1000){
		cout << num;
		corte=1;
		}
		// si el numero no se encuentra en estos dos rangos, va a pedir que ingrese una y otra vez numeros hasta ingresar
		// un numero que si sea de 3 cifras
		else{
			cout << "Ese numero no es de 3 cifras, ingrese otro: ";
			cin >> num;
		}
	}
	while(corte==0);

}
