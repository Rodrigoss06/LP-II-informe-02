#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

class Producto {
private:
    string nombre;
    int cantidad;

public:
    Producto(const string& nombre, int cantidad) : nombre(nombre), cantidad(cantidad) {}

    string getNombre() const {
        return nombre;
    }

    int getCantidad() const {
        return cantidad;
    }

    void setCantidad(int nuevaCantidad) {
        cantidad = nuevaCantidad;
    }
};

class Inventario {
private:
    vector<Producto> productosDisponibles;
    unordered_map<string, int> productosAgotados;

public:
    void agregarProducto(const string& nombre, int cantidad) {
        productosDisponibles.emplace_back(nombre, cantidad);
    }

    void realizarPedido(const string& nombre, int cantidad) {
        bool encontrado = false;
        for (auto& producto : productosDisponibles) {
            if (producto.getNombre() == nombre) {
                encontrado = true;
                if (producto.getCantidad() >= cantidad) {
                    producto.setCantidad(producto.getCantidad() - cantidad);
                    cout << "Pedido realizado con éxito: " << cantidad << " " << nombre << endl;
                } else {
                    cout << "No hay suficiente stock de " << nombre << " para completar el pedido." << endl;
                }
                break;
            }
        }
        if (!encontrado) {
            cout << "El producto " << nombre << " no está disponible en el inventario." << endl;
        }
    }

    void actualizarProductosAgotados() {
        for (const auto& producto : productosDisponibles) {
            if (producto.getCantidad() == 0) {
                productosAgotados[producto.getNombre()]++;
            }
        }
    }

    void imprimirProductosAgotados() const {
        cout << "Productos agotados:" << endl;
        for (const auto& entry : productosAgotados) {
            cout << entry.first << ": " << entry.second << " veces" << endl;
        }
    }
};

int main() {
    Inventario inventario;

    inventario.agregarProducto("Producto A", 10);
    inventario.agregarProducto("Producto B", 5);
    inventario.agregarProducto("Producto C", 0);

    inventario.realizarPedido("Producto A", 3);
    inventario.realizarPedido("Producto B", 8);
    inventario.realizarPedido("Producto C", 2);

    inventario.actualizarProductosAgotados();

    inventario.imprimirProductosAgotados();

    return 0;
}
