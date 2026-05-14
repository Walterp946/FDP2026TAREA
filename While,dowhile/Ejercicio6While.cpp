#include <iostream>
using namespace std;

int main()
{
    string contrareal, contrasena2;
    contrareal = "patineta";

    cout << "Ingresa tu contrasena por favor: ";
    cin >> contrasena2;

    while (contrareal != contrasena2)
    {

        cout << " Acceso denegado " << endl;
        cout << " Error, Intentelo nuevamente: ";
        cin >> contrasena2; 

    
    }
    if (contrareal == contrasena2)
    {
        cout << "Acceso concedido";

    }

    return 0;
}