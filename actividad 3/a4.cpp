#include <iostream>

class MiClase {
public:
    int valor;
    MiClase(int v) : valor(v) {}

    bool operator==(const MiClase& other) const {
        return valor == other.valor;
    }

    bool operator!=(const MiClase& other) const {
        return !(*this == other);
    }
};

int main() {
    MiClase objeto1(5);
    MiClase objeto2(5);
    MiClase objeto3(10);

    if (objeto1 == objeto2) {
        std::cout << "objeto1 es igual a objeto2" << std::endl;
    } else {
        std::cout << "objeto1 es diferente de objeto2" << std::endl;
    }

    if (objeto1 != objeto3) {
        std::cout << "objeto1 es diferente de objeto3" << std::endl;
    } else {
        std::cout << "objeto1 es igual a objeto3" << std::endl;
    }

    return 0;
}

