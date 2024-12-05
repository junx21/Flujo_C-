#include "Matematicas.h"
#include <cmath>

namespace Matematicas {
    Resultado resolverEcuacionCuadratica(double a, double b, double c) {
        Resultado resultado;
        double discriminante = b * b - 4 * a * c;

        if (discriminante >= 0) {
            resultado.tieneSolucionesReales = true;
            resultado.x1 = (-b + std::sqrt(discriminante)) / (2 * a);
            resultado.x2 = (-b - std::sqrt(discriminante)) / (2 * a);
        } else {
            resultado.tieneSolucionesReales = false;
        }

        return resultado;
    }
}