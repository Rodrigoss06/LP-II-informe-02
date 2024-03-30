#include <iostream>
using namespace std;
class Avion{
    protected:
        int combustible;
        int tripulacionAforo=60;
};



class Mision:public Avion{
    private:
        string destino;
        double duracionViaje;
        int tripulacionIngresada;
        int consumoHora=80;
    public:
        Mision(string _destino){
            destino=_destino;
        }

        int verificarCombustible(double,int);
        int verificarTripulacion(int);
        void volar(double);
        
        
};

int Mision::verificarCombustible(double _duracionViaje,int _combustible){
    if (((_duracionViaje/60)*80)>_combustible){
        return 0;
    }
    else
        return 1;
}

int Mision::verificarTripulacion(int _tripulacionIngresada){
    if (_tripulacionIngresada>tripulacionAforo){
        return 0;
    }
    else {
        return 1;
        tripulacionIngresada=_tripulacionIngresada;
    }
}

void Mision::volar(double duracionMision){
    cout<<"Volando hacia la mision con destino a "<<destino<<" durante: "<<duracionMision<<" minutos"<<endl;
}



int main()
{
    int vald1 ,vald2,duracionVuelo,trip; 
    double comb;
    string dest;
    cout<<"Ingrese el destino: ";
    cin>>dest;
    Mision vuelo1(dest);
    while (true){
        cout<<"Ingrese la duracion del viaje en minutos (valida): ";
        cin>>duracionVuelo;
        cout<<"Ingrese la cantidad de combustible en galones a depositar (valida): ";
        cin>>comb;
        if ((vuelo1.verificarCombustible(duracionVuelo,comb)!=0)){
            break;
        }
        else cout<<"Ingrese valores donde el combustible sea valido para la duracion del viaje"<<endl;
    }
    
    while (true){
        cout<<"Ingrese en numero de tripulantes: ";
        cin>>trip;

        if ((vuelo1.verificarTripulacion(trip)!=0)){
            break;
        }
        else cout<<"La cantidad maxima de tripulantes es 60"<<endl;
    }
    
    
    cout<<"Se verifico exitosamente los detalles de la mision"<<endl;
    vuelo1.volar(duracionVuelo);
    return 0;
}




