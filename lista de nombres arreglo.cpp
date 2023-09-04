#include <iostream>
#include <string>

using namespace std;

int main() {
    const int n = 10; // Tamaño del arreglo de nombres
    string nombres[n]; // Arreglo de nombres
    string nombreBuscado;
    bool encontrado = false;

    // Ingreso de 10 nombres
    cout << "Ingrese 10 nombres:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nombre " << i + 1 << ": ";
        cin >> nombres[i];
    }

    // Ingreso del nombre a buscar
    cout << "Ingrese un nombre a buscar: ";
    cin >> nombreBuscado;

    // Búsqueda del nombre en la lista
    for (int i = 0; i < n; i++) {
        if (nombres[i] == nombreBuscado) {
            cout << "El nombre se ha encontrado en la posición " << i + 1 << endl;
            encontrado = true;
            break; // Terminar la búsqueda una vez que se encuentra el nombre
        }
    }

    // Si no se encontró el nombre
    if (!encontrado) {
        cout << "El nombre no se encontró en la lista." << endl;
    }

    return 0;
}

