#include <iostream>
using namespace std;

int main()
{
    int n, a = 0, b = 1, contador = 1;

    cout << "\n------------Ingrese un numero:------------- \n";
    cin >> n;

    while (contador <= n)
    {

        cout << a << " ";
        int siguiente = a + b;
        a = b;
        b = siguiente;

        contador++;
    }

    return 0;
}
