#include <iostream>

using namespace std;

int main() {
    const int rows = 5;
    const int cols = 5;
    int matriz[rows][cols];

    // Llenar la matriz con valores ingresados por el usuario
    cout << "Ingrese los valores de la matriz 5x5:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matriz[i][j];
        }
    }

    // Calcular la suma de las filas y encontrar la fila con la máxima suma
    int maxSum = 0;
    int maxSumRow = -1;
    for (int i = 0; i < rows; ++i) {
        int filaSum = 0;
        for (int j = 0; j < cols; ++j) {
            filaSum += matriz[i][j];
        }
        if (filaSum > maxSum) {
            maxSum = filaSum;
            maxSumRow = i;
        }
    }

    // Contar ceros, positivos y negativos
    int numZeros = 0;
    int numPositives = 0;
    int numNegatives = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matriz[i][j] == 0) {
                numZeros++;
            } else if (matriz[i][j] > 0) {
                numPositives++;
            } else {
                numNegatives++;
            }
        }
    }

    // Imprimir matriz
    cout << "Matriz ingresada:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }

    // Imprimir resultados
    cout << "\nLa fila con la máxima suma es la fila " << maxSumRow + 1 << " con una suma de " << maxSum << endl;
    cout << "Cantidad de ceros: " << numZeros << endl;
    cout << "Cantidad de positivos: " << numPositives << endl;
    cout << "Cantidad de negativos: " << numNegatives << endl;

    return 0;
}

