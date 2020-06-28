#include <iostream>
#include <string.h>
using namespace std;

void codificar(string, int c); //string codificar(string)

int main(void){
    string palabra;
    int c=0;
    printf("// Clave MURCIELAGO //");
    printf("\nIngrese una palabra: ");
    getline(cin, palabra);
    c=palabra.length();//cout<<codificar(palabra)
    printf("%d", c);
    codificar(palabra, c);
}

void codificar(string palabra, int c){
    int i;
    string np;
    for (i=0; i<c; i++){
        if (palabra[i]=='M' || palabra[i]=='m'){
            np[i]='0';
        } else {
            np[i]=palabra[i];
        }
    }
    printf("%s", np);
}