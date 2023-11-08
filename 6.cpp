#include <iostream>
using namespace std;
int main(void){
    int num=0; //inicializo num
    
    if(num>0){ //si num es mayor a 0
    	cout<<"es positivo";
	}
	else if(num==0){ //si num es igual a 0
		cout<<"es neutro";
	}
	else{ //en caso que no sea ninguno de los 2 (de que sea negativo)
		cout<<"es negativo";
	}
}
