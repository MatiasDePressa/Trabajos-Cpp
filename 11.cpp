#include <iostream>
using namespace std;
int main(void){
	
	int num=41; //inicializamos el numero
	
	do{ //entramos al while
		num-=2; //se le resta 2...
	}
	while(num>1); //...mientras el numero sea mayor a 1
	
	if (num==1){ //si de la resta quedo 1
		cout<<"Es impar"; //es impar
	}
	else{ //caso contrario (si queda 0)
		cout<<"Es par"; //es par
	}
}
