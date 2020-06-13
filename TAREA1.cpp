//SALARIO

#include "iostream"
#include "math.h"
using namespace std;

void encontrarSalarios(int N, int HT, int HE);

int main(void){

    int N, HT, HE;

    cout<<"Ingrese el numero de empleados: ";
    cin>>N;
    
    for (int i = 0; i < N; i++){
        cout<<"Ingrese el numero de horas trabajadas del empleado: ";
        cin>>HT;

        cout<<"Ingrese el numero de horas extras del empleado: ";
        cin>>HE;

        encontrarSalarios(N, HT, HE);
    }
    
    
}

void encontrarSalarios(int N, int HT, int HE){

    int salarioTrabajo= HT*1.75;
    int salarioExtra= HE*2.50;

    int salarioTotal= salarioTrabajo + salarioExtra;
    int salarioReal= salarioTotal -0.04-0.0625;
  
    if (salarioTotal>500){
        salarioReal-0.010;
    }

    cout<<"El salario total es: "<<salarioTotal<<" dolares"<<"\n";
    cout<<"El salario real es: "<<salarioReal<<" dolares"<<"\n";

}