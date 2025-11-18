#include <iostream>
#include <cmath>

int main(){
    int P;
    float r;
    int n;
    int t;
    double A1;
    int A2;
    float A3;
    double Atotal;

    std::cout<<"\t=========================\n"<<std::endl;
    std::cout<<"\t////INTERES COMPUESTO////\n"<<std::endl;
    std::cout<<"\t=========================\n"<<std::endl;
    std::cout<<"Bienvenid@ al programa para calcular el interes compuesto."<<std::endl;
    std::cout<<"Para empezar ingresa los siguientes datos."<<std::endl;
    std::cout<<"\nIndica tu capital inicial invertida: ";
    std::cin>>P;
    std::cout<<"\nCual es la tasa de interes anual: ";
    std::cin>>r;
    std::cout<<"\nNumero de veces en el año se aplica el interes: ";
    std::cin>>n;
    std::cout<<"\nDe cuantos años es tu inversion: ";
    std::cin>>t;
    A1=1+r/n;
    A2=n*t;
    A3=pow(A1, A2);
    Atotal=P*A3;
     std::cout<<"\n\t//RESULTADO//"<<std::endl;
    std::cout<<"\nEl interes compuesto de tu inversion es: "<<Atotal<<std::endl;
    return 0;




}