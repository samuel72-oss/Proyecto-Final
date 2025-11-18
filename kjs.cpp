#include "DispositivoInteligente.h"
/**
 * \brief Constructor de la clase DispositivoInteligente.
 * 
 * Inicializa los atributos del dispositivo con los valores proporcionados.
 * 
 * \param _nombre Nombre del dispositivo.
 * \param _estado Estado inicial (true = encendido, false = apagado).
 * \param _total Energía total consumida hasta el momento.
 * \param _Consumo_Energia Consumo energético del dispositivo en vatios/hora.
 * \param _Control Indica si el control remoto está bloqueado (true = bloqueado).
 */

DispositivoInteligente::DispositivoInteligente(string _nombre,bool _estado,float _total,float _Consumo_Energia,bool _Control){
    nombre=_nombre;
    estado=_estado;
    total=_total;
    Consumo_Energia=_Consumo_Energia;
    Control=_Control;
}

/**
 * \brief Muestra un menú de acciones para el dispositivo y permite al usuario elegir una.
 * 
 * \param Disp Vector que contiene los dispositivos inteligentes.
 * \param i Índice del dispositivo actual dentro del vector.
 */

void DispositivoInteligente::menu(vector<DispositivoInteligente>& Disp,int i){
    int op;

    cout<<"\t-------------------"<<endl;
    cout<<"\t   MENÚ DE ACCIÓN "<<nombre<<"\n"<<endl;

    cout<<"1. Encender Dispositivo"<<endl;
    cout<<"2. Apagar Dispositivo"<<endl;
    cout<<"3. Bloquear Dispositivo"<<endl;
    cout<<"Selecciona una opcion: ";
    cin>>op;

    switch(op){
        case 1:
            Disp[i].encender(Disp, i);
            cout<<"\n";
            break;
        case 2:
            Disp[i].apagar();
            break;
        case 3:
            Disp[i].bloquear_control_remoto();
            break;
    }
}

/**
 * \brief Enciende el dispositivo si el control remoto no está bloqueado.
 * 
 * Pregunta al usuario cuántas horas estuvo encendido y calcula el consumo de energía.
 * 
 * \param Disp Vector de dispositivos inteligentes.
 * \param i Índice del dispositivo actual dentro del vector.
 */

void DispositivoInteligente::encender(vector<DispositivoInteligente>& Disp, int i){
    int h;
    if(Control==false){
        estado=true;
        cout<<"Cuantas horas estuvo encendido el dispositivo "<<nombre<<": ";
        cin>>h;
        Disp[i].medir_consumo(Disp,h,i);
        
    }
    else{
        cout<<"¡¡¡¡¡¡CONTROL BLOQUEADO NO TIENES ACCESO A ESTA FUNCIÓN!!!!!!";
    }
}

/**
 * \brief Apaga el dispositivo si el control remoto no está bloqueado.
 */

void DispositivoInteligente::apagar(){
    if(Control==false){
        estado=false;
        cout<<"Apagado"<<endl;
    }
    else{
        cout<<"¡¡¡¡¡¡CONTROL BLOQUEADO NO TIENES ACCESO A ESTA FUNCIÓN!!!!!!";
    }
}

/**
 * \brief Calcula la energía total consumida por el dispositivo.
 * 
 * \param Disp Vector de dispositivos inteligentes.
 * \param horas Número de horas que el dispositivo estuvo encendido.
 * \param i Índice del dispositivo actual dentro del vector.
 * \return Energía total consumida.
 */

float DispositivoInteligente::medir_consumo(vector<DispositivoInteligente>& Disp, float horas, int i){
    total=total+(horas*Consumo_Energia);
    Disp[3].total = total;

    return total;
}

/**
 * \brief Bloquea el control remoto del dispositivo.
 * 
 * Una vez bloqueado, no se puede encender ni apagar hasta reiniciar.
 */

void DispositivoInteligente::bloquear_control_remoto(){
    Control=true;
    cout<<"Por favor reinicia el dispositivo para volver a activar la opcion de encendido y apagado"<<endl;
}
/**
 * \brief Muestra la factura con el total de energía consumida y el valor a pagar.
 * 
 * El valor se calcula multiplicando el consumo total por una tarifa de 901, es decir 901 pesos la hora.
 */
 
void DispositivoInteligente::factura(){
    cout<<"Dispositivo "<<nombre<<"|| Vatios totales "<<total<<"|| Valor a pagar $"<<total*901<<"||"<<endl;
}