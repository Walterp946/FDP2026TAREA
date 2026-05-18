#include <iostream>
using namespace std;

int main()
{
    float numero, total = 0;

    while (numero != 0)
    {

        cout << "Ingrese un numero: ";
        cin >> numero;


        total =  total + numero;

        cout << "Suma actual es: " << total << endl;
    }

    cout << "La suma de todos los numeros es: " <<  total * 2;

    return 0;
}