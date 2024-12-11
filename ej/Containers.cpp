#include "Containers.h"

#include <iostream>

void vectorOperations() {
    std::vector<int> numeros {1, 2, 3, 4, 5};
    numeros.push_back(6);
    std::cout << "Vector contents: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void mapOperations() {
    std::map<std::string, int> edad;
    edad["Juan"] = 25;
    edad["Maria"] = 30;
    edad.erase("Juan");
    std::cout << "Map contents: ";
    for (const auto& pair : edad) {
        std::cout << pair.first << ": " << pair.second << " ";
    }
    std::cout << std::endl;
}

void setOperations() {
    std::set<int> conjunto {1, 2, 3, 4, 5};
    conjunto.insert(6);
    conjunto.erase(1);
    std::cout << "Set contents: ";
    for (int num : conjunto) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}