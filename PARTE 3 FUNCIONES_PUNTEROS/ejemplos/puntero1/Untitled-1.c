#include <stdio.h>

int main() {
    int numero = 10;         // Declarar una variable entera
    int *punteroAEntero;    // Declarar un puntero a un entero

    punteroAEntero = &numero; // Asignar la dirección de memoria de 'numero' al puntero

    // Modificar 'numero' a través del puntero
    *punteroAEntero = 20;

    printf("El valor de 'numero' es: %d\n", numero);

    return 0;
}