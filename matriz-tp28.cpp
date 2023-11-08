// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 28

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
        
        // Imprimimos una nueva línea al final de cada fila
        cout << "\n";
    }

    return 0;
}

