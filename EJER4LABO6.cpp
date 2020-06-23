//SUMAR MISMAS POSICIONES

#include <iostream>
#include <math.h>
using namespace std;

void leerArreglo(int arreglo[],int arreglo2[],int n );
void sumaDeArreglos(int arreglo[], int arreglo2[], int n, int arregloSuma[]);
void desplegarResultado(int arregloSuma[], int n);

int main (void){
    int n;//cantidad de elementos
    int arreglo[50];
    int arreglo2[50];
    int arregloSuma[50];

    cout<<"VAMOS A HACER UNA SUMA DE ARREGLOS! \n";
    cout<<"Escribe cuantos elementos tendran los arreglos: ";
    cin>>n;

    if(n>50){
        cout<<"OH NO! Has ingresado demasiados valores :(";
        return 0;
    }
    

    leerArreglo(arreglo, arreglo2, n);
    sumaDeArreglos(arreglo, arreglo2, n, arregloSuma);
    desplegarResultado(arregloSuma, n);

    return 0;

}

//primer funcion
void leerArreglo(int arreglo[],int arreglo2[],int n ){

    cout<<"Bien, ahora escribe los elementos del arreglo 1: ";
    
    for(int i=0; i<n; i++){
        cin>>arreglo[i];
    }

    cout<<"Ahora los elementos del arreglo 2: ";
    
    for(int i=0; i<n; i++){
        cin>>arreglo2[i];
    }

    
}

//segunda funcion
void sumaDeArreglos(int arreglo[], int arreglo2[], int n, int arregloSuma[]){


    for(int i=0; i<n; i++){
        arregloSuma[i]=arreglo[i]+arreglo2[i];
    }

}

//tercer funcion
void desplegarResultado(int arregloSuma[], int n){
    
    cout<<"Entonces, la suma de las posiciones de los arreglos son: ";

    for(int i=0; i<n; i++){
        cout<<" "<<arregloSuma[i];
    }

}



