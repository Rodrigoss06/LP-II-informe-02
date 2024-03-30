#include <iostream>
using namespace std;

class Factura
{
private:
    string numero;
    string fecha_emision;
    double monto;
public:
    Factura(string numero,string fecha_emision,double monto):numero(numero),fecha_emision(fecha_emision),monto(monto){};
    string getNumero() const {
        return numero;
    }
    string getFecha_emision() const {
        return fecha_emision;
    }
    double getMonto() const {
        return monto;
    }
    void setNumero(string newNumero) {
        numero = newNumero;
    }
    void setFecha_emision(string newFecha) {
        fecha_emision= newFecha;
    }
    void setMonto(double newMonto) {
        monto = newMonto;
    }
};



int main()
{
    Factura factura1("1001", "2024-03-28", 500.75);
    Factura factura2("1002", "2024-03-29", 750.50);

    cout << "Información de la factura 1:" << endl;
    cout << "Número de factura: " << factura1.getNumero() << endl;
    cout << "Fecha de emisión: " << factura1.getFecha_emision() << endl;
    cout << "Monto: $" << factura1.getMonto() << endl;

    cout << "Información de la factura 2:" << endl;
    cout << "Número de factura: " << factura2.getNumero() << endl;
    cout << "Fecha de emisión: " << factura2.getFecha_emision() << endl;
    cout << "Monto: $" << factura2.getMonto() << endl;

    factura1.setMonto(600.25);
    factura2.setFecha_emision("2024-03-30");

    cout << "Información actualizada de la factura 1:" << endl;
    cout << "Monto: $" << factura1.getMonto() << endl;

    cout << "Información actualizada de la factura 2:" << endl;
    cout << "Fecha de emisión: " << factura2.getFecha_emision() << endl;
    return 0;
}
