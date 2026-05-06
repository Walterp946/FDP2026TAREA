#include <iostream>
using namespace std;

int main(){

int tipo_de_transporte, bus, metro, taxi, billetera =20;
cout << "Bienvenido a Walter SA de CV: \n";

cout << "1. bus\n";
cout << "2. metro\n";
cout << "3. taxi\n";

cout << "Ingrese tipo de transporte: ";
cin >> tipo_de_transporte;

switch (tipo_de_transporte )
{
case 1:

    cout << "A seleccionado bus, tu nuevo saldo es de: " << billetera-0.75 << endl;
    break;

case 2:
    cout << "A seleccionado bus, tu nuevo saldo es de: " << billetera-5 << endl;
    break;
    
    case 3:
    cout << "A seleccionado bus, tu nuevo saldo es de: " << billetera-9 << endl;
    break;

default:
cout << "Ningun transporte identificado"; 
    break;
}

    return 0;
}