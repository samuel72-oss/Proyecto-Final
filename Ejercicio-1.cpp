/*
Mariana Daza
Samuel Quesada
*/
#include <iostream>
#include <cmath>
int main() {
    int a;
    int b;
    int c=0;
    int d=0;
    int e=0;
    int f=0;
    int g=0;
    int h=0;
    int i=0;
    int p1;
    int p2;
    int p3;
    int p4;
    int p5;
    int pt;
    std::cout<<"////// Máximo Común Divisor //////"<<std::endl;
    std::cout<<"Ingresa el primer número: ";
    std::cin>>a;
    std::cout<<"Ingresa el segundo número: ";
    std::cin>>b;
    int at=a;
    int bt=b;
    
    while(c==0 && d==0){
        c=a%2;
        d=b%2;
        if(c==0 && d==0){
            a=a/2;
            b=b/2;  
            e++;    
        }
        
    
    }
    c=0;
    d=0;
    while(c==0 && d==0){
        c=a%3;
        d=b%3;
        if(c==0 && d==0){
            a=a/3;
            b=b/3;    
            f++;  
        }
        
    }
    c=0;
    d=0;
    while(c==0 && d==0){
        c=a%5;
        d=b%5;
        if(c==0 && d==0){
            a=a/5;
            b=b/5;      
            g++;
        }
        
    }
    c=0;
    d=0;
    while(c==0 && d==0){
        c=a%7;
        d=b%7;
        if(c==0 && d==0){
            a=a/7;
            b=b/7;
            h++;      
        }
        
    }
    c=0;
    d=0;
    while(c==0 && d==0){
        c=a%11;
        d=b%11;
        if(c==0 && d==0){
            a=a/11;
            b=b/11;    
            i++;  
        }
    }
    p1=pow(2,e);
    p2=pow(3,f);
    p3=pow(5,g);
    p4=pow(7,h);
    p5=pow(11,i);
    pt=p1*p2*p3*p4*p5;

    std::cout<<"El maximo comun divisor de "<<at<<" y "<<bt<<" es: "<<pt<<std::endl;
    
    return 0;


    
}