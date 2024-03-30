#include <iostream>
using namespace std;

class Libro
{
private:
    string nombre;
    bool prestamo
public:
    Libro():prestamo(false){};
    void devolver_libro(){

    }
};
//chatgpt
class Biblioteca
{
private:
    Libro[] libros;
public:
    Biblioteca(Libro[] libros):libros(libros);
    void prestar_libro(Libro libro){
        if (libro in libros)
        {
            
        }
        
    }
};



