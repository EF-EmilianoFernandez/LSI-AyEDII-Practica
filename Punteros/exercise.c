#include <stdio.h>

/*
Pedir al usuario que ingrese por teclado un valor para un string un entero y un float.
Luego imprimir los valores utilizando punterios y también las direcciones en memoriaa de cada valor 
*/

typedef char tString[20];

tString valor1;
int valor2;
float valor3;

tString *puntero1 = &valor1;
int *puntero2 = &valor2;
float *puntero3 = &valor3;

void ingreseValores();
void mostrarValores();
void mostrarEspacioMemoria();

int main(){
    ingreseValores();
    mostrarValores();
    mostrarEspacioMemoria();
    return 0;   
}

void ingreseValores(){
    printf("Ingrese un valor string: ");
    scanf("%s", &valor1);
    printf("Ingrese un valor entero: ");
    scanf("%i", &valor2);
    printf("Ingrese un valor flotante: ");
    scanf("%f", &valor3);
}

void mostrarValores(){
    printf("\nValor 1: %s", *puntero1);
    printf("\nValor 2: %i", *puntero2);
    printf("\nValor 3: %.2f", *puntero3);
}

void mostrarEspacioMemoria(){
    printf("\nValor 1: %p", &valor1);
    printf("\nValor 2: %p", &valor2);
    printf("\nValor 3: %p", &valor3);
}