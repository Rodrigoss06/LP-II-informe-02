// Crear una clase de animales: crear una clase de animales que incluya atributos como nombre, edad
// y tipo de animal, y métodos para alimentar y hacer sonidos. Los estudiantes también pueden crear
// objetos para representar diferentes animales y llamar a los métodos correspondientes para
// interactuar con ellos.
// a) ¿Qué métodos son necesarios para hacer sonidos y alimentar a los animales?
// b) ¿Cómo se pueden crear diferentes objetos para representar diferentes animales?
#include <iostream>
using namespace std;

class Animal
{
private:
    string nombre;
    int edad;
    string tipo_de_animal;

public:
    Animal(string nombre, int edad, string tipo_de_animal):nombre(nombre),edad(edad),tipo_de_animal(tipo_de_animal){};
    void hacer_sonido(){
        cout << "El " << tipo_de_animal << " llamado " << nombre << " hace un sonido." << endl;
    }
    void alimentar(){
        cout << nombre << " está siendo alimentado." << endl;
    }
};


int main()
{
    Animal perro("Firulais",6,"perro");
    Animal gato("Fido",7,"gato");
    perro.hacer_sonido();
    perro.alimentar();

    gato.hacer_sonido();
    gato.alimentar();
    return 0;
}
