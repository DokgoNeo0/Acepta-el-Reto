#include <iostream>
#include <string>
#include <algorithm> // Para std::transform y std::tolower

int main() {
    int casos;
    std::string palabra1;
    std::string palabra2;

    std::cout << "Dime el numero de casos: ";
    std::cin >> casos;
    std::cin.ignore(); // Para ignorar el salto de línea después de leer el número de casos

    for(int i = 0; i < casos; i++) {
        std::cout << "Dime la palabra: ";
        std::getline(std::cin, palabra1);
        std::cout << "Dime la palabra: ";
        std::getline(std::cin, palabra2);

        // Convertir ambas palabras a minúsculas
        std::transform(palabra1.begin(), palabra1.end(), palabra1.begin(), ::tolower);
        std::transform(palabra2.begin(), palabra2.end(), palabra2.begin(), ::tolower);

        // Comparar las palabras e imprimir el resultado
        if(palabra1 == palabra2) {
            std::cout << "TAUTOLOGIA" << std::endl;
        } else {
            std::cout << "NO TAUTOLOGIA" << std::endl;
        }
    }

    return 0;
}