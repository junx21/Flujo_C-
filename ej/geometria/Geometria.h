#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {
    double calcularAreaTriangulo(double base, double altura);
    double calcularPerimetroTriangulo(double lado1, double lado2, double lado3);
    double calcularAreaCirculo(double radio);
    double calcularPerimetroCirculo(double radio);
    double calcularAreaCuadrado(double lado);
    double calcularPerimetroCuadrado(double lado);


    class Circulo {
    private:
        double radio;
    public:
        Circulo(double r);
        double calcularArea();
        double calcularPerimetro();
    };
}

#endif // GEOMETRIA_H