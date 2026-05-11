#include <iostream>
using namespace std;

int main(){

    int cuenta;
    cout<<"Ingrese un numero para iniciar la cuenta regresiva: "<<endl;
    cin>>cuenta;

    while (cuenta >=  0){
        cout<<"Cuenta regresiva: "<< cuenta <<endl;
        cuenta--;
    }


    return 0;
}