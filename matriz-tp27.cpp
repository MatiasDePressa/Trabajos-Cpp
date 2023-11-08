// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 27

#include <iostream>
using namespace std;

int main() {
    // Definimos el número de filas y columnas para la matriz
    int filas = 2;
    int columnas = 2;

    // Declaramos una matriz de 2x2
    int matriz[filas][columnas];

    // Llenamos la matriz y la imprimimos
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

}

