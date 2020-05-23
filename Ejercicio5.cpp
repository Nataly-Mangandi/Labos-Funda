//SI LA PALABRA INICIA Y TERMINA CON LA MISMA LETRA

#include "iostream"
#include "string"

using namespace std;

int main(void){

    string palabra;


    cout<<"Hola! Ingresa una palabra owo/: "<<"\n";
    cin>>palabra;

    //Estaba malo porque el cero si lo cuenta pero como vacio, debes poner el otro :'3
    string inicio= palabra.substr(0, 1);
    string final= palabra.substr(palabra.length()-1);

    
    //palabra [0]

        
    
    if(inicio == final){
        
        cout<<"--------------------------------------------------"<<"\n";
        cout<<"La palabra inicia y finaliza con la MISMA letra :3"<<"\n"<<"\n";
        
    }
    else
    {
        cout<<"--------------------------------------------------"<<"\n";
        cout<<"La palabra NO inicia y finaliza con la misma letra :("<<"\n"<<"\n";

    }

    return 0;
}