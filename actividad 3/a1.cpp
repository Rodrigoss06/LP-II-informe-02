#include <iostream>
#include <string>
using namespace std;


class MiClase {
private:
    int atributo;

public:
    MiClase(int valorInicial) : atributo(valorInicial) {}

    void setAtributo(int nuevoValor) {
        atributo = nuevoValor;
    }

    int getAtributo() const {
        return atributo;
    }
};

int main() {
    MiClase objeto1(10); 
    MiClase objeto2(20); 

    cout << "Valor del atributo de objeto1: " << objeto1.getAtributo() << endl;
    cout << "Valor del atributo de objeto2: " << objeto2.getAtributo() << endl;
    
    objeto1.setAtributo(15);
    objeto2.setAtributo(25);

    cout << "Valor del atributo de objeto1: " << objeto1.getAtributo() << endl;
    cout << "Valor del atributo de objeto2: " << objeto2.getAtributo() << endl;

    return 0;
}

