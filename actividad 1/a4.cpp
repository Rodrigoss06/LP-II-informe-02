#include <iostream>
#include <vector>
#include <algorithm> 


using namespace std;

class Tienda
{
private:
    string nombre;
    string direccion;
    string tipo_de_tienda;
    vector<string> productos;
public:
    Tienda(string nombre,string direccion,string tipo_de_tienda): nombre(nombre),direccion(direccion),tipo_de_tienda(tipo_de_tienda){};
    void agregar_producto(string producto){
        productos.push_back(producto);
        cout<<"Se ha agregado "<< producto << "a la tienda." << endl;
    }
    void vender_producto(string producto){
        auto it = find(productos.begin(), productos.end(), producto);
        if (it != productos.end()) {
            productos.erase(it);
            cout << "Se ha vendido " << producto << " en la tienda " << nombre << endl;
        } else {
            cout << "El producto " << producto << " no está disponible en la tienda " << nombre << endl;
        }
    }
};

int main()
{
    Tienda tienda("ll2","https:ll2.com","online");
    tienda.agregar_producto("producto");
    tienda.agregar_producto("producto2");
    tienda.agregar_producto("producto3");

    tienda.vender_producto("producto3");
    return 0;
}

