#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string n;
    int p,c;

    cout << "Escriba el nombre del producto: \n";
    cin >> n;

    cout << "Ingrese el precio del producto: \n";
    cin >> p;

    cout << "Ingrese la cantidad comprada: \n";
    cin >> c;

    int din = (p*c);

    cout << "El total de dinero gastado es: " << din << "\n";

    return 0;
}