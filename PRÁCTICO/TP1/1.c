#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef char tString[25];
tString *apuntCadena;

typedef float num;
num *apuntNum;

typedef int entero;
entero *apuntEntero;

void itemA();
void itemB();
void itemC();
void itemD();
// void itemE();

int main(){
    itemA();
    itemB();
    itemC();
    itemD();
    return 0;
}

void itemA(){
    //Asignación dinámica
    printf("\nITEM A");
    apuntCadena = (tString *) malloc(sizeof(tString));
    strcpy((*apuntCadena), "Maria Acosta");
    printf("\nEl contenido de la variable apuntada es: %s", *apuntCadena);
    printf("\nLa direccion de la variable apuntada es %p", apuntCadena);
    printf("\nLa direccion de la variable puntero es: %p", &apuntCadena);
    printf("\n-------------------------------------------------------------");
}

void itemB(){
    printf("\nITEM B");
    apuntNum = (num *) malloc(sizeof(num));
    *apuntNum = 20.5;
    printf("\nEl contenido de la variable apuntada es: %.1f", *apuntNum);
    printf("\nLa direccion de la variable apuntada es %p", apuntNum);
    printf("\nLa direccion de la variable puntero es: %p", &apuntNum);
    printf("\n-------------------------------------------------------------");
}

void itemC(){
    printf("\nITEM C");
    apuntCadena = (tString *)malloc(sizeof(tString));
    strcpy((*apuntCadena), "True");
    printf("\nEl contenido de la variable apuntada es: %s", *apuntCadena);
    printf("\nLa direccion de la variable apuntada es %p", apuntCadena);
    printf("\nLa direccion de la variable puntero es: %p", &apuntCadena);
    printf("\n-------------------------------------------------------------");
}

void itemD(){
    printf("\nITEM D");
    apuntEntero = (entero *) malloc(sizeof(entero));
    *apuntEntero = 7350;
    printf("\nEl contenido de la variable apuntada es: %d", *apuntEntero);
    printf("\nLa direccion de la variable apuntada es %p", apuntEntero);
    printf("\nLa direccion de la variable puntero es: %p", &apuntEntero);
    printf("\n-------------------------------------------------------------");
}