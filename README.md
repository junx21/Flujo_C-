# Link del Repositorio 

https://github.com/junx21/Flujo_C-.git

# Ejercicios de Espacios de Nombres y Flujos

## Enunciado
Los ejercicios consisten en trabajar con espacios de nombres y flujos en C++. Cada ejercicio tiene un enfoque específico y propone la implementación de conceptos clave.

### Ejercicio 1: Utilización completa de un espacio de nombres
Escribe un programa que defina un espacio de nombres `Matemáticas` que contenga dos funciones: `suma` y `resta`. Luego, desde la función `main`, utiliza estas funciones.

### Ejercicio 2: Espacio de nombres repartido entre diferentes archivos
Crea un programa donde defines un espacio de nombres `Geometría` en dos archivos de código separados (por ejemplo, `triángulo.cpp` y `círculo.cpp`). Cada archivo debe contener una función (por ejemplo, `calcularArea`) correspondiente a la geometría específica. Finalmente, desde la función `main` en otro archivo, utiliza estas funciones.

### Ejercicio 3: Relación entre clase y espacio de nombres
Define una clase `Círculo` dentro de un espacio de nombres `Geometría`. Incluye al menos dos métodos en esta clase, como `calcularArea` y `calcularPerímetro`. Utiliza esta clase desde la función `main`.

### Ejercicio 4: Declaración de subespacios de nombres
Crea un espacio de nombres `Ciencia` que contenga un subespacio de nombres `Física`. En `Física`, define una constante para la velocidad de la luz y una función para calcular la energía a partir de la masa (`E=mc^2`). Utiliza la constante y la función desde la función `main`.

### Ejercicio 5: Presentación de la STL
Escribe un programa que utilice al menos tres diferentes contenedores de la STL (por ejemplo, `vector`, `map` y `set`). Para cada contenedor, realiza al menos una operación (como agregar elementos, eliminar elementos o buscar elementos).

---

## Propuesta de Solución

### Generalidades
1. Crea un nuevo proyecto en **CLion** y añade un archivo `main.cpp`. 
   Código inicial:
   ```cpp
   #include <iostream>

   int main() {
       int num;
       std::cout << "Ingresa un número: ";
       std::cin >> num;
       std::cout << "El número ingresado es: " << num << std::endl;
       return 0;
   }
Ejercicios con Flujos
Flujos Integrados
Incluye el manejo de cadenas:

```cpp
#include <iostream>
#include <string>

int main() {
    int num;
    std::string text;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "Ingresa un texto: ";
    std::cin >> text;
    std::cout << "El número ingresado es: " << num << "\nEl texto ingresado es: " << text << std::endl;
    return 0;
}
```
Estado de un Flujo
Manejo de archivos:

```cpp

#include <iostream>
#include <fstream>

int main() {
    std::ifstream file;
    file.open("example.txt");
    if (!file) {
        std::cerr << "No se pudo abrir el archivo.\n";
    } else {
        std::cout << "El archivo se abrió correctamente.\n";
    }
    file.close();
    return 0;
}
```
Formato
Muestra un número con dos decimales:

```cpp

#include <iostream>
#include <iomanip>

int main() {
    double num;
    std::cout << "Ingresa un número: ";
    std::cin >> num;
    std::cout << "El número ingresado es: " << std::fixed << std::setprecision(2) << num << std::endl;
    return 0;
}
```
Flujo de Archivos
Escribe texto en un archivo:

```cpp

#include <iostream>
#include <fstream>

int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);
    
    std::ofstream file;
    file.open("example.txt");
    if (file) {
        file << text;
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
    return 0;
}
```
Flujo de Cadenas
Manejo de cadenas con std::stringstream:

```cpp

#include <iostream>
#include <sstream>

int main() {
    std::string text;
    std::cout << "Ingresa un texto: ";
    std::getline(std::cin, text);

    std::stringstream ss;
    ss << text;
    std::string text_from_ss;
    ss >> text_from_ss;
    std::cout << "El texto desde el flujo de cadena es: " << text_from_ss << std::endl;
    return 0;
}
```
Argumentos Locales
Utilización de argumentos de línea de comandos:

```cpp
#include <iostream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Por favor, proporciona un argumento de texto.\n";
        return 1;
    }

    std::ofstream file;
    file.open("example.txt");
    if (file) {
        file << argv[1];
        std::cout << "El texto se guardó correctamente.\n";
    } else {
        std::cerr << "No se pudo abrir el archivo.\n";
    }
    file.close();
    return 0;
}

```
Ejecuta el programa desde la terminal con un argumento:

bash
Copiar código
./myprogram "Hola mundo"
