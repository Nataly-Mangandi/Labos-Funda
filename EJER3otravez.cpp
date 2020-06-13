//AÑO BISIESTO O NO

#include "iostream"
#include "math.h"
using namespace std;

bool bisiesto(int year);

int main(void){

    int year;
    bool siBisiesto;
    cout<<"Ingrese un a"<<(char)164<<"o:"<<"\n";
    cin>>year;

    //Evaluar year dentro de la funcion bisiesto que devuelve verdadero o falso.
    if(bisiesto(year)){

        cout<<"El a"<<(char)164<<"o "<<year<<" SI es Bisiesto";

    } else{

        cout<<"El a"<<(char)164<<"o "<<year<<" NO es Bisiesto";
    }


}

bool bisiesto(int year){

    if(year%4==0 && year%100!=0){
        return true;
        
    }
    else{
        return false;
       
    }
}