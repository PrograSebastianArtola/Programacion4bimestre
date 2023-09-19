#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Empleado {
    string nombre;
    int identificacion;
    double salario;
};

// Función para encontrar el empleado con el salario más alto
Empleado encontrarSalarioMasAlto(const vector<Empleado>& empleados) {
    Empleado empleadoSalarioAlto = empleados[0];
    for (const Empleado& empleado : empleados) {
        if (empleado.salario > empleadoSalarioAlto.salario) {
            empleadoSalarioAlto = empleado;
        }
    }
    return empleadoSalarioAlto;
}

// Función para encontrar el empleado con el salario más bajo
Empleado encontrarSalarioMasBajo(const vector<Empleado>& empleados) {
    Empleado empleadoSalarioBajo = empleados[0];
    for (const Empleado& empleado : empleados) {
        if (empleado.salario < empleadoSalarioBajo.salario) {
            empleadoSalarioBajo = empleado;
        }
    }
    return empleadoSalarioBajo;
}

// Función para buscar un empleado por nombre o identificación
Empleado buscarEmpleado(const vector<Empleado>& empleados, const string& nombreOIdentificacion) {
    for (const Empleado& empleado : empleados) {
        if (empleado.nombre == nombreOIdentificacion || to_string(empleado.identificacion) == nombreOIdentificacion) {
            return empleado;
        }
    }
    // Si no se encuentra, devuelve un empleado con valores predeterminados
    return Empleado{"No encontrado", 0, 0.0};
}

int main() {
    vector<Empleado> empleados;
    char opcion;

    do {
        cout << "Menú de opciones:" << endl;
        cout << "1. Ingresar datos de empleado" << endl;
        cout << "2. Encontrar empleado con salario más alto" << endl;
        cout << "3. Encontrar empleado con salario más bajo" << endl;
        cout << "4. Buscar empleado por nombre o identificación" << endl;
        cout << "5. Salir del programa" << endl;
        cout << "Ingrese la opción deseada: ";
        cin >> opcion;

        switch (opcion) {
            case '1':
                {
                    Empleado empleado;
                    cout << "Ingrese el nombre del empleado: ";
                    cin >> empleado.nombre;
                    cout << "Ingrese la identificación del empleado: ";
                    cin >> empleado.identificacion;
                    cout << "Ingrese el salario del empleado: ";
                    cin >> empleado.salario;
                    empleados.push_back(empleado);
                    break;
                }
            case '2':
                {
                    if (empleados.empty()) {
                        cout << "No hay empleados registrados." << endl;
                    } else {
                        Empleado empleadoSalarioAlto = encontrarSalarioMasAlto(empleados);
                        cout << "Empleado con el salario más alto:" << endl;
                        cout << "Nombre: " << empleadoSalarioAlto.nombre << endl;
                        cout << "Identificación: " << empleadoSalarioAlto.identificacion << endl;
                        cout << "Salario: " << empleadoSalarioAlto.salario << endl;
                    }
                    break;
                }
            case '3':
                {
                    if (empleados.empty()) {
                        cout << "No hay empleados registrados." << endl;
                    } else {
                        Empleado empleadoSalarioBajo = encontrarSalarioMasBajo(empleados);
                        cout << "Empleado con el salario más bajo:" << endl;
                        cout << "Nombre: " << empleadoSalarioBajo.nombre << endl;
                        cout << "Identificación: " << empleadoSalarioBajo.identificacion << endl;
                        cout << "Salario: " << empleadoSalarioBajo.salario << endl;
                    }
                    break;
                }
            case '4':
                {
                    if (empleados.empty()) {
                        cout << "No hay empleados registrados." << endl;
                    } else {
                        string nombreOIdentificacion;
                        cout << "Ingrese el nombre o la identificación a buscar: ";
                        cin >> nombreOIdentificacion;
                        Empleado empleadoEncontrado = buscarEmpleado(empleados, nombreOIdentificacion);
                        if (empleadoEncontrado.nombre != "No encontrado") {
                            cout << "Empleado encontrado:" << endl;
                            cout << "Nombre: " << empleadoEncontrado.nombre << endl;
                            cout << "Identificación: " << empleadoEncontrado.identificacion << endl;
                            cout << "Salario: " << empleadoEncontrado.salario << endl;
                        } else {
                            cout << "Empleado no encontrado." << endl;
                        }
                    }
                    break;
                }
            case '5':
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }

    } while (opcion != '5');

    return 0;
}

