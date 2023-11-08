// Trabajo de Liam Di Cerbo y Matias De Pressa
//tp 32

#include <iostream>
using namespace std;

int main() {
    int filas = 3;
    int columnas = 3;
    int selec_colum;
    int dato;

    cout << "\n\n";

    int matriz[filas][columnas];
    int arreglo[filas];

    // Llenar la matriz con valores predefinidos
    matriz[0][0] = 2;
    matriz[0][1] = 7;
    matriz[0][2] = 8;
    matriz[1][0] = 8;
    matriz[1][1] = 5;
    matriz[1][2] = 2;
    matriz[2][0] = 0;
    matriz[2][1] = 9;
    matriz[2][2] = 4;

    // Imprimir la matriz
    for (int f = 0; f < filas; f++) {
        for (int c = 0; c < columnas; c++) {
            cout << matriz[f][c] << " ";
        }
        cout << "\n";
    }

    cout << "\n\n" << "Elija la columna que quiera mostrar del 0 al " << columnas - 1 << "\n\n";
    cin >> selec_colum;
    cout << "\n\n";

    if (selec_colum >= 0 && selec_colum < columnas) {
        // Extraer la columna seleccionada y almacenarla en un arreglo
        for (int pos = 0; pos < filas; pos++) {
            dato = matriz[pos][selec_colum];
            arreglo[pos] = dato;
        }
    } else {
        cout << "El número ingresado es inválido";
        return 1;
    }

    // Ordenar el arreglo usando el algoritmo de burbuja
    for (int i = 0; i < filas - 1; i++) {
        for (int j = 0; j < filas - i - 1; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                // Intercambiar los elementos si están en orden incorrecto
                int aux = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    // Imprimir el vector ordenado
    cout << "La columna ordenada es: ";
    for (int i = 0; i < filas; i++) {
        cout << arreglo[i] << " ";
    }

    return 0;
}

	
