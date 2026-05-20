#include <iostream>
using namespace std;

int main(){
int numero, cifras=0;

cout << "Ingrese un numero: ";
cin>>numero;

while (numero > 0) {
numero = numero / 10;
cifras++;
}

cout << cifras;

    return 0;
}