//NUMERO MAGICO

#include "iostream"
#include "math.h"
using namespace std;

void adivinarNumero(int num, int guardado);

int main(void){

    int num;
    int intentos=5;
    int guardado= 77;
    int opcion;

    cout<<"Hola juguemos un juego! \n";
    cout<<"Intenta adivinar el numero magico~ \n";
    
    for(int i=0; i<5; i--){
        cout<<"Inserta un numero: ";
        cin>>num;
        
        adivinarNumero(num, guardado);

        cout<<"Te quedan: "<<--intentos<<" intentos \n";
        cout<<"Seguir jugando?(0 para salir/ cualquier otro numero para seguir): ";
        cin>>opcion;

        if(opcion==0 || intentos==0 || num==guardado){
            cout<<"Ya no tendras intentos/ Hasta la proxima! \n";
            return 0;
        }else{
            cout<<"Sigamos jugando! \n \n";
        }

        

    }


}

void adivinarNumero(int num, int guardado){

    if(num>100 || num<0){
        cout<<"Intenta ingresar un numero del 1 al 100 \n";
    }else if(num>1 && num<guardado){
        cout<<"Estas lejos del numero magico \n";
        
        
    }else if(num>1 && num>guardado){
        cout<<"Te pasaste del numero magico \n";
       

    }else if(num==guardado){
        cout<<"ADIVINASTE! Perdiste tu tiempo, felicidades \n";
    
    }else if(num==1){
        cout<<"Estas lejos del numero magico \n";
        
    }else{
        cout<<"No ingresaste un numero valido \n";
    }


}