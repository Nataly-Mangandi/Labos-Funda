// Example program
#include <iostream>
#include <math.h>
using namespace std;

void codificarPalabra(char[]);

int main (void){
    char palabra[30];
    printf("Digite una palabra: ");
    cin.getline(palabra, 30);
    codificarPalabra(palabra);
    printf("%s", palabra);
    
}

void codificarPalabra(char palabra[]){
    int i;
    for (i=0; i<30; i++){
        switch(palabra[i]){
            case 'M': palabra[i] = '0'; break;
            case 'm': palabra[i] = '0'; break;
            case 'U': palabra[i] = '1'; break;
            case 'u': palabra[i] = '1'; break;
            case 'R': palabra[i] = '2'; break;
            case 'r': palabra[i] = '2'; break;
            case 'C': palabra[i] = '3'; break;
            case 'c': palabra[i] = '3'; break;
            case 'I': palabra[i] = '4'; break;
            case 'i': palabra[i] = '4'; break;
            case 'E': palabra[i] = '5'; break;
            case 'e': palabra[i] = '5'; break;
            case 'L': palabra[i] = '6'; break;
            case 'l': palabra[i] = '6'; break; 
            case 'A': palabra[i] = '7'; break;
            case 'a': palabra[i] = '7'; break; 
            case 'G': palabra[i] = '8'; break;
            case 'g': palabra[i] = '8'; break;
            case 'O': palabra[i] = '9'; break;
            case 'o': palabra[i] = '9'; break;
        }
    }
    
    
}

