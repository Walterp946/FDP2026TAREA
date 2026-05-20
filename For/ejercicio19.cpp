#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "---------Ingresa la altura: ---------" << endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        
        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        
        for (int u = 1; u <= (2 * i - 1); u++) {
            cout << "*";
        }

        for (int j = 1; j <= n - i; j++) {
            cout << "-";
        }
        cout << endl; 
    }
    return 0;
}