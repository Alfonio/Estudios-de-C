#include <stdio.h>

// Prototipo de la función
int encontrarMaximo(int *arreglo, int longitud);

int main() {
    int numeros[] = {23, 56, 12, 67, 8, 45};
    int longitud = sizeof(numeros) / sizeof(numeros[0]);

    int maximo = encontrarMaximo(numeros, longitud);

    printf("El valor máximo en el arreglo es: %d\n", maximo);

    return 0;
}

// Definición de la función
int encontrarMaximo(int *arreglo, int longitud) {
    int maximo = *arreglo; // Inicializar el máximo con el primer elemento del arreglo

    for (int i = 1; i < longitud; i++) {
        if (*(arreglo + i) > maximo) {
            maximo = *(arreglo + i); // Actualizar el máximo si encontramos un valor mayor
        }
    }

    return maximo;
}