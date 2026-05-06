#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    
    int opc;
    float num1, num2;
    
    cout << "Bienvenidos a la calculadora\n"; 
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Potencia\n";
    cout << "6. Modulo\n";
    cout << "7. Salir\n";
    cout << "Ingrese una opcion: ";
    cin >> opc;
    
    cout << "Ingrese el primer valor: ";
    cin >> num1;
    cout << "Ingrese el segundo valor: ";
    cin >> num2;
    
    switch(opc){
        
        case 1:
        cout << num1 + num2;
        break;
        
        case 2:
        cout << num1 - num2;
        break;
        
        case 3:
        cout << num1*num2;
        break;
        
        case 4:
        cout << num1/num2;
        break;
        
        case 5:
        cout << pow(num1, num2);
        break;
        
        case 6:
        cout << fmod(num1, num2);
        break;
        
        default:
        cout << "La opcion ingresada no es valida";
        break;
        
    }

    return 0;
}