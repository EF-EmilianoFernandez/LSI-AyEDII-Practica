#include <stdio.h>

int main(){
    int valor = 10;
   
    int *direccion = &valor;

    printf("\nValor: %d", valor);
    printf("\nDireccion de memoria sin puntero %p", &valor );
    printf("\nDireccion de memoria con puntero %p", direccion);
}