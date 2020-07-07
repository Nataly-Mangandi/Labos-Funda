//Promedio de estatura
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

bool vData(int data);
bool vEstatura(float estatura);
void mostrarEstaturas(int number, float []);
float sumarEstaturas(int number, float []);
float promedioEstaturas(int number, float []);
int arribaDelPromedio(int number, float []);
int igualAlPromedio(int number, float []);
int debajoDelPromedio(int number, float []);

int main(void){
    int number;
    float estatura;
    int i;
    do
    {
       printf("// PROMEDIO DE ESTATURA // \n");
        printf("Ingrese la cantidad de estaturas a procesar: ");
        scanf("%d",&number);
    } while (!vData(number));
    
    float estaturas[number];

    for(i=1; i<=number; i++){
        do{
            printf("Ingrese la %da. estatura: ", i);
            scanf("%g",&estatura);
        }while(!vEstatura(estatura));
        estaturas[i-1]=estatura;
    }
    mostrarEstaturas(number, estaturas);
    printf("La suma de las estaturas es: %g \n", sumarEstaturas(number, estaturas));
    printf("El promedio de las estaturas es: %g \n", promedioEstaturas(number, estaturas));
    if(arribaDelPromedio(number, estaturas)==0){
        printf("Estaturas arriba del promedio: Ninguna \n");
    }else{
        printf("Estaturas por encima del promedio: %d \n", arribaDelPromedio(number, estaturas));
    }
    if(debajoDelPromedio(number, estaturas)==0){
        printf("Estaturas debajo del promedio: Ninguna \n");
    }else{
        printf("Estaturas por debajo del promedio: %d \n", debajoDelPromedio(number, estaturas));
    }
    if(igualAlPromedio(number, estaturas)==0){
        printf("Estaturas igual al promedio: Ninguna \n");
    }else{
        printf("Estaturas igual al promedio: %d \n", igualAlPromedio(number, estaturas));
    }
}

bool vData(int number){
    if(number>1){
        return true;
    }
    printf("El numero de datos a evaluar deben de ser al menos a 2 \n");
    //    printf("Ingrese una edad valida \n");
    
    return false;    
}

bool vEstatura(float estatura){
    if(estatura>0){
        return true;
    }
    printf("Ingrese una estatura valida \n");
    
    return false; 
}

void mostrarEstaturas(int number, float estaturas[]){
    int i;
    printf("Las estaturas ingresadas son: ");
    for(i=1; i<=number; i++){
        if(i<number){
            printf("%g, ",estaturas[i-1]);
        }else{
            printf("%g.\n",estaturas[i-1]);
        }
    }
    
}

float sumarEstaturas(int number, float estaturas[]){
    int i;
    float suma=0;
    for(i=0; i<number; i++){
        suma=suma+estaturas[i];
    }
    return suma;
}

float promedioEstaturas(int number, float estaturas[]){
    return sumarEstaturas(number, estaturas)/number;
}

int arribaDelPromedio(int number, float estaturas[]){
    int i;
    int cuenta=0;
    float promedio;

    promedio=promedioEstaturas(number, estaturas);
    for(i=0; i<number; i++){
        if(estaturas[i]>promedio){
            cuenta++;
        }
    }
    return cuenta;
}

int debajoDelPromedio(int number, float estaturas[]){
    int i;
    int cuenta=0;
    float promedio;

    promedio=promedioEstaturas(number, estaturas);
    for(i=0; i<number; i++){
        if(estaturas[i]<promedio){
            cuenta++;
        }
    }
    return cuenta;
}

int igualAlPromedio(int number, float estaturas[]){
    int i;
    int cuenta=0;
    float promedio;

    promedio=promedioEstaturas(number, estaturas);
    for(i=0; i<number; i++){
        if(estaturas[i]==promedio){
            cuenta++;
        }
    }
    return cuenta;
}