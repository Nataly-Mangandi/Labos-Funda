//SI UNA ´PALABRA TIENE 10 LETRAS Y SI ES PAR O IMPAR

#include "iostream"
#include "string"
using namespace std;

int main(void){

    string texto;
    int i=0;

    cout<<"Hola! Ingresa una palabra uwu/: "<<"\n"<<"\n";
    cin>>texto;

    cout<<"\n"<<"--------Espera un momento---------"<<"\n"<<"\n";

    //if 1
    if((texto.length())<=10){
        cout<<"La palabra tiene 10 caracteres o menos"<<"\n"<<"\n";
    }
    else
    {
       cout<<"La palabra tiene mas de 10 caracteres"<<"\n"<<"\n"; 
    }

    //if 2
    if(texto.length() % 2 == 0){
        cout<<"Ademas, el numero de caracteres es par"<<"\n";
    }
    else
    {
        cout<<"Ademas, el numero de caracteres es impar"<<"\n";

    }



    return 0;


}