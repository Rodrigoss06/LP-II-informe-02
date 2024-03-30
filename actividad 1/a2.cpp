#include <iostream>
using namespace std;

class Coche
{
protected:
    string modelo;
    int anio;
    float velocidad;

public:
    Coche(string modelo, int anio) : modelo(modelo), anio(anio), velocidad(0){};
    void acelerar(float tiempo, float aceleracion = 2)
    {
        velocidad = velocidad + tiempo * aceleracion;
        cout << "El coche alcanzo una velocidad de: " << velocidad << endl;
    }
    void frenar()
    {
        if (velocidad == 0)
        {
            cout << "El coche " << modelo << " ya está detenido." << endl;
        }
        else
        {
            velocidad = 0;
            cout << "El coche " << modelo << " frenó." << endl;
        };
    }
};

int main()
{
    Coche coche1("Toyota Camry", 2020);
    Coche coche2("Ford Mustang", 2019);
    coche1.acelerar(10);
    coche1.frenar();

    coche2.acelerar(7);
    coche2.frenar();
    return 0;
}
