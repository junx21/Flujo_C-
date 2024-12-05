#include "Geometria.h"

namespace geometria {
    double calcularAreaCirculo(double radio) {
        return 3.14 * radio * radio;
    }
    double calcularPerimetroCirculo(double radio) {
        return 2 * 3.14 * radio;
    }
}