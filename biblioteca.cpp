#include <iostream>
#include <string>
using namespace std;

class vehiculo{
    protected:
        string marca;
        string modelo;
        string placa;
    public:
        vehiculo(string,string,string);
        void info();
};

vehiculo::vehiculo(string _marca,string _modelo,string _placa){
    marca=_marca;
    modelo=_modelo;
    placa=_placa;
}

void vehiculo::info(){
    cout<<"El vehiculo es un "<<marca<<" de modelo "<<modelo<<" con la placa "<<placa<<endl;
}

class carro : public vehiculo{
    private:
        int pasajeros;
    public:
        carro(string,string,string,int);
        virtual void alquilar();
};

carro::carro(string _marca,string _modelo,string _placa, int _pasajeros) : vehiculo(_marca,_modelo,_placa){
    pasajeros=_pasajeros;
}

void carro::alquilar(){
    int tiempo;
    cout<<"Deseas alquilar el carro por 1.Horas o 2.Dias: ";
    cin>>tiempo;
    if(marca=="Bugatti" || marca=="MercedesBenz" || marca=="Ferrari"){
        if(tiempo==2){
            int alq=15000000;
            int di;
            cout<<"Cuantos dias deseas alquilar el carro: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro: "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=1200000;
            int ho;
            cout<<"Cuantas horas deseas alquilar el carro: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
    else{
        if(tiempo==2){
            int alq=5000000;
            int di;
            cout<<"Cuantos dias deseas alquilar el carro: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro: "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=800000;
            int ho;
            cout<<"Cuantas horas deseas alquilar el carro: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Carro "<<marca<<" "<<modelo<<" de "<<pasajeros<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
}

class bicicleta : public vehiculo{
    private:
        int pasajero;
    public:
        bicicleta(string,string,string,int);
        void alquilar();
};

bicicleta::bicicleta(string _marca,string _modelo,string _placa, int _pasajero) : vehiculo(_marca,_modelo,_placa){
    pasajero=_pasajero;
}

void bicicleta::alquilar(){
    int tiempo;
    cout<<"Deseas alquilar el carro por 1.Horas o 2.Dias: ";
    cin>>tiempo;
    if(marca=="specialized" || marca=="trek" || marca=="pinarello"){
        if(tiempo==2){
            int alq=800000;
            int di;
            cout<<"Cuantos dias deseas alquilar la bicicleta: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta: "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=50000;
            int ho;
            cout<<"Cuantas horas deseas alquilar la bicicleta: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
    else{
        if(tiempo==2){
            int alq=500000;
            int di;
            cout<<"Cuantos dias deseas alquilar la bicicleta: ";
            cin>>di;
            cout<<"\n";
            alq=alq*di;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta: "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
        else{
            int alq=40000;
            int ho;
            cout<<"Cuantas horas deseas alquilar la bicicleta: ";
            cin>>ho;
            cout<<"\n";
            alq=alq*ho;
            cout<<"\t_____________________"<<endl;
            cout<<"\t       FACTURA       "<<endl;
            cout<<"\t_____________________\n"<<endl;
            cout<<"Bicicleta "<<marca<<" "<<modelo<<" de "<<pasajero<<" pasajeros"<<endl;
            cout<<"Placa: "<<placa<<endl;
            cout<<"Costo: $"<<alq<<endl;
        }
    }
}

int main(){
    int p;
    cout<<"BIENVENIDO AL PROGRAMA"<<endl;    
    cout<<"Que vehiculo deseas alquilar: "<<endl;
    cout<<"1.Carro"<<endl;
    cout<<"2.Bicicleta"<<endl;
    cout<<"Selecciona la opción: ";
    cin>>p;
    cout<<"\n";
    switch(p){
        case 1: {
            string a;
            string b;
            string c;
            int d;
            cout<<"Elige la marca del carro que deseas alquilar"<<endl;
            cout<<"1. Buggati"<<endl;
            cout<<"2. MercedesBenz"<<endl;
            cout<<"3. Renold"<<endl;
            cout<<"4. Mazda"<<endl;
            cout<<"5. Ferrari"<<endl;
            cout<<"ESCRIBE (como se muestra en las opciones) por favor tu decisión final: ";
            cin>>a;
            cout<<"de que año lo deseas (modelo): ";
            cin>>b;
            cout<<"Que placa deseas: ";
            cin>>c;
            cout<<"Cuantos pasajeros 2 o 4: ";
            cin>>d;
            carro c1 = carro(a,b,c,d);
            c1.alquilar();
            break;
        }
        case 2: {
            string e;
            string f;
            string g;
            int h;
            cout<<"Elige la marca de la bicicleta que deseas alquilar"<<endl;
            cout<<"1. Trex"<<endl;
            cout<<"2. Specialized"<<endl;
            cout<<"3. Pinarello"<<endl;
            cout<<"4. Colnago"<<endl;
            cout<<"5. Cervélo"<<endl;
            cout<<"ESCRIBE (como se muestra en las opciones) tu decisión final: "<<endl;
            cin>>e;
            cout<<"\n";
            cout<<"de que año lo deseas (modelo): ";
            cin>>f;
            cout<<"Que placa deseas: ";
            cin>>g;
            cout<<"Es de uno o dos pasajeros: ";
            cin>>h;
            bicicleta b1 = bicicleta(e,f,g,h);
            b1.alquilar();
            break;
        }
    }
}
