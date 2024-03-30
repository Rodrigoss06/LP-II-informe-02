#include <iostream>
#include <vector>

class MiClase {
private:
    int valor;
public:
    MiClase(int v) : valor(v) {}
    int getValor() {
        return valor
    }
    void setValor(int newValor){
        valor = newValor
    }
};

int main() {
    std::vector<MiClase> objetos;

    objetos.push_back(MiClase(1));
    objetos.push_back(MiClase(2));
    objetos.push_back(MiClase(3));

    objetos[1].valor = 10;
    objetos.erase(objetos.begin() + 2)
    for (const auto& obj : objetos) {
        std::cout << "Valor del objeto: " << obj.valor << std::endl;
    }

    return 0;
}

