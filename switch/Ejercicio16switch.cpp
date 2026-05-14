#include <iostream>
using namespace std;

int main(){

int dia;

cout << "Bienvenido a la UCA\n";

cout << "Ingrese el dia que quiera saber el horario: \n";
cout << "1. Lunes\n";
cout << "2. martes\n";
cout << "3. miercoles\n";
cout << "4. jueves\n";
cout << "5. viernes\n";

cout << "Ingrese el dia: \n";
cin >> dia;


switch (dia)
{
case 1:
    cout << "Has seleccionado lunes, este dia no tienes clase\n" << endl;
    break;

    case 2:
    cout << "Has seleccionado martes, este dia no tienes clase\n" << endl;
    break;

    case 3:
    cout << "Has seleccionado miercoles, este dia si tienes clase\n" << endl;
    break;

    case 4:
    cout << "Has seleccionado jueves este dia no tienes clase\n" << endl;
    break;

    case 5:
    cout << "Has seleccionado viernes, este dia si tienes clase\n" << endl;
    break;

default:
cout << "sabado y domingo esta cerrada la UCA";
 break;
}

    return 0;
}