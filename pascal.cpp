#include <iostream>
using namespace std;
int main() {
    int fil;
    int i=0;
    int j=0;
    cout<<"Ingrese el número de filas para el triángulo de Pascal: ";
    cin>>fil;
    int pascal[fil][fil];
    while (i < fil) {
        int j = 0;
        while (j <= i) {
            if (j == 0 || j == i)
                pascal[i][j] = 1;
            else
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            j++;
        }
        i++;
    }

    i = 0;
    while (i < fil) {
        int j = 0;
        while (j <= i) {
            cout << pascal[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}