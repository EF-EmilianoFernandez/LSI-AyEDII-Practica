#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char tString[25];
tString *puntero;

void itemA();

int main(){
    itemA();

    return 0; 
}


void itemA(){
    tString nombre = "Maria Acosta";
    puntero = &nombre;
}