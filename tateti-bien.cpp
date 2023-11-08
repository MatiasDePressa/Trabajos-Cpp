#include <iostream>
#include <conio.h>
#include <string>
#include <cmath>
using namespace std;

class Tateti{
	private:
		int tablero[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
	
	public:
		Tateti(){
			
		}
		
		void mostrar_tabla(){
			for (int y = 0; y < 3; y++){
				for (int x = 0; x < 3; x++){
					switch (tablero[y][x]){
						case 0:
							cout << " ";
							break;
						case 1:
							cout << "X";
							break;
						case 2:
							cout << "O";
							break;
					}
					if (x < 2)
						cout << " | ";
				}
				cout << endl;
				if (y < 2){
					cout << "--+---+--";
					cout << endl;
				}
			}
		}
		
		int insertar_valor(int x, int y, int jugador){
			if (x > 3 || y > 3 || x <= 0 || y <= 0){
				return 1;
			}
				
			if (jugador != 1 && jugador != 2){
				return 2;
			}
			
			if (tablero[y-1][x-1] != 0){
				return 3;
			}
			
			this->tablero[y-1][x-1] = jugador;
			//cout << "x: " << x << " y: " << y << " p: " << jugador << endl;
			return 0;
		}
		
		int verificar_ganador(){
			for (int x = 0; x < 3; x++){
				if (tablero[0][x] == tablero[1][x] && tablero[1][x] == tablero[2][x] && tablero[0][x] != 0){
					return tablero[0][x];
				}if (tablero[x][0] == tablero[x][1] && tablero[x][1] == tablero[x][2] && tablero[x][0] != 0){
					return tablero[x][0];
				}
			}
			
			if (tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && tablero[1][1] != 0){
				return tablero[1][1];
			}
				
			
			if (tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && tablero[1][1] != 0){
				return tablero[1][1];
			}
			return 0;
		}
};

int verificar_entrada(){
	string en;
	int r = 0;
	getline(cin, en);
	for (int i = 0; i < en.length(); i++){
		switch(en[i]){
			case '1': r += pow(10, en.length()-i-1); break;
			case '2': r += 2 * pow(10, en.length()-i-1); break;
			case '3': r += 3 * pow(10, en.length()-i-1); break;
			case '4': r += 4 * pow(10, en.length()-i-1); break;
			case '5': r += 5 * pow(10, en.length()-i-1); break;
			case '6': r += 6 * pow(10, en.length()-i-1); break;
			case '7': r += 7 * pow(10, en.length()-i-1); break;
			case '8': r += 8 * pow(10, en.length()-i-1); break;
			case '9': r += 9 * pow(10, en.length()-i-1); break;
			case '0': break;
			default: return -1;
		}
	}
	return r;
}

int main(){
	
	Tateti tateti = Tateti();
	int turno = 1;
	
	while(true){
		system("cls");
		cout << "------------------------" << endl;
		tateti.mostrar_tabla();
		cout << "------------------------" << endl;
		cout << "Jugador " << turno << endl;
		int fila, columna;
		try{
			cout << "Ingrese la fila (1 al 3): ";
			fila = verificar_entrada();
			
			cout << "Ingrese la columna (1 al 3): ";
			columna = verificar_entrada();
			
		}catch(exception){
			cout << "Ha ocurrido un error en el ingreso de datos, vuelva a intentarlo";
			getch();
			continue;
		}
		
		int r = tateti.insertar_valor(columna, fila, turno);
		if (r == 1){
			cout << "los valores ingresados superan el rango";
			getch();
		}else if (r == 2){
			cout << "error de codigo interno;";
			getch();
		}else if (r == 3){
			cout << "Esa casilla ya esta ocupada";
			getch();
		}else{
			if (tateti.verificar_ganador() != 0){
				system("cls");
				cout << "ha ganado el jugador " << tateti.verificar_ganador();
				break;
			}
			
			if (turno == 1)
				turno = 2;
			else if (turno == 2)
				turno = 1;
			else{
				cout << "error";
				exit(1);
			}
		}
	}
	
	getch();
	return 0;
}
