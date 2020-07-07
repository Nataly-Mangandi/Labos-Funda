#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, y, z;

    cout << "Ingrese valor de x:  \n";
    cin >> x;
    cout << "Ingrese valor de y:  \n";
    cin >> y;
    cout << "Ingrese valor de z:  \n";
    cin >> z;

    int dis = ((pow(y,2))-(4*x*y));

    if (dis < 0) {
        cout << "No hay solucion real de la ecuacion, su resultado es negativo";
    } else {
        //Ecuacion 1
        int ecua1 = (-1*y +(sqrt(pow(y,2)-4*x*z)))/2*x;

        //Ecuacion 2
        int ecua2 = (-1*y -(sqrt(pow(y,2)-4*x*z)))/2*x;

        cout << "El valor de x1 es: " << ecua1 << "\n";
        cout << "El valor de x2 es: " << ecua2 << "\n";
        }


    
        return 0;
    
}