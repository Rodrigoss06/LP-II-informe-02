#include <iostream>
using namespace std;
class Libro
{
private:
    string titulo;
    string autor;
    string genero;
public:
    Libro(string titulo,string autor,string genero):titulo(titulo),autor(autor),genero(genero){};
    string getTitulo() const {
        return titulo;
    }
    string getAutor() const {
        return autor;
    }
    string getGenero() const {
        return genero;
    }
    void setTitulo(string newTitulo) {
        titulo = newTitulo;
    }
    void setAutor(string newAutor) {
        autor = newAutor;
    }
    void setGenero(string newGenero) {
        genero = newGenero;
    }
};

int main()
{
    Libro libro1("El código Da Vinci", "Dan Brown", "Misterio");
    Libro libro2("Cien años de soledad", "Gabriel García Márquez", "Realismo mágico");

    cout << "Título: " << libro1.getTitulo() << endl;
    cout << "Autor: " << libro1.getAutor() << endl;
    cout << "Género: " << libro1.getGenero() << endl;

    libro1.setAutor("J.K. Rowling");
    libro1.setGenero("Ficción");

    cout << "Título: " << libro1.getTitulo() << endl;
    cout << "Autor: " << libro1.getAutor() << endl;
    cout << "Género: " << libro1.getGenero() << endl;

    return 0;
}



