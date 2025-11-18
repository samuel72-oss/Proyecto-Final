#include <iostream>
using namespace std;

int main() {
    int vjs=0;
    int t=0;
    int l=0;
    int s=0;
    int r=0;
    int n;
    
    cout << "======================================\n";
    cout<<"Bienvenido al programa que busca"<<endl;
    cout<<"Este programa encuentra dos numeros \n";
    cout<<"del arreglo que sumen el objetivo \n";
    cout << "======================================\n\n";

    cout<<"Ingrese el tamaño del arreglo: ";
    cin>>n;
    int nums[n];
    

    for(int i=0; i<n; i++){
        cout<<"Ingrese los números: "<<i+1<<" : ";
        cin >> nums[i];
    }
    int target;
    cout<<"Ingrese el número objetivo: ";
    cin>>target;
    for (int i = 0; i < n; i++) {
        int j=0;
        while(j<n) {
            r= nums[i];
            s =r+nums[j];
            if (s == target) {
                vjs=s;
                t=i;
                l=j;
            }
            j++;
        }
    }
    if (s!=0 && t!=l){
        cout<<"Suma encontrada: "<<vjs<<endl;
        cout<<"Índice 1: "<<l<<endl;
        cout<<"Índice 2: "<<t<<endl;
    }
    else{
        cout<<"No se encontraron dos números que sumen el objetivo."<<endl;
    
    }
     
} 
