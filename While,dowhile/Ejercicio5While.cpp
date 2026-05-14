#include <iostream>

using namespace std;

int main(){
int N, suma = 0, contador = 1;

cout << "Ingrese un numero: ";
cin >> N;

while(contador <= N){
    if(contador % 2 == 0){
        suma = suma + contador;
    }
    contador++;
}

    return 0;
}