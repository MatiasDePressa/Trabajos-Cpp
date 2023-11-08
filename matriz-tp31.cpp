// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 31

#include <iostream>
using namespace std;

int main() {
    int filas;
    int columnas;
    int selec_colum;
    int selec_fila;
    int num;

    // Solicitamos al usuario que ingrese el n�mero de filas de la matriz
    cout << "Ingrese las filas de la matriz: " << "\n" << endl;
    cin >> filas;

    // Solicitamos al usuario que ingrese el n�mero de columnas de la matriz
    cout << "\nIngrese las columnas de la matriz: " << "\n" << endl;
    cin >> columnas;

    cout << "\n\n";

    // Creamos una matriz con el n�mero de filas y columnas ingresadas por el usuario
    int matriz[filas][columnas];

    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            // Llenamos la matriz con la suma de la fila y la columna actual
            matriz[f][c] = f + c;

            // Imprimimos el valor en la posici�n [f][c] de la matriz
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }

    cout << "\n\n" << "Elija la columna en donde se encuentre el n�mero deseado: " << "\n\n";
    cin >> selec_colum;
    cout << "\n\n" << "Elija la fila en donde se encuentre el n�mero deseado: " << "\n\n";
    cin >> selec_fila;
    cout << "\n\n";

    // Verificamos si las selecciones de fila y columna est�n dentro de los l�mites de la matriz
    if ((selec_colum >= 0 && selec_colum < columnas) && (selec_fila >= 0 && selec_fila < filas)) {
        // Recorremos la matriz para encontrar el n�mero en la posici�n seleccionada
        for (int f = 0; f < filas; f++) {
            for (int c = 0; c < columnas; c++) {
                if (c == selec_colum && f == selec_fila) {
                    num = matriz[f][c];
                }
            }
        }
        cout << "El n�mero en la posici�n (" << selec_fila << ", " << selec_colum << ") es: " << num;
    } else {
        cout << "El/los n�mero/s ingresado/s es/son inv�lido/s";
    }

    return 0;
}

	
