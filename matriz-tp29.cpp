// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 29

#include <iostream>
using namespace std;

int main() {
    int filas;
    int columnas;
    
    // Solicitamos al usuario que ingrese el número de filas de la matriz
    cout << "Ingrese las filas de la matriz: " << endl;
    cin >> filas;
    
    // Solicitamos al usuario que ingrese el número de columnas de la matriz
    cout << "Ingrese las columnas de la matriz: " << endl;
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
    
    cout << "\n\n" << "Su diagonal principal es" << "\n\n";
    
    // Recorremos la matriz para imprimir solo los elementos de la diagonal principal
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            if (f == c) {
                // Imprimimos los elementos de la diagonal principal
                cout << matriz[f][c] << " ";
            } else {
                // Imprimimos espacios en blanco para los elementos fuera de la diagonal
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
}

