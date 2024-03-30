#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Carrera
{
private:
    int distancia;

public:
    Carrera(int distancia) : distancia(distancia){};
    void mostrar_informacion()
    {
    }
};

class Auto
{
private:
    string nombre;
    int distancia_recorrida;
    float largo;

public:
    Auto(string nombre, float largo) : nombre(nombre), distancia_recorrida(0), largo(largo){};
    int acelerar(int aceleracion_anterior)
    {
        srand(time(nullptr));
        int aceleracion = rand() % 50 + 1;
        while (aceleracion == aceleracion_anterior)
        {
            aceleracion = rand() % 50 + 1;
        };
        distancia_recorrida += aceleracion;
        return aceleracion;
    }
    string getNombre()
    {
        return nombre;
    }
    int getDistancia_recorrida()
    {
        return distancia_recorrida;
    }
};

int main()
{
    Carrera carrera1(1000);
    Auto auto1("fiuu", 2.2);
    Auto autoNpc("npc", 2);
    cout << "inicio la carrera" << endl;
    cout << auto1.getDistancia_recorrida();
    while (auto1.getDistancia_recorrida() <= 1000 and autoNpc.getDistancia_recorrida() <= 1000)
    {
        int aceleracion1 = auto1.acelerar(0);
        autoNpc.acelerar(aceleracion1);
        cout << "------------------------------------" << endl;
        cout << "progreso de " << auto1.getNombre() << ": " << auto1.getDistancia_recorrida() << endl;
        cout << "progreso de " << autoNpc.getNombre() << ": " << autoNpc.getDistancia_recorrida() << endl;
    };
    if (auto1.getDistancia_recorrida() > autoNpc.getDistancia_recorrida())
    {
        cout << "Ganador: " << auto1.getNombre() << endl;
    }
    else
    {
        cout << "Ganador: " << autoNpc.getNombre() << endl;
    };

    return 0;
}
