#include "DispositivoInteligente.h"
#include <vector>

/**
 * \brief Función principal del programa.
 * 
 * Permite al usuario registrar una cantidad de dispositivos inteligentes,
 * controlar su encendido, apagado o bloqueo, y finalmente mostrar una factura
 * con el consumo total de energía de cada dispositivo.
 */

int main(){
    int a;
    int i=0;
    string n;
    float v;
    bool estado;
    bool r=true;
    bool bloq=false;
    char s;
    float total=0.0;

    cout<<"\t\t:-:-:-:-:-:-:-:-:-:-:-:-:-:-:"<<endl;
    cout<<"\t\tBIENVENIDO AL PROGRAMA MD-SQ"<<endl;
    cout<<"\t\t:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n"<<endl;

    cout<<"Este programa le permitira controlar sus dispositivos inteligentes y calcular su consumo/costo de energia\n"<<endl;

    cout<<"Ingresa cuantos dispositivos inteligentes deseas ingresar al programa: ";
    cin>>a;
    vector<DispositivoInteligente> Disp;
    cout<<endl;

    while(i<a){
        r=true;
        cout<<"Ingresa el nombre del dispositivo "<<i+1<<": ";
        cin>>n;
        cout<<"Ingresa cuantos Vatios consume por hora: ";
        cin>>v;
        cout<<"Deseas que tu dispositivo inicie apagado (s/n): ";
        cin>>s;
        while(r==true){
            if(s=='s'|| s=='S'){
                r=false;
                estado=false;
            }
            else if(s=='n'|| s=='N'){
                r=false;
                estado=true;
            }
            else{
                r=true;
                cout<<".-.-.-.-Respuesta Invalida-.-.-.-."<<endl;
                cout<<"Deseas que tu dispositivo inicie apagado (s/n): ";
                cin>>s;
            }
        }
        Disp.push_back(DispositivoInteligente(n,estado,total,v,bloq));
        i++;
    }
    i=0;
    int j=0;
    int dia;
    cout<<"Cuantas veces deseas controlar los dispositivos: ";
    cin>>dia;
    while(i<dia){
        j=0;
        while(j<a){
            Disp[j].menu(Disp,j);
            j++;
        }
        i++;
    }
    i=0;
    while(i<a){
        Disp[i].factura();
        cout<<"\n";
        i++;
    }
}