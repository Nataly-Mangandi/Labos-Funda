//DIA SIGUIENTE

#include "iostream"
#include "math.h"
using namespace std;

void DiaSiguiente(int dia, int mes, int year);
bool bisiesto(int year);
bool verificarFecha(int dia, int mes, int year);

int main(void){

    int dia, mes, year;
    do{
        cout<<"\nIngrese el dia, el mes y el a"<<(char)164<<"o: ";
        cin>>dia>>mes>>year;
       
    } while (!verificarFecha(dia, mes, year));
    
    
}

bool verificarFecha(int dia, int mes, int year ){
    if((mes==4 || mes==6 || mes==9 || mes==11) && (dia>30)){
        cout<<"El numero de dia de estos meses no puede ser mayor a 30";
       
    }else if(mes==2){
        if(bisiesto(year) && dia>29){
            cout<<"En febrero de este a"<<(char)164<<"o no deben ingresarse valores mayores a 29";
            
        }else if(dia>28){
            cout<<"Febrero solamente tiene 28 dias";
        }


    }else if((mes==1 || mes==3 || mes==5 || mes==10 || mes==12)&&(dia>31)){
        cout<<"El numero de dia de estos meses no puede ser mayor a 31";

    }else{
        return true;
    }
    return false;
}

bool bisiesto(int year){

    if(year%4==0 && year%100!=0){
        return true;
        
    }
    else{
        return false;
       
    }
}

void DiaSiguiente(int dia, int mes, int year){



}