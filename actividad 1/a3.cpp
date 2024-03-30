#include <iostream>
#include <cstdlib>
using namespace std;

class Estudiante
{
private:
    string nombre;
    int edad;
    string grado;
    float calificacion;
    int preguntas[10];
public:
    Estudiante(string nombre,int edad,string grado): nombre(nombre),edad(edad),grado(grado),calificacion(0){};
    void tomar_examen(){
        for (int i = 0; i < 10; ++i) {
            preguntas[i] = rand() % 2 + 1;
        }
    };
    void calificar_examen(){
        for (int i = 0; i < 10; ++i) {
            if (preguntas[i]==rand() % 2 + 1)
            {
                calificacion+=2;
            } else
            {
                cout << "error en la pregunta " << i<<endl;
            }        
        };
        cout << "calificacion: "<< calificacion<< endl;
    }
};



int main()
{
    Estudiante estudiante1("Rodrigo",14,"2do Sec");
    estudiante1.tomar_examen();
    estudiante1.calificar_examen();
    return 0;
}


