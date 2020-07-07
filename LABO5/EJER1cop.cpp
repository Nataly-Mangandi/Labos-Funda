//MCD EUCLIDES

#include <iostream>
#include <math.h>
using namespace std;

int MCDnumeros(int dividendo, int divisor);

int main(void){

    int dividendo, divisor;

    cout<<"Inngrese el dividendo: ";
    cin>>dividendo;

    cout<<"Ingrese el divisor: ";
    cin>>divisor;

    cout<<"El MCD de los numeros es: "<<MCDnumeros(dividendo, divisor);

    
}

int MCDnumeros(int dividendo, int divisor){

    int residuo=dividendo%divisor;

    if(residuo==0){
        return divisor;
    }
    while (residuo!=0){
        dividendo=divisor;
        divisor=residuo;
        if(residuo==0){
            return divisor;
        }
        
    }

  
}