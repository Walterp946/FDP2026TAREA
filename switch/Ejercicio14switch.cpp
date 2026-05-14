#include <iostream>
using namespace std;
int main()
{
    int edad;
    int a;
    cout << "Ingrese su edad: ";

    cin >> edad;

    if (edad < 3)
    {
        a = 1;
    }
    else if (edad >3  && edad <= 8  )
    {
        a = 2;
    }
    else if (edad <= 13)
    {
        a = 3;
    }
    else if (edad >= 14)
    {
        a = 4;
    }
    else
    {
        a = 0;
    }

    switch (a)
    {
    case 1:
        cout << "Categoria g";
        break;

    case 2:
        cout << "Categoria pg";
        break;

    case 3:
        cout << "Categoria pg -13";
        break;

    case 4:
        cout << "Categoria R";
        break;

    default:
        cout << "Ninguna de las anteriores";
    }

    return 0;
}