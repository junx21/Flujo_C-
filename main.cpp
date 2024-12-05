#include <iostream>
#include "ej1/Matematicas.h"
#include "ej2/Geometria.h"



int main() {
    int num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << num << std::endl;

    std::cout << "Suma: " << Matematicas::Matematicas::suma(5, 3) << std::endl;
    std::cout << "Resta: " << Matematicas::Matematicas::resta(5, 3) << std::endl;


    double base, altura, lado, radio, lado1, lado2, lado3;
    std::cout << "Ingresa la base y altura del triángulo: ";
    std::cin >> base >> altura;
    std::cout << "Área del triángulo: " << geometria::calcularAreaTriangulo(base, altura) << std::endl;

    std::cout << "Ingresa los lados del triángulo: ";
    std::cin >> lado1 >> lado2 >> lado3;
    std::cout << "Perímetro del triángulo: " << geometria::calcularPerimetroTriangulo(lado1, lado2, lado3) << std::endl;

    std::cout << "Ingresa el lado del cuadrado: ";
    std::cin >> lado;
    std::cout << "Área del cuadrado: " << geometria::calcularAreaCuadrado(lado) << std::endl;
    std::cout << "Perímetro del cuadrado: " << geometria::calcularPerimetroCuadrado(lado) << std::endl;

    std::cout << "Ingresa el radio del círculo: ";
    std::cin >> radio;
    std::cout << "Área del círculo: " << geometria::calcularAreaCirculo(radio) << std::endl;
    std::cout << "Perímetro del círculo: " << geometria::calcularPerimetroCirculo(radio) << std::endl;

    return 0;
}

