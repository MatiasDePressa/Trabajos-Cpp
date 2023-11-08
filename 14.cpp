//ejercicio 14
//Di Cerbo Liam y De Pressa Matias
//6°3°
#include <iostream>
using namespace std;
int main(void){
	//incializacion de variables
	int num=0;
	int sum=0;
	int corte=0;
	//ingreso del numero
	cout << "Coloque un numero entre 1 y 10: ";
	cin >> num;
	// este while verifica que el numero para adivinar este entre los numeros uno y diez
	// si el numero no se encuentra en este rango, va a pedir que lo vuelvan a ingresar hasta que si lo este
	do{
		if (num > 0 & num < 11){
		corte=-1;
		}
		else{
			cout << "Ese numero no esta en el rango pedido, ingrese otro: ";
			cin >> num;
		}
	}
	while(corte==0);
	
	// elimina todo lo que esta en la pantalla para que la segunda persona llegue y no vea "el numero secreto"
	system("pause");
	system("cls");
	// almacena este mismo numero en una variable suma
	sum+=num;
	
	// este while va a pedirle a la segunda persona que ingrese numeros indefinidamente y los va a sumar a la misma variable suma
	// cuando la segunda persona ingrese el numero 99 va a terminar el while
	do{
		cout<< "ingresar un numero (para no ingresar mas numeros, ingresar 99): ";
		cin>> num;
		if (num==99){
			corte=0;
		}
		else{
			sum+=num;
		}
	}
	while(corte!=0);
	
	// ni bien termine el while le va a pedir a la segunda persona que adivine el numero secreto de su compañero
	// en base al resultado de la suma
	cout<< "adivine el numero de su compañero en base al resultado de la suma: ";
	cout<< sum;
	
	
}
