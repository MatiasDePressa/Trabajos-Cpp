#include <iostream>
using namespace std;
int main(void){
    int num=12; //inicializo num
    
    if(num>0){ //si el numero es mayor a 0
    	cout<<"es positivo \n"; //imprime que es positivo
	}
	else{
		cout<<"es negativo \n"; //en caso contrario es negativo
	}
 	
	 // \n sirve para dejar un renglon cuando se imprime en pantalla   
    
	if(num%2==0){ //si el resto del numero dividido 2 es 0 (o sea es par)
		cout<<"es par"; //imprime que es par
	}
	else{	//caso contrario
		cout<<"es impar"; //imprime que es impar
	}
}
