#include <iostream>
using namespace std;
int main(void){
	
	int num; //inicializo las variables como int
	int sumn; //variable de suma de los negativos
	int sump; //variable de suma de positivos
    
    do{		//hace todo el algortimo mientras...
    	cout<<"Escribe un número distinto de 0: \n"; //imprimo por pantalla lo que le quiero pedir al usuario
    	cin>>num; //input que guarda los valores en num
    	if (num>=1){ //si el num es positivo
    		sump+=1; //se suma 1 a la variable de suma de numeros positivos
		}
		else if (num<=-1){ //si el num es negativo
			sumn+=1; //se suma 1 a la variable de suma de numeros negativos
		}
	}
	while (num!=0); //...el numero sea distinto de 0 (corta el ciclo con un 0)
	
	cout<< "\n Escribio "<<sump<<" numeros positivos y "<<sumn<<" numeros negativos"; //devuelvo lo pedido en la consigna
}
