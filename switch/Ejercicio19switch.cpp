#include <iostream>
using namespace std;

int main(){
int multas;

cout<< "Ingrese el numero de multas: ";
cin>>multas;

switch(multas){
case 1:

cout<< "leve";
break;

case 2:
cout<< "medio";
break;

case 3:
cout << "riesgo";
break;

default:
cout<< "nivel extremo";
break;
}

    return 0;
}