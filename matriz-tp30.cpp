// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 30

#include <iostream>
using namespace std;

int main() {
    int filas;
    int columnas;
    int selec_colum;
    
    // Solicitamos al usuario que ingrese el número de filas de la matriz
    cout << "Ingrese las filas de la matriz: " << endl;
    cin >> filas;
    
    // Solicitamos al usuario que ingrese el número de columnas de la matriz
    cout << "\nIngrese las columnas de la matriz: " << endl;
    cin >> columnas;
    
    cout << "\n\n";
    
    // Creamos una matriz con el número de filas y columnas ingresadas por el usuario
    int matriz[filas][columnas];

    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            // Llenamos la matriz con la suma de la fila y la columna actual
            matriz[f][c] = f + c;

            // Imprimimos el valor en la posición [f][c] de la matriz
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }
    
    cout << "\n\n" << "Elija la columna que quiera mostrar del 0 al " << columnas - 1 << "\n\n";
    cin >> selec_colum;
    cout << "\n\n";
    
    if (selec_colum >= 0 && selec_colum < columnas) {
        // Mostramos solo la columna seleccionada
        for (int f = 0; f < filas; f++) {
            for (int c = 0; c < columnas; c++) {
                if (c == selec_colum) {
                    cout << matriz[f][c] << " ";
                } else {
                    cout << "  ";
                }
            }
            cout << "\n";
        }
    //si se excede o es menor a cero informa al usuario de que el numero ingresado es invalido
	} else {
        cout << "El número ingresado es inválido";
    }

    return 0;
}

	
