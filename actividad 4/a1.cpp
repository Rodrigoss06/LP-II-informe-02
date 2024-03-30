#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Libro {
private:
    string nombre;
    bool prestado;

public:
    Libro(const string& nombre) : nombre(nombre), prestado(false) {}

    void prestar() {
        if (!prestado) {
            prestado = true;
            cout << "El libro '" << nombre << "' ha sido prestado." << endl;
        } else {
            cout << "El libro '" << nombre << "' ya está prestado." << endl;
        }
    }

    void devolver() {
        if (prestado) {
            prestado = false;
            cout << "El libro '" << nombre << "' ha sido devuelto." << endl;
        } else {
            cout << "El libro '" << nombre << "' no estaba prestado." << endl;
        }
    }

    string getNombre() {
        return nombre;
    }
};

class Biblioteca {
private:
    vector<Libro> libros;

public:
    Biblioteca(const vector<Libro> libros) : libros(libros) {}

    void prestarLibro(const string nombreLibro) {
        for (auto& libro : libros) {
            if (libro.getLibro() == nombreLibro) {
                libro.prestar();
                return;
            }
        }
        cout << "El libro '" << nombreLibro << "' no está disponible en la biblioteca." << endl;
    }

    void devolverLibro(const string nombreLibro) {
        for (auto& libro : libros) {
            if (libro.getNombre() == nombreLibro) {
                libro.devolver();
                return;
            }
        }
        cout << "El libro '" << nombreLibro << "' no pertenece a esta biblioteca." << endl;
    }
};

int main() {
    Libro libro1("Cien años de soledad");
    Libro libro2("El principito");
    Libro libro3("Don Quijote de la Mancha");

    vector<Libro> listaDeLibros = {libro1, libro2, libro3};
    Biblioteca biblioteca(listaDeLibros);

    biblioteca.prestarLibro("Cien años de soledad");
    biblioteca.prestarLibro("El principito");
    biblioteca.devolverLibro("Cien años de soledad");
    biblioteca.devolverLibro("Don Quijote de la Mancha");

    return 0;
}



