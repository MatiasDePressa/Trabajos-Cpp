//ejercicio 14
//Di Cerbo Liam y De Pressa Matias
//6°3°
#include <iostream>
using namespace std;
int main(void){
	//incializacion de variables
	int num=0;
	int num_sec=0;
	int corte=0;
	//ingreso del numero
	cout << "Coloque un numero entre 1 y 100: ";
	cin >> num_sec;
	// este while verifica que el numero para adivinar este entre los numeros uno y cien
	// si el numero no se encuentra en este rango, va a pedir que lo vuelvan a ingresar hasta que si lo este
	do{
		if (num_sec > 0 & num_sec < 101){
		corte=-1;
		}
		else{
			cout << "Ese numero no esta en el rango pedido, ingrese otro: ";
			cin >> num_sec;
		}
	}
	while(corte==0);
	
	// elimina todo lo que esta en la pantalla para que la segunda persona llegue y no vea "el numero secreto"
	system("pause");
	system("cls");
	// este es un for que recorre todos los numeros desde 5 hasta el -1
	// esto lo hacemos para 1: poder colocar un contador en el primer comentario (#1)
	// 2: verificar si se le agotaron la cantindad de intentos al usuario (#2)
	
	for(int i=5; i>-1; i--){
		// #2 aqui analizo si se le acabaron los intentos al usuario analizando si i llego a 0
		// si el programa detecta que i llego a cero termina el for
		// se lo coloca aqui arriba para que no tome mas numeros
		if(i==0){
			cout<<"YA NO LE QUEDAN INTENTOS";
			break;
		}
		// aqui el usuario ingresa el numero y el programa le dice cuantos intentos le quedan
		cout << "tiene "<<i<<" intentos para adivinar el numero que ingreso su companiero: ";
		cin>>num;
		// verificamos si el numero es distinto al numero secreto. si el numero ingresado es igual al sereto muestra exito
		if (num!=num_sec){
			// aqui se le dice al usuario si su numero es mayor o menor al secreto
			if(num<num_sec){
				cout<<"el numero ingresado es menor a el numero secreto"<<endl;
			}
			else{
				cout<<"el numero ingresado es mayor al numero secreto"<<endl;
			}
		}
		else{
			cout<<"numero adivinado, Exito";
			break;
		}
	}
}
