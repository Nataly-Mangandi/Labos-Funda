//HORA UN SEGUNDO DESPUES

#include "iostream"
#include "math.h"
using namespace std;

 void NuevaHora(int hh, int mm, int ss);

int main(void){

    int hh,mm,ss;

    cout<<"Ingrese la hora, minutos y segundos: ";
    cin>>hh>>mm>>ss;
 //verificar que se ingrese un formato de hora valida. Si se ingresa un formato de hora valido, se evalua la funcion NuevaHora.
    if(hh>23 || mm>59 || ss>59){
        cout<<"Ingrese una hora valida";
    }else{
        NuevaHora(hh, mm, ss);
        
    }
  
}

void NuevaHora(int hh, int mm, int ss){
/*evaluar si la hora ingresada contiene valor de 59 en segundos, 59 en minutos y 23 en hora.
si el segundo es igual a 59 reinicia el valor a cero*/
    if(ss==59){
        ss=0;
        //se evalua si el minuto ingresado es 59 para reiniciarlo a cero o incrementarle 1.
        if(mm==59){
            mm=0;
            //se evalua si la hora ingresado es 59 para reiniciarlo a cero o incrementarle 1.
            if(hh==23){
                hh=0;

            }else{
                hh++;
            }
        }else{
            mm++;
        }
    } else{
        ss++;
    }
    cout<<"El tiempo un segundo despues es: "<<hh<<" hora(s) "<<mm<<" minuto(s) "<<ss<<" segundos";
}