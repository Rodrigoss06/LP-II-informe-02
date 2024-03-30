#include <iostream>
using namespace std;
class CuentaBancaria
{
private:
    string numero;
    double saldo;

public:
    CuentaBancaria(string numero, double saldo) : numero(numero), saldo(saldo){};

    string getNumero() const{
        return numero;
    }
    double getSaldo() const{
        return saldo;
    }
    void setNumero(string newNumero){
        numero = newNumero;
    }
    void setSaldo(double newSaldo){
        saldo = newSaldo;
    }
};

int main()
{
    CuentaBancaria cuenta1("123456789", 1000);
    CuentaBancaria cuenta2("987654321", 2000);

    cout << "Saldo de la cuenta 1: " << cuenta1.getSaldo() << endl;
    cout << "Número de cuenta de la cuenta 1: " << cuenta1.getNumero() << endl;

    cout << "Saldo de la cuenta 2: " << cuenta2.getSaldo() << endl;
    cout << "Número de cuenta de la cuenta 2: " << cuenta2.getNumero() << endl;

    cuenta1.setSaldo(1500);
    cuenta2.setNumero("999999999");

    cout << "Nuevo saldo de la cuenta 1: " << cuenta1.getSaldo() << endl;
    cout << "Nuevo número de cuenta de la cuenta 2: " << cuenta2.getNumero() << endl;
    return 0;
}
