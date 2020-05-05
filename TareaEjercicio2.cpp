#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

float main() {
    float r;

    cout << "Ingrese el valor del radio en cm: \n";
    cin >> r;
    
    float area = (M_PI*(pow(r,2)));
    float peri = (2*M_PI*r);

    cout << "El area del circulo es: " << area <<"\n";
    cout << "El perimetro del circulo es: " << peri << "\n";

    return 0;

}