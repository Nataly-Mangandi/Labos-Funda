//MOSTRAR LOS PRIMEROS 100 NUMEROS ENTEROS IMPARES

#include <iostream>
#include <math.h>
using namespace std;



int main(void){
    int n=99;
    int arreglo[100];
    
    

    cout<<"MOSTRAR LOS PRIMEROS 100 NUMEROS IMPARES \n";
    cout<<"Los numeros son: \n";
    
    int i=0;
    for(int i=99; i>=1; i--){
        arreglo[i]=n--;
         
        if(arreglo[i]%2==1){
            cout<<arreglo[i]<<"\n";
            
        }
         
        

    }
  
    return 0;

}


    

    
    




//solo muestra el 1