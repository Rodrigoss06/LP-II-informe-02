#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Producto {
private:
    string nombre;
    double precio;
    int cantidad;

public:
    Producto(const string nombre, double precio, int cantidad) : nombre(nombre), precio(precio), cantidad(cantidad) {}

    void setPrecio(double nuevoPrecio) {
        precio = nuevoPrecio;
    }

    void setCantidad(int nuevaCantidad) {
        cantidad = nuevaCantidad;
    }
};

class Factura {
private:
    vector<Producto> productos;

public:
    void agregarProducto(const Producto& producto) {
        productos.push_back(producto);
    }

    void mostrarFactura() const {
        cout << "Factura:" << endl;
        for (const auto& producto : productos) {
            cout << "Producto: " << producto.nombre << ", Precio: " << producto.precio << ", Cantidad: " << producto.cantidad << endl;
        }
    }
};

int main() {
    Producto producto1("Lápiz", 1.5, 20);
    Producto producto2("Cuaderno", 5, 10);
    Producto producto3("Borrador", 0.75, 30);

    Factura factura;

    factura.agregarProducto(producto1);
    factura.agregarProducto(producto2);
    factura.agregarProducto(producto3);

    factura.mostrarFactura();
    return 0;
}


