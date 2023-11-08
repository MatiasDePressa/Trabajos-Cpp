//ejercicio 13
//Di Cerbo Liam y De Pressa Matias
//6°3°
#include <iostream>
using namespace std;
int main(void){
	// inicializacion de variables
	int num=0;
	int corte=0;
	int aux=0;
	//ingreso el numero
	cout << "Agregue un numero de 4 cifras: ";
	cin >> num;
	do{
		//analiza que el numero este en el rango de entre 1000 a 9999, si no esta en ese rango va a pedir que se ingrese de nuevo
		if (num > 999 & num < 10000 || num < -999 & num > -10000){
		do{
			//descompone el numero y verifica si cada cifra es par o impar
			// la descomposicion se hace de atras para adelante, tomando siempre el ultimo digito
			// analizando el resto de la divicion del numero en 10, este resto es el que tomamos como numero a comprobrar
			//de este mismo resto es donde se analiza si es par o impar
			aux=num%10;
			if (aux%2==0){
				cout << aux<<" es par\n";
			}
			else{
				cout << aux<<" es impar\n";
			}
			num=num/10;
		}
		while (num!=0);
		corte=1;
		}
		else{
			cout << "Ese numero no es de 4 cifras, ingrese otro: ";
			cin >> num;
		}
	}
	while(corte==0);

}
