#include <iostream>
using namespace std;
class Persona
{
private:
    string nombre;
    int edad;
    string genero;

public:
    Persona(string nombre, int edad, string genero) : nombre(nombre), edad(edad), genero(genero){};

    string getNombre() const {
        return nombre;
    }
    int getEdad() const {
        return edad;
    }
    string getGenero() const {
        return genero;
    }

    void setNombre(string newNombre) {
        nombre = newNombre;
    }
    void setEdad(int newEdad) {
        edad = newEdad;
    }
    void setGenero(string newGenero) {
        genero = newGenero;
    }
};
int main()
{
    Persona persona("Juan", 25, "Masculino");

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Género: " << persona.getGenero() << endl;

    persona.setNombre("María");
    persona.setEdad(30);
    persona.setGenero("Femenino");

    cout << "Nombre: " << persona.getNombre() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Género: " << persona.getGenero() << endl;
    return 0;
}
