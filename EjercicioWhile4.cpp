#include <iostream>
using namespace std;

int main()
{

    int opcion = 0;

    do
    {
        cout << "Bienvenido al menu, digite una opcion" << endl;
        cout << "1: Clima de hoy" << endl;
        cout << "2: De que trata FDP" << endl;
        cout << "3: Comida favorita" << endl;
        cout << "4: Salir" << endl;
        cin >> opcion;
        if (opcion < 1 || opcion > 4)
        {
            cout << "Opcion invalida" << endl;
        }
    } while (opcion < 4);
    cout << "Hasta luego" << endl;

    return 0;
}