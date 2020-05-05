// Realizar un programa que devuelva el resultado de la formula cuadratica
#include <iostream>
using namespace std;

int main() {
    int x1;
    int y2;
    int z3;

    cout << "Primer numero \n";
    cin >> x1;
    cout << "Segundo numero \n";
    cin >> y2;
    cout << "Tercer numero \n";
    cin >> z3;

    int prom = ((x1+y2+z3)/3);

    cout <<"El promedio es: " << prom;

    return 0;

}


