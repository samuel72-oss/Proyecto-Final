#include <iostream>
using namespace std; 

int main(){
    
    bool a;
    int i=1;
    int j=0;
    int n;
    cout<<"De cuantos digitos es tu numero: ";
    cin>>n;
    int x[n];
    while(i<=n){
        cout<<"ingresa tu digito "<<i<<": ";
        cin>>x[j];
        i++;
        j++;
    }
    i=0;
    j=1;
    while(i<n && i!=j){
        if(x[i]!=x[n-j]){
            i=j;
            a=false;
        }
        else{
            a=true;
        }
        i++;
        j++;

    }
    if (a==true){
        cout<<"Su número es palindromo";
    }
    if (a==false){
        cout<<"Su número no es palíndromo";
    }
    

    
}