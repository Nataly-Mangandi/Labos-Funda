//CALIFICACIONES
#include <iostream>
#include <math.h>
using namespace std;

bool vEstudiantes(int estudiantes);//validar estudiantes para evitar el ingreso de numeros negativos
bool vNotas(float nota);//validar notas, sólo permite el ingreso de notas entre 0 a 100
int nEstudiantes();//permite el ingreso del numero de estudiantes a procesar
void ingresarCalificaciones(int estudiantes, float calificaciones[][4]);
void mostrarCalificaciones(int estudiantes, float calificaciones[][4]);//Visualizar en pantalla las calificaciones ingresadas
void sumaCalificaciones(int estudiantes, float calificaciones[][4], float []);//Sumar las calificaciones ingresadas
void estado(int estudiantes,float []);//determinar si el estudiante aprobó o reprobó mostrando su promedio ponderado


int main(void){
    int estudiantes=nEstudiantes();
    float calificaciones[estudiantes][4]; //de acuerdo al numero de estudiantes crear el arreglo en 2D
    float sumas[estudiantes];//arreglo para el calculo de la suma de las calificaciones por estudiante
    
    ingresarCalificaciones(estudiantes, calificaciones);
    mostrarCalificaciones(estudiantes, calificaciones);
    sumaCalificaciones(estudiantes, calificaciones, sumas);
    estado(estudiantes, sumas);
    
}

bool vEstudiantes(int data){
    if(data>1){
        return true;
    }else{
      printf("El numero de estudiantes es invalido \n");
    }
    return false;
}

bool vNotas(float nota){
    if(nota>=0 && nota<=100){
        return true;
    }else{
        printf("Ingrese una nota valida \n");
    }
    return false;
}

void mostrarCalificaciones(int estudiantes, float calificaciones[][4]){
    int i;
    int j;
    
    for(j=1; j<=estudiantes; j++){//recorre al arreglo 2D por estudiante
        printf("\n Las calificaciones del estudiante %d son: ",j);
        for(i=1; i<=5; i++){//recorre al arreglo 2D por calificación
            if(i==5){
                printf("%g. ",calificaciones[j][i]);
            }else{
                printf("%g, ",calificaciones[j][i]);
            }
        }
    }
}

void sumaCalificaciones(int estudiantes, float calificaciones[][4], float sumas[]){
    int i,j;
    float suma=0;
    
    for(j=1; j<=5; j++){
        for(i=1; i<=5; i++){
        suma=suma+calificaciones[j][i]*.2;
        }
        sumas[j]=suma;
        suma=0;
    }
}

int nEstudiantes(){
     int estudiantes=0;//ingreso del numero de estudiantes a procesar
     do{//pide el número de estudiantes hasta ingresar un número válido
        printf("// PROMEDIO DE NOTAS // \n");
        printf("Ingrese el numero de estudiantes a evaluar: ");
        scanf("%d",&estudiantes);
    }while(!vEstudiantes(estudiantes));
    return estudiantes;
}

void ingresarCalificaciones(int estudiantes, float calificaciones[][4]){
        int i,j;//incrementadores de filas y columnas
        float nota=0;//ingreso de las calificaciones de los estudiantes
        for(j=1; j<=estudiantes; j++){
        printf("Calificaciones del estudiante %d \n",j);
        for(i=1; i<=5; i++){
        do{
            printf("Ingrese la nota numero %d: ",i);
            scanf("%g",&nota);
        }while(!vNotas(nota));
        calificaciones[j][i]=nota;
        }
    }
}

void estado(int estudiantes, float sumas[]){
    int i,j;//incrementadores de filas y columnas
    for(i=1; i<=estudiantes; i++){
        printf("\n La suma de las calificaciones del estudiante %d es: %.2f ", i,sumas[i]);
        if(sumas[i]<70){
            printf("REPROBADO");
        }else{
            printf("APROBADO");
        }
    }
}
