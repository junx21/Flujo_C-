// Ciencia.h
#ifndef CIENCIA_H
#define CIENCIA_H
#include "../matematicas/Matematicas.h"
#include "../fisica/Fisica.h"
#include <tuple>

namespace Ciencia {
    double calcularEnergia(double masa) {
        return Fisica::calcularEnergia(masa);
    }

    std::tuple<bool, double, double> resolverEcuacionCuadratica(double a, double b, double c) {
        auto resultado = Matematicas::resolverEcuacionCuadratica(a, b, c);
        return std::make_tuple(resultado.tieneSolucionesReales, resultado.x1, resultado.x2);
    }
}

#endif //CIENCIA_H