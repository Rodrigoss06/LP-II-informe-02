#include <iostream>
using namespace std;

class Rueda {
private:
    int size;  
public:
    Rueda(int s) : size(s) {} 
    int getSize() { return size; } 
};

class Carro {
private:
    Rueda ruedas[4];  
public:
    Carro(int s1, int s2, int s3, int s4) : ruedas{Rueda(s1), Rueda(s2), Rueda(s3), Rueda(s4)} {}  
    void mover() { cout << "El carro se está moviendo." << endl; } 
    void cambiarRueda(int ruedaIndex, int newSize) { ruedas[ruedaIndex].getSize() = newSize; } 
};

int main() {
    Carro miCarro(18, 18, 18, 18);
    cout << "Tamaño de la primera rueda: " << miCarro.ruedas[0].getSize() << endl;

    miCarro.cambiarRueda(1, 20);
    cout << "Nuevo tamaño de la segunda rueda: " << miCarro.ruedas[1].getSize() << endl;

    miCarro.mover();
    return 0;
}
