#include <iostream>
#include <string>
#include<conio.h>

int main() {
    std::string cadena;

    std::cout << "Ingrese una cadena de caracteres: ";
    std::cin >> cadena;

    if (cadena.length() > 10) {
        std::cout << "La cadena es: " << cadena << std::endl;
    } else {
        std::cout << "La cadena no supera los 10 caracteres." << std::endl;
    }

    return 0;
}

