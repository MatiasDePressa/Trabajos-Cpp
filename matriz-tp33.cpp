// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 33

#include <iostream>
using namespace std;

int main() {
    int filas = 3;
    int columnas = 3;
    int dato;
    int aux;

    cout << "\n\n";

    int matriz[filas][columnas];

    // Llenar la matriz con valores predefinidos
    matriz[0][0] = 2;
    matriz[0][1] = 7;
    matriz[0][2] = 8;
    matriz[1][0] = 3;
    matriz[1][1] = 5;
    matriz[1][2] = 1;
    matriz[2][0] = 0;
    matriz[2][1] = 9;
    matriz[2][2] = 4;

    // Imprimir la matriz antes de ordenar
    cout << "Matriz original:\n";
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }

    // Implementar el algoritmo de ordenación de burbuja para la matriz
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            for (int x = 0; x < filas; x++) {
                for (int y = 0; y < columnas; y++) {
                    if (matriz[i][j] < matriz[x][y]) {
                        // Intercambiar elementos si están en orden incorrecto
                        aux = matriz[i][j];
                        matriz[i][j] = matriz[x][y];
                        matriz[x][y] = aux;
                    }
                }
            }
        }
    }

    cout << "\n\n";

    // Imprimir la matriz después de ordenar
    cout << "Matriz ordenada:\n";
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}

