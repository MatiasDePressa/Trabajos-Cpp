#include <iostream>
using namespace std;
int main(void){
    int num=123;
    
	int cifra1=num/100; //agarro la primer cifra del numero
	int cifra2=((num/10)%10)*10; //agarro la segunda cifra y la multiplico por 10
	int cifra3=(num%10)*100; //agarro la tercer cifra y la multiplico por 100
	cout<<cifra1+cifra2+cifra3; //las sumo todas, por lo que regresa el numero original invertido
}
