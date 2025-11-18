#include <iostream>
using namespace std;

float add(float a, float b)
{
    
    return a + b;
}

float mult(float a, float b)
{
    return a * b;
}

float resta(float a, float b)
{
    return a - b;
}

float divis(float a, float b)
{
    return a / b;
}

void performOperation(float (*callback)(float, float), float x, float y)
{
    cout << "----------------------" << callback(x, y) << "----------------------"<< endl;
    
}

int main()
{
    float a;
    float b;
    char c;
    cout<<"/////////////////////////////////////////////////////////"<<endl;
    cout<<"\tBienvenido al programa que opera números"<<endl;
    cout<<"/////////////////////////////////////////////////////////"<<endl;
    cout<<"Digita el primer número: ";
    cin>>a;
    if(cin.fail()){
        cout<<"¡¡¡¡¡¡ERROR DEL USUARIO!!!!!!"<<endl;
        cout<<"El usuario no digito un numero"<<endl;
    }
    else{
        cout<<"Escribe el segundo número: ";
        cin>>b;
        if(cin.fail()){
            cout<<"¡¡¡¡¡¡ERROR DEL USUARIO!!!!!!"<<endl;
            cout<<"El usuario no digito un numero"<<endl;
        }
        else{

        cout<<"Que operación deseas realizar? (+),(-),(*),(/) ";
        cin>>c;

            if (c != '+' && c != '-' && c != '*' && c != '/') {
                cout<<"¡¡¡¡¡¡ERROR DEL USUARIO!!!!!!"<<endl;
                cout << "Error en la digitación del operador\n";
            }

            if (c=='+'){
                cout<<"El resultado de tu operación solicitada (+) es: "<<endl;
                performOperation(add, a, b);
            }
            else if (c=='-'){
                cout<<"El resultado de tu operación solicitada (-) es: "<<endl;
                performOperation(resta, a, b);
            }
            else if (c=='*'){
                cout<<"El resultado de tu operación solicitada (*) es: "<<endl;
                performOperation(mult, a, b);
            }
            else if (c=='/'){
                if (b!=0){
                    cout<<"El resultado de tu operación solicitada (/) es: "<<endl;
                    performOperation(divis, a, b);
                }
                else {
                    cout<<"¡¡¡¡¡¡ERROR DEL USUARIO!!!!!!"<<endl;
                    cout<<"No se puede dividir entre 0: Tu resultado es INDETERMINADO"<<endl;
                }
            }
        }
    }

}