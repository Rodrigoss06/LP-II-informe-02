#include <iostream>
using namespace std;

class MiClase {
private:
    int atributo;

public:

    MiClase(int valorInicial=0) : atributo(valorInicial) {}

    int getAtributo() const {
        return atributo;
    }
};

int main() {
    MiClase arregloObjetos[5]; 

    for (int i = 0; i < 5; ++i) {
        arregloObjetos[i] = MiClase(i * 10); 
    }

    cout << "Valores de los atributos de los objetos en el arreglo:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Atributo del objeto " << i << ": " << arregloObjetos[i].getAtributo() << endl;
    }

    return 0;
}

