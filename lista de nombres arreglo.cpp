#include <iostream>
#include <string>

using namespace std;

int main() {
    const int n = 10; // Tama�o del arreglo de nombres
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

    // B�squeda del nombre en la lista
    for (int i = 0; i < n; i++) {
        if (nombres[i] == nombreBuscado) {
            cout << "El nombre se ha encontrado en la posici�n " << i + 1 << endl;
            encontrado = true;
            break; // Terminar la b�squeda una vez que se encuentra el nombre
        }
    }

    // Si no se encontr� el nombre
    if (!encontrado) {
        cout << "El nombre no se encontr� en la lista." << endl;
    }

    return 0;
}

