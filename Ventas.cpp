#include <iostream>
using namespace std;

int main(){
    int i=0;
    int n;
    bool a=false;
    int j;
    cout<<"Cuantos dias conoces el precio esta semana: ";
    cin>>n;
    while(a==false){
        if(n<8){
            a=true;
        }
        else{
            cout<<"Es imposible ya que la semana tienga mas de 7 dias"<<endl;
            cout<<"Nuevamente ingresa cuantos dias conoces el precio esta semana: ";
            cin>>n;
            

        }
        
    }
    int ss[n];
    cout<<n<<endl;
    while(i<n){
        cout<<"Ingresa el precio del dia "<<i+1<<": ";
        cin>>ss[i];
        i++;
    }
    i=0;
    int s=0;
    int c;
    while(i<n){
        if(ss[i]>s){
            c=ss[i];
            j=i;
        }
        i++;
    }
    i=0;
    s=ss[j];
    int l;
    while(i<n){
        if(ss[i]<s){
            s=ss[i];
            l=i;
        }
        i++;
    }

    cout<<"el menor"<<s<<endl;
    cout<<"el mayor"<<c<<endl;

}