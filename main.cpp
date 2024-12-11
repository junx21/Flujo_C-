#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <sstream>
#include "ej/matematicas/Matematicas.h"
#include "ej/geometria/Geometria.h"
#include "ej/ciencia/Ciencia.h"
#include "ej/Containers.h"

class TeeStream : public std::streambuf {
public:
    TeeStream(std::ostream &stream1, std::ostream &stream2) : stream1(stream1), stream2(stream2) {}

protected:
    virtual int overflow(int c) override {
        if (c == EOF) {
            return !EOF;
        } else {
            stream1.put(c);
            stream2.put(c);
            return c;
        }
    }

    virtual std::streamsize xsputn(const char *s, std::streamsize n) override {
        stream1.write(s, n);
        stream2.write(s, n);
        return n;
    }

private:
    std::ostream &stream1;
    std::ostream &stream2;
};

int main() {
    std::ofstream outFile("C:/Users/carlo/Desktop/uni/programacion/Flujos_C-/example.txt", std::ios_base::app);
    if (!outFile) {
        std::cerr << "No se pudo abrir el archivo.\n";
        return 1;
    }

    TeeStream teeStream(std::cout, outFile);
    std::ostream tee(&teeStream);

    std::ifstream inputFile("C:/Users/carlo/Desktop/uni/programacion/Flujos_C-/example.txt");
    if (!inputFile) {
        tee << "No se pudo abrir el archivo.\n";
    } else {
        tee << "El archivo se abrió correctamente.\n";
    }

    double num;
    std::string text;
    tee << "Ingresa un número: ";
    std::cin >> num;
    std::cin.ignore(); // Ignorar el carácter de nueva línea pendiente
    tee << "Ingresa un texto: ";
    std::getline(std::cin, text);
    tee << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << "\nEl texto ingresado es: " << text << std::endl;

    matematicas::Matematicas mat;
    tee << "Suma: " << mat.sumar(5, 3) << std::endl;
    tee << "Resta: " << mat.restar(5, 3) << std::endl;

    tee << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    tee << "Perimetro del triangulo: " << Geometria::calcularPerimetroTriangulo(3, 4, 5) << std::endl;
    tee << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    tee << "Perimetro del circulo: " << Geometria::calcularPerimetroCirculo(3) << std::endl;
    tee << "Area del cuadrado: " << Geometria::calcularAreaCuadrado(3) << std::endl;
    tee << "Perimetro del cuadrado: " << Geometria::calcularPerimetroCuadrado(3) << std::endl;

    double masa = 10.0; // kg
    tee << "Energia: " << Ciencia::Fisica::calcularEnergia(masa) << std::endl;

    vectorOperations();
    mapOperations();
    setOperations();

    tee << "El texto se guardó correctamente.\n";

    // Additional code
    std::string input_text;
    tee << "Ingresa un texto: ";
    std::getline(std::cin, input_text);

    std::stringstream ss;
    ss << input_text;
    std::string text_from_ss;
    ss >> text_from_ss;
    tee << "El texto desde el flujo de cadena es: " << text_from_ss << std::endl;

    outFile.close();
    inputFile.close();

    return 0;
}