// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 34

#include <iostream>
using namespace std;

int main() {
    int filas = 3;
    int columnas = 3;

    cout << "\n\n";

    int matriz[filas][columnas];
    int aux;

    // Llenar la matriz con valores predefinidos
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    cout << "Matriz original:\n";

    // Imprimir la matriz original
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }

    // Invertir el orden de las columnas
    for (int c = 0; c < columnas / 2; c++) {
        for (int f = 0; f < filas; f++) {
            // Intercambiar elementos de las columnas
            aux = matriz[f][c];
            matriz[f][c] = matriz[f][columnas - 1 - c];
            matriz[f][columnas - 1 - c] = aux;
        }
    }

    cout << "\nMatriz invertida:\n";

    // Imprimir la matriz invertida
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }

    return 0;
}
