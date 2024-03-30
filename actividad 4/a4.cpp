#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Producto {
public:
    string nombre;
    float precio;
    Producto(string n, float p) : nombre(n), precio(p) {}
};

class Tienda {
public:
    vector<Producto> inventario;

    void agregarProducto(string nombre, float precio) {
        Producto nuevoProducto(nombre, precio);
        inventario.push_back(nuevoProducto);
    }

    void mostrarInventario() {
        cout << "Inventario de la tienda:" << endl;
        for (const auto& producto : inventario) {
            cout << producto.nombre << " - $" << producto.precio << endl;
        }
    }
};

class Cliente {
public:
    vector<Producto> listaDeCompras;

    void agregarProductoALaLista(Producto producto) {
        listaDeCompras.push_back(producto);
    }

    float calcularTotal() {
        float total = 0;
        for (const auto& producto : listaDeCompras) {
            total += producto.precio;
        }
        return total;
    }
};

int main() {
    Tienda miTienda;
    miTienda.agregarProducto("Camisa", 25.0);
    miTienda.agregarProducto("Pantalón", 40.0);
    miTienda.agregarProducto("Zapatos", 30.0);

    miTienda.mostrarInventario();

    Cliente miCliente;
    miCliente.agregarProductoALaLista(miTienda.inventario[0]);
    miCliente.agregarProductoALaLista(miTienda.inventario[2]);

    float totalCompra = miCliente.calcularTotal();
    cout << "Total a pagar: $" << totalCompra << endl;

    return 0;
}

