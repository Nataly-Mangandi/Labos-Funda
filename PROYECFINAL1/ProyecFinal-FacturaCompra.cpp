//-----------------------FACTURA DE UNA COMPRA----------------------------------
#include <iostream>
#include <string.h>
#include <math.h>
#include <conio.h>
using namespace std;

//ESTRUCTURA
const int Cad=20;

struct costoPorArticulo{
    char nombreArticulo[Cad+1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//FUNCIONES
void leerDatos(costoPorArticulo art[]);
void calcularCosto(costoPorArticulo art[], int cant);
void desplegarContenido(costoPorArticulo art[], int cantidad);
float valorTotalCompra(costoPorArticulo art[], int cantidad);

//Declaramos un auxiliar para incrementar la posición de los elementos en el arreglo.
int aux = 0;

//LLAMAR FUNCIONES
int main(void){
    int cantidadDeProductos;
    
    printf("----FACTURA DE COMPRA---- \n \n");
    printf("Buenos dias, ingrese la cantidad de productos que desea llevar: ");
    cin>>cantidadDeProductos;
    
    //Aquí se guardan los artículos.
    costoPorArticulo articulos[cantidadDeProductos];

    //se repetira hasta que alcance la cantidad de prod.
    for(int i=0; i<cantidadDeProductos; i++){
        leerDatos(articulos);
        printf("\n");
    }
    printf("---- P R O C E S A N D O . . . ----\n");
    
    //Función para calcular el costo de los artículos.
    calcularCosto(articulos, cantidadDeProductos);
    
    printf("\n-------------Bien, gracias.---------------------- \n \n");

    //Función para mostrar todos los artículos almacenados.
    desplegarContenido(articulos, cantidadDeProductos);

    //Función para desplegar el total de la compra.
    float total=valorTotalCompra(articulos, cantidadDeProductos);
    cout<<total;

    printf("\n \n ----Muchas gracias por su compra----");

    
    getch();
    return 0;
}

//LEER LOS DATOS
void leerDatos(costoPorArticulo art[]){
    char nombreArticulo[21];
    float precio;
    int cantidad;   
    
    printf("\nIngrese el nombre del articulo: ");
    fflush(stdin);
    cin.getline(nombreArticulo, 20, '\n');
    printf("Ingrese la cantidad de elementos que va a llevar: ");
    cin >> cantidad;
    printf("Ingrese el precio del articulo: ");
    cin >> precio;
   
    
    //Se utiliza para rellenar los campos.
    costoPorArticulo costo;
    
    for(int i=0; i<21; i++){
        costo.nombreArticulo[i] = nombreArticulo[i];
    }
    costo.cantidad = cantidad;
    costo.precio = precio;
    
    art[aux] = costo;
    
    aux++;
}

//MULTIPLICAR EL PRECIO POR LA CANTIDAD
void calcularCosto(costoPorArticulo art[], int cant){
    for(int i=0; i<cant; i++){   
    art[i].costoPorArticulo = art[i].precio * art[i].cantidad;
    }
}

//MOSTRAR TODOS LOS ARTICULOS CON SUS DATOS
void desplegarContenido(costoPorArticulo art[], int cantidad){
    for(int i=0; i<cantidad; i++){
        cout << "\n---- Articulo " << i+1 << " ----" << endl;
        fflush(stdin);    
        cout << "Nombre: " << art[i].nombreArticulo << endl;
        cout << "Cantidad: " << art[i].cantidad << endl;
        cout << "Precio: $" << art[i].precio << endl;
        cout << "Costo por articulo: $" << art[i].costoPorArticulo << endl;
    }
}

//DESPLEGAR EL VALOR TOTAL DE LA COMPRA
float valorTotalCompra(costoPorArticulo art[], int cantidad){
   float total;
   printf("\n El total a pagar por su compra es: $ ");
    for(int i=0; i<cantidad; i++){
       total+=art[i].costoPorArticulo;
   }

   return total;
}