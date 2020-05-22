//SI ES POSITIVO, NEGATIVO O CERO :3

#include "iostream"
using namespace std;

int main(void){

    //Este es el numero
    int a;

    cout<<"\n"<<"Hola! Ingresa un numero owo/: "<<"\n";
    cin>>a;

    cout<<"------------Aguarda un momento--------------"<<"\n";
    
    if(a>0){
        cout<<"\n"<<"Tu numero es positivo :3"<<"\n";
    }
    else if(a<0){
        cout<<"\n"<<"Tu numero no es positivo :3"<<"\n";
    }
    else
    {
        cout<<"\n"<<"Tu numero es cero :3"<<"\n";
    
    }

    return 0;
    
}