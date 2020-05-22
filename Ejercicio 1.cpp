//SABER SI UN NUMERO ES DIVISIBLE ENTRE OTRO :V

#include "iostream"
using namespace std;

int main (void){

    int num1;
    int num2;

    cout<< "Hola! owo/"<<"\n"<<"\n";
    cout<<"-------------------------"<<"\n"<<"\n";

    cout<<"Ingresa un numero: "<<"\n";
    cin>>num1;
    cout<<"Ingresa otro numero: "<<"\n"<<"\n";
    cin>>num2;

    cout<<"-------------------------"<<"\n"<<"\n";
    
    cout<<"Espera un momento :D... "<<"\n"<<"\n";

    int divi= num1/num2;

    if(divi*num2==num1){
        cout<<"Genial! Ambos numeros son divisibles ouo"<<"\n";
    }
    else
    {
        cout<<"Que mal! Esos numeros no son divibles ono"<<"\n";
    }

    return 0;





}

