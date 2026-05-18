#include <iostream>
using namespace std;

int main()
{
    int n = 0, a = 0, b = 1;

    cout << "\n------------Ingrese un numero:------------- \n";
    cin >> n;

    for (int i = 0; i <= n ; i++)
    {
        cout << a << " ";
        int siguiente = a + b;
        a = b;
        b = siguiente;

    }

        return 0;
}
